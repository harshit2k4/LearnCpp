// Write a prototype of function add(a, b) to add two numbers

#include <iostream>

int add(int x, int y);

int main() {
    int a, b;

    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    int value { add (a, b) };
    std::cout << "Addition result is: " << value << std::endl;

    return 0;
}

int add(int x, int y) {
    return (x + y);
}