# 컴파일러 지정 (CXX 대신 CX 사용)
CX = g++

# 컴파일 옵션
CXXFLAGS = -Wall -std=c++11

# 실행 파일 이름
TARGET = complex

# 소스 파일 목록
SRCS = main.cpp complex.cpp

# 오브젝트 파일 목록
OBJS = main.o complex.o

# 기본 목표
all: $(TARGET)

# 실행 파일 생성
$(TARGET): $(OBJS)
	$(CX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# main.o 생성
main.o: main.cpp complex.hpp
	$(CX) $(CXXFLAGS) -c main.cpp

# complex.o 생성
complex.o: complex.cpp complex.hpp
	$(CX) $(CXXFLAGS) -c complex.cpp

# 청소(clean) 목표
clean:
	rm $(OBJS) $(TARGET)

# 가상 목표
.PHONY: all clean
