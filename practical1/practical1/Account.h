/* *******************************************************
 * Name   : Account.h
 * Purpose: Definition of an Account containing a balance
 * Author : Szymon Zembala
 * Version: 1.0
 * ******************************************************/

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>

class Account
{
public:
    Account(float amount);                  //Constructor to initilize account
                                            //mutator method

    void writeCheque(float amount);         //reduce balance by amount
    void deposit(float amount);             //increase balance by amount

                                            //accesor method
    float getBalance() const;               // retrive current balance
    float getLastCheque() const;            //retrieve last cheque amount

    //overload Account equality method
    bool operator == (const Account& other) const;

private:                                    //member variable
    float balance;                          //account balance
    float last_cheque;                      //value of last cheque
};

#endif