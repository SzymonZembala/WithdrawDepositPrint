/* 
 * Name   : practical1.cpp
 * Purpose: To test the Accont Class
 */
#include"Account.h"
#include <iostream>

using namespace std;

//Post: Print menu, accept user character input and return uppercase character
char getOption() {
	char option;
	cout << endl;
	cout << "D-deposit, W-withdraw, P-print, Q-quit ";
	cin >> option;
	// toupper = c++ method to convert a char
	// to uppercase
	return toupper(option);
}

//main method
int main() {
	
	float amount;			//variable to store user input
	Account ac(0);			//account initilized to 0

	//get user option
	char option = getOption();

	//sentinel controlled loop repeats until option 'Q'
	while (option != 'Q') {
		if (option == 'D') { //deposit option
			cout << "Enter amount to deposit: ";
			cin >> amount;
			//check that the deposit amount is valid
			if (amount > 0)
				ac.deposit(amount);
			else
				cout << "Invalid deposit: " << amount << endl;
		}
		else if (option == 'W') { //withdraw option
			cout << "Enter amount to withdraw: ";
			cin >> amount;
			//check that account has sufficient funds
			if (amount <= ac.getBalance())
				ac.writeCheque(amount);
			else
				cout << "Insufficient funds" << endl;
		}
		else if (option == 'P') { // print account details
			cout << "Balance: " << ac.getBalance();
			cout << " LastCheque: " << ac.getLastCheque() << endl;
		}

		//get next option
		option = getOption();
	}

	cout << "Thank you for using the Account program" << endl;

	return 0;

}