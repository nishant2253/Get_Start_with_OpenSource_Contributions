// LANGUAGE: C++
// ENV: vscode
// AUTHOR: nishant gupta
// GITHUB: https://github.com/nishant2253





#include <iostream>

unsigned long long factorial(int n) {
    if (n < 0) {
        return 0;
    } else if (n == 0 || n == 1) {
        return 1;
    }

    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    int num;
    
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        unsigned long long fact = factorial(num);
        std::cout << "Factorial of " << num << " is " << fact << std::endl;
    }

    return 0;
}

