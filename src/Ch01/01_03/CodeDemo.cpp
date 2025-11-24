// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string> //library with cin

int main(){
    std::string str; //string variable declaration
    std::cout << "What is your name? " << std::flush; // flush makes sure the output is sent to the terminal before waiting for user input
    std::cin >> str; // capture user input
    std::cout << "Hello " << str << "!" << std::endl; // Hello message with user input

    std::cout << std::endl << std::endl;
    return (0);
}
