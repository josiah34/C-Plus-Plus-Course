#include <iostream>

int main() {
    //Printing a string to the console window8
    std::cout << "Enter your favourite number between 1 and 100: ";

    //Declaring a variable of type int
    int number;
    //Getting input from the user and assigning it to the variable
    std::cin >> number;
    //Printing the variable to the console window
    std::cout << number << " is my favourite number too!" << std::endl;
    return 0;
}
