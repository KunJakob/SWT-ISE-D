#pragma once
#include "MotorInterface.h"
#include "PaymentInterface.h"
#include "UserInterface.h"
#include "Product.h"
#include <vector>

using namespace std;

class VendingMachineLogic
{
private:
	vector<Product> products_;
	MotorInterface* motor_;
	PaymentInterface* payment_;
	UserInterface* user_;
public:
	VendingMachineLogic(MotorInterface*, PaymentInterface*, UserInterface*);
	void selectProduct(int);
};

