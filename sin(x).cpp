#include <iostream>
#include "math.h"

int factorial(int n) {
    if (n < 2) {
        return 1;
    }
    return n * factorial(n - 1);
}

double sinus(double x) {
    double sum = 0;
    for (int n = 1; n <= 5; ++n) {
        sum += pow(-1, n - 1) * pow(x, 2 * n - 1) / factorial(2 * n - 1);
    }
    return sum;
}

int main() {
    std::cout << sinus(3.14159/2);
}
