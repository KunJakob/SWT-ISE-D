#include "MotorInterface.h"
#include "PaymentInterface.h"
#include "UserInterface.h"
#include "VendingMachineLogic.h"
#include <iostream>

int main(void) {
	MotorInterface motor;
	PaymentInterface payment;
	UserInterface user;
	VendingMachineLogic vend(&motor, &payment, &user);


	//dette while-loop skal imitere personen der trykker på knapper i 
	while (true) {
		
		int selected;
		cout << "which product would you like? (0-21): ";
		cin >> selected;
		system("CLS");
		vend.selectProduct(selected);

	}
}