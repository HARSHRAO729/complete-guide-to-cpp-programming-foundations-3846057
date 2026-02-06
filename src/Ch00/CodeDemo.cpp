// Complete Guide to C++ Programming Foundations
// Exercise 00_03 with examples
// Using the Exercise Files in GitHub Codespaces, by Eduardo Corpeño 

#include <iostream>

int main(){
    float number_1, number_2, result;

    std::cout << "Enter number 1: " << std::flush;
    std::cin >> number_1;
    std::cout << "Enter number 2: " << std::flush;
    std::cin >> number_2;
    
    result = number_1 + number_2;
    
    std::cout << "The result of the addition is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
