// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

// Notice the variables are declared on the same indentation as the main function - this means a and b are global variables and therefore accessible to all parts of the code.
int a, b = 5; //can declare several variables in one line here a is not yet assigned, b is assigned 5
int main(){
    bool my_flag;
    a = 7; // assign variables
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
