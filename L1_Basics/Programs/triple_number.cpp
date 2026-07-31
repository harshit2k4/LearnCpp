/*
Write a program above so that it outputs like this:
Enter an integer: 4
Double 4 is: 8
Triple 4 is: 12
*/

#include <iostream>

int main() {
    int number {};
    std::cout << "Enter a number: ";
    
    std::cin >> number;

    // double the number
    std::cout << "Double of number is: " << number * 2 << std::endl;
    // triple the number
    std::cout << "Triple of number is: " << number * 3 << std::endl;

    return 0;
}