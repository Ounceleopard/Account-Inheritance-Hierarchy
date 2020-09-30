// Brayan Villatoro CSCI 373: Fall 2020
#include <stdexcept> // invalid argument 
#include <iostream>
#include "Account.h"
using namespace std;
 
// Account: constructor initializes data member balance
Account::Account( double initialBalance ) // Requirement #1 (more than zero) 
{
   // as the balance of the Account
   if ( initialBalance > 0.00 ) 
      balance = initialBalance;
   else // If less than zero ERROR 
      throw invalid_argument( "ERROR::Initial balance cannot be less than ($0.01)" );
} // End account


// Credit: Adding to the exisiting amount in account balance
void Account::credit( double amount ) // Requirement #2 (credit)
{
   balance = balance + amount; 
} // End credit 
 

// Debit: Subtracting an amount from the account balance
bool Account::debit( double amount ) // Requirement #3
{
   if ( amount > balance ) // Overdraw 
   {
      cout << "ERROR::Debit amount withdraw exceeded your account balance." << endl;
      return false; // Failure bool
   } // end if: True bool
   else // Debit amount does not exceed the actual balance
   {
      balance = balance - amount; // Withdraw amount - account balance 
      return true;
   } // end else
} // End debit
 

// set the account balance
void Account::setBalance( double newBalance ) // Requirement #5
{
   balance = newBalance;
} // end function setBalance
 

// return the account balance
double Account::getBalance()  // Requirement #4
{
   return balance;
} // end function getBalance
