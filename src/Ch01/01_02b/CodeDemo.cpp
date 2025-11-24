// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 
// The first line includes the libraries we will use, this is a pre-processor directive. Here we use iostream which is part of the C++ standard library. 
// iostream contains objects and functions to print text to the screen and recieve text from keyboard
#include <iostream>
// Create main function which returns an integer
int main() {
    // using object std from iostream, membership to standard library represented by the "scope resolution operator" the double colon
    // the object is called "cout" which is short for character output - it represents the character window - we need to send text to it
    // We can send things consecutively, here we send a new line character as well "endl"
    std::cout << "Hi there!" << std::endl;


    std::cout << std::endl << std::endl;
    //The return value - the main function returns an integer
    // Use 0 which traditionally means executed without errors
    return(0);

}