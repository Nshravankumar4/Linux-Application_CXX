#include <iostream>           // Include I/O library for cout
#include "EncapsulationBankAccount.h"      // Include the header file of the class
using namespace std;          // Allows using cout without std::

/* Constructor definition */
EncapsulationBankAccount::EncapsulationBankAccount(double initBalance) {
    balance = initBalance;     // Initialize the private balance with the given value
}

/* Deposit function definition */
void EncapsulationBankAccount::deposit(double amount) {
    balance += amount;         // Add the given amount to the current balance
}

/* Withdraw function definition */
void EncapsulationBankAccount::withdraw(double amount) {
    if (amount <= balance) {   // Check if withdrawal is possible
        balance -= amount;     // Deduct amount from balance
    } else {
        cout << "Insufficient balance!" << "\n"; // Print error if not enough balance
    }
}

/* Getter function definition */
double EncapsulationBankAccount::getBalance() const{
    return balance;            // Return the current balance
}

