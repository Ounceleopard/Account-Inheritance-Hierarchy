/*	
	Name: Account Inheritance Hierarchy
	Copyright: Brayan Villatoro 
	Author: Brayan Villatoro
	Date: 09/13/2020 10:48PM
	Description:  
	
	CSCI-373 (FALL 2020) (Prof. Abdu) (Assignment 2) (John Jay College) 
	-----------------------------------------------------------------------------------
	o Account 	  				 -Line 00- -Account.h/.cpp-
	o Saving account 				 -Line 00- -Saving Account.h/.cpp-
	o Checking account  			  	 -Line 00- -Checking Account.h/.cpp-
	
	• 3 header files 	  (one for each class – one base class and 2 derived classes).
	• 3 source code files (one for each class implementation).
	• 1 source code file that contains main() to test your classes. 
*/
#include <iostream>
#include <iomanip>
#include "Account.h" // Account class definition
#include "SavingsAccount.h" // SavingsAccount class definition
#include "CheckingAccount.h" // CheckingAccount class definition
using namespace std;
 
double AccountData; double SavingData; double SavingRate; double CheckingData; double transFee;

int main()
{
   // Non-user defined data to test 
	/*
   Account account1( 90.0 ); // create Account object
   SavingsAccount account2( 35.0, .05 ); // create SavingsAccount object
   CheckingAccount account3( 50.0, 5 ); // create CheckingAccount object
 	*/
	
	// User defined data input mode   
	// /*
	cout << "Enter account amount ($25 minimum): $"; 
	cin >> AccountData;
	cout << "\nEnter Saving account ($35 minimum): $"; // Balance 
	cin >> SavingData;
	cout << "\nEnter Saving account interest rate (1.00% -> 5.00%): %"; // Interest
	cin >> SavingRate;
	cout << "\nEnter Checking account (No minimum): $"; // Balance 
	cin >> CheckingData;
	cout << "\nEnter transcation fee ($5 flat fee): $"; // Zero = error code 
	cin >> transFee; 
   
   Account account1( AccountData ); // create Account object
   SavingsAccount account2( SavingData, SavingRate ); // create SavingsAccount object
   CheckingAccount account3(CheckingData, transFee ); // create CheckingAccount object
   //*/
   // Mark at this line to close user defined data input and test non-user defined data 
  
   // OUTPUT: initial balance of each object
   cout << "\nAccount1 balance: $" << account1.getBalance() << endl;
   cout << "Account2 balance: $" << account2.getBalance() << endl;
   cout << "Account3 balance: $" << account3.getBalance() << endl;
 
   cout << "\nAttempting to debit $25.00 from account1." << endl;
   account1.debit( 25.0 ); // Attempt to remove $25.00 from account1
   cout << "\nAttempting to debit $30.00 from account2." << endl;
   account2.debit( 35.0 ); // Attempt to remove $35.00 from account2
   cout << "\nAttempting to debit $40.00 from account3." << endl;
   account3.getFee( 45.0 ); // Attempt to remove $45.00 from account3
 
   // OUTPUT: account balances (- money)
   cout << "\naccount1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;
   cout << "account3 balance: $" << account3.getBalance() << endl;
 
   cout << "\nAdding $40.00 to account1." << endl;
   account1.credit( 40.0 ); // credit $40.00 to account1
   cout << "\nAdding $65.00 to account2." << endl;
   account2.credit( 65.0 ); // credit $65.00 to account2
   cout << "\nAdding $20.00 to account3." << endl;
   account3.credit( 20.0 ); // credit $20.00 to account3
 
   // OUTPUT: new account balances (+ money)
   cout << "----------------------------------------" << endl;
   cout << "Account1 balance: $" << account1.getBalance() << endl;
   cout << "Account2 balance: $" << account2.getBalance() << endl;
   cout << "Account3 balance: $" << account3.getBalance() << endl;
 
   // add interest to SavingsAccount object account2
   double interestEarned = account2.calculateInterest();
   cout << "\nAdding $" << interestEarned << " of interest to Account2."<< endl;
   account2.credit( interestEarned );
   cout << "\nAccount2's new balance is: $" << account2.getBalance() << endl;
} 
