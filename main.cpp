#include <iostream>
#include "calculator.h"

int main() {
    // Testing each function in the calculator library
    std::cout << "Addition: " << add(22, 41) << std::endl;
    std::cout << "Subtraction: " << subtract(71, 22) << std::endl;
    std::cout << "Multiplication: " << multiply(36, 5) << std::endl;
    std::cout << "Division: " << divide(99, 3) << std::endl;
    std::cout << "Factorial of 5: " << factorial(6) << std::endl;
    std::cout << "GCD of 48 and 18: " << gcd(48, 18) << std::endl;
    std::cout << "LCM of 4 and 5: " << lcm(4, 5) << std::endl;
    std::cout << "Random number between 1 and 10: " << generateRandom(1, 10) << std::endl;

    return 0;
}
