#include "complex.hpp"

// 생성자 정의
Complex::Complex(int r, int i) : real(r), img(i) {}

// 덧셈 연산자 정의
Complex Complex::operator+(const Complex& other) {
    return Complex(real + other.real, img + other.img);
}

// 출력 함수 정의
void Complex::show() {
    cout << real;
    if (img >= 0) cout << "+";
    cout << img << "j" << endl;
}
