// Brayan Villatoro CSCI 373: Fall 2020
#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h" // Derived from class Account #2
 
class CheckingAccount : public Account
{
public:
   // constructor initializes balance and transaction fee
   CheckingAccount( double, double );
 
   void setFee( double ); // Account's fee 
   bool getFee (double ); // Function to print setFee in main 
private:
   double transactionFee; // fee charged per transaction
 
   // utility function to charge fee
   void ChargeFee();
}; 
 
#endif
