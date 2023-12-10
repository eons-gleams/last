// main.cpp
#include <iostream>
#include "factorial.h"

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number < 0) {
        std::cerr << "Error: Factorial is not defined for negative numbers." << std::endl;
        return 1; // Exit with an error code
    }

    long long result = calculateFactorial(number);

    std::cout << "The factorial of " << number << " is: " << result << std::endl;

    return 0;
}
