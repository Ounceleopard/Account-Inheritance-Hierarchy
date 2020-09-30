// Brayan Villatoro CSCI 373: Fall 2020
#ifndef SAVINGS_H
#define SAVINGS_H
#include "Account.h" // Derived from class Account 
 
class SavingsAccount : public Account // Data from account input
{
public:
   // constructor initializes balance and interest rate *saving rate in main()
   SavingsAccount( double, double );
 
   //void setInterest (double) // To reset rate 
   double calculateInterest(); // determine interest owed :: Does not increase account Requirement #1 
private:
   double getInterest; // interest rate (percentage) earned by account
}; // end class SavingsAccount
 
#endif
