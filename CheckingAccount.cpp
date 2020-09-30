// Brayan Villatoro CSCI 373: Fall 2020
#include <iostream>
#include <stdexcept> //invalid argument lib
#include "CheckingAccount.h"
using namespace std;
 

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee )
   : Account( initialBalance ) 
{
   if ( fee >= 0.0 )
      transactionFee = fee;
   else
      throw invalid_argument( "ERROR::Transaction fee must be more than 0.0" );
} // end CheckingAccount constructor
 
// credit (add) an amount to the account balance and charge fee
void CheckingAccount::setFee( double amount )
{
   Account::credit( amount ); // always succeeds
   ChargeFee();
} // end function credit
 
// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount:: getFee( double amount )
{
   bool success = Account::debit( amount ); // attempt to debit: Taken from account.h
 
   if ( success ) // if money was debited, charge fee and return true
   {
      ChargeFee();
      return true;
   } // end if
   else // otherwise, do not charge fee and return false
      return false;
} // end function debit
 
// subtract transaction fee
void CheckingAccount::ChargeFee() //transFee in main
{
   Account::setBalance( getBalance() - transactionFee ); //Amount - Fee to output in main()
   cout << "\n$" << transactionFee << " transaction fee charged." << endl; // output in main()
} 

// setFee = fee , amount = getFee 