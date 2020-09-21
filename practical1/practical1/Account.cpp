// Implementation of Account

#include "Account.h"

//PostCondition: Initialises the Account with amount provided
Account::Account(float amount = 0.0) {
	balance = amount;
	last_cheque = 0;
}

//PreCondition: amount is valid and has sufficient funds
//ProCondition: balance is reduced by amount
void Account::writeCheque(float amount) {
	if (amount > 0 && amount <= balance) {
		balance -= amount;
		last_cheque = amount;
	}
}

//PreCondition: amount is a positive non zero value
//PostCondition: amount added to balance
void Account::deposit(float amount) {
	if (amount > 0)
		balance += amount;
}

//PostCondition: balance amount is returned
float Account::getBalance() const {
	return balance;
};

//PostCondition: lasr_cheque amount is retuned
float Account::getLastCheque() const {
	return last_cheque;
};

//PostCondition: returns true if balance and last cheque values are equal to
//				 other account balance and last cheque values, false otherwise
bool Account::operator==(const Account& other) const
{
	if (balance == other.balance && last_cheque == other.last_cheque)
		return true;
	else
		return false;
}