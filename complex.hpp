#ifndef COMPLEX_HPP  // 헤더 가드 시작
#define COMPLEX_HPP

#include <iostream>
using namespace std;

// Complex 클래스 선언
class Complex {
private:
    int real;  // 실수부
    int img;   // 허수부

public:
    // 생성자: 기본값은 0
    Complex(int r = 0, int i = 0);

    // 덧셈 연산자 오버로딩
    Complex operator+(const Complex& other);

    // 복소수 출력
    void show();
};

#endif // COMPLEX_HPP
