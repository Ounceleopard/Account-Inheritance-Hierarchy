// Brayan Villatoro CSCI 373: Fall 2020
#include <stdexcept> //invalid agrument lib 
#include "SavingsAccount.h"
using namespace std;
 
// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate )
   : Account( initialBalance ) // initialize base class
{
   if ( rate >= 0.00 )
      getInterest = rate;
   else
      throw invalid_argument( "ERROR::Interest rate must be greater than 0.00" );
} 
 
// return the amount of interest earned
double SavingsAccount::calculateInterest()
{
   return getBalance() * getInterest;
} 

/*
void SavingsAccount::setInterest(getInterest) // reset interest rate? 
{
    0.0 = getInterest;
}
*/