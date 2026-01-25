#include <iostream>
#include <iostream>
#include "math_utils.h"
#include "Class_Object.h"   // 🔥 THIS WAS MISSING

using namespace std;

// Main Program Start Here
int main() {
    cout << "Hello from WSL + CMake!" << endl;
    cout << "add(5, 3) = " << add(5, 3) << endl;
    cout << "sub(5, 3) = " << sub(5, 3) << endl;
    cout << "divide(4, 2) = " << divide(4, 2) << endl;
    cout << "mul(6, 3) = " << mul(6, 2) << endl;

    // Print program description
    cout << "This Program is about Class and Object\n";

    // Create an object 'obj' of class MyClass
    MyClass obj;

    // Call the member function using the object
    // Passing value 10 as input to check even or odd
    cout << "10 is " << obj.FindStrEvenOrOdd(10) << endl;

    // Call the member function using the object
    // Passing value 10 as input to check even or odd
    cout << "3 is " << obj.FindStrEvenOrOdd(3) << endl;
   // Use string-returning function for printing

    // Return 0 indicates successful program execution
    return 0;
}
