#include <iostream>

int main() {
    int a;         // default-initialization (no initializer)

    // Traditional initialization forms:
    int b = 5;     // copy-initialization (initial value after equals sign)
    int c ( 6 );   // direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    int d { 7 };   // direct-list-initialization (initial value in braces)
    int e {};      // value-initialization (empty braces) default value is 0

    // C++17 introduced the [[maybe_unused]] attribute, 
    // which allows us to tell the compiler that we’re okay with a variable being unused. 
    // The compiler will not generate unused variable warnings for such variables.

    [[maybe_unused]] double PI { 3.14 };
    [[maybe_unused]] double mass { 3.14 };
    int number { 10 };
    std::cout << number;

}