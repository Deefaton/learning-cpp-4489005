// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string> //string header containing string class
#include <cstring> // contains functions to handle character array strings

int main(){
    const size_t LENGTH1 = 25;
    // Two strings defined using char arrays
    char array_str1[LENGTH1] = "Hey guys! "; // All bits after the last character are 0
    char array_str2[] = "What's up?";
    // Two strings defined using string class of C++
    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's it going?"; 
    // The strncat function takes 3 arguments, first destination string, then second array to concatenate and lastly maximum length to produce.
    // This will actually slightly modify the string
    strncat(array_str1, array_str2, LENGTH1);
    std::cout << array_str1 << std::endl;
    
    // For the string class we can do this - no modification, both strings remain intact after the operation
    std::cout << std_str1 + std_str2 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
