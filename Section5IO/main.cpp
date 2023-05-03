// Section 5
//  Basic I/O using cin and cout
#include <iostream>
using namespace std;

int main() {
    //endl is a special character that ends the line
    bool bValue = false;
    cout << bValue << endl;
    int num1;
    int num2;
    double num3;
    cout << "Enter an integer: ";
    // Extracting from input stream
    cin >> num1;
    cout << "You entered: " << num1 << endl;
    cout << "Hello, World!" << endl;
    cout << "Hello\nI'm a C++ programmer" << endl;
    return 0;
}
