// Write a program to get the value from the user using a function

#include <iostream>

int getValueFunction() {
    int num {};
    std::cout << "Enter any number: ";
    std::cin >> num;
    return num;
}

int main() {
    int value;

    value = getValueFunction();
    // Another way to get data is
    int num { getValueFunction() };

    std::cout << "The value is: " << value << std::endl;
    std::cout << "The num is: " << num << std::endl;

    return 0;
}