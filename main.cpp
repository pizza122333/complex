#include <iostream>
#include "complex.hpp"  // Complex 클래스 포함
using namespace std;

int main() {
    Complex x(2, 3), y(-5, 10), sum;
    sum = x + y;  // Complex 덧셈
    cout << "두 복소수의 합은 ";
    sum.show();
    return 0;
}
