// TODO: Create a program that asks the user to enter an integer, 
// waits for them to input an integer, then tells them what 2 times that number is.

#include <iostream>

int main() {
    int number {};
    std::cout << "Enter a number to double: ";
    std::cin >> number;

    // double the number
    number = number * 2;

    std::cout << "The double of number is: " << number << std::endl;

    return 0;
}