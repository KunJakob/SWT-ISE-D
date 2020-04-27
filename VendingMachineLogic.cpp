#include "VendingMachineLogic.h"


VendingMachineLogic::VendingMachineLogic(MotorInterface* m, PaymentInterface* p, UserInterface* u)
{
	
	motor_ = m;
	payment_ = p;
	user_ = u;

	//test elements. In other use cases it's defined how these would be added.
	products_.push_back(Product(500));
	products_.push_back(Product(150));
	products_.push_back(Product(300));
	products_.push_back(Product(700));
}

void VendingMachineLogic::selectProduct(int selectedValue)
{
	if (selectedValue >= 0 && selectedValue < products_.size()) {
		if (!payment_->startTransaction(products_[selectedValue].getPrice())) {
			user_->displayFailureMessage();
		}
		else {
			motor_->dispenseProduct(selectedValue);
			user_->displayOrderCollectionNotice();
		}
	}
}
