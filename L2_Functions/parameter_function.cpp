// Write a program that doubles a number.
// Take input using a function and double the input using a function

#include <iostream>

int takeInput() {
    int num;
    std::cout << "Input a number: ";
    std::cin >> num;

    return num;
}

void doubleNumber(int num) {
    std::cout << "The number when doubled is: " << num * 2 << std::endl;
}

int main() {
    int value { takeInput() };

    doubleNumber(value);

    return EXIT_SUCCESS; // or return 0;
}