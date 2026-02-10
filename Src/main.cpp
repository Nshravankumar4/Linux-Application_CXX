#include <iostream>
#include <iostream>
#include "math_utils.h"
#include "Class_Object.h"   // 🔥 THIS WAS MISSING
#include "EncapsulationBankAccount.h"
#include "InheritanceVehicleCar.h"

using namespace std;

// Main Program Start Here
int main() {
    cout << "Hello from WSL + CMake!\n";
    cout << "add(5, 3) = " << add(5, 3)<<"\n";
    cout << "sub(5, 3) = " << sub(5, 3)<<"\n";
    cout << "divide(4, 2) = " << divide(4, 2) <<"\n";
    cout << "mul(6, 3) = " << mul(6, 2) <<"\n";

    // Print program description
    cout << "This Program is about Class and Object\n";

// Create an object 'obj' of class MyClass
    MyClass obj;

    // Call the member function using the object
    // Passing value 10 as input to check even or odd
    cout << "10 is " << obj.FindStrEvenOrOdd(10)<<"\n";

    // Call the member function using the object
    // Passing value 10 as input to check even or odd
    cout << "3 is " << obj.FindStrEvenOrOdd(3) <<"\n";
    // Use string-returning function for printing

    
// Create an object 'acc' of BankAccount class with initial balance 1000
    BankAccount acc(1000);

    // Deposit 500 into the account
    acc.deposit(500);

    // Withdraw 200 from the account
    acc.withdraw(200);

    // Print the current balance using getBalance()
    cout << "Current Balance: " << acc.getBalance() << "\n";

    // Try withdrawing more than the balance to see the error message
    acc.withdraw(2000);

// ------------------- Main Function for Tests -------------------

// Google Test provides its own main function
// But if needed, we can define our own main like this:
//int main(int argc, char **argv) {
  //  ::testing::InitGoogleTest(&argc, argv);  // Initialize GTest
    //return RUN_ALL_TESTS();                  // Run all defined test cases
//}


Car cr;
cr.setSpeed(10);
cout << "Car Speed is: ";
cr.showSpeed();   // void function prints inside

Bike bk;
bk.setSpeed(100);
cout << "Bike is: " << bk.AlertFunction() << "\n";  // call via object

    // Return 0 indicates successful program execution
    return 0;
}
