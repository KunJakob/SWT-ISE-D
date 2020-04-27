#include "Product.h"
double Product::getPrice()
{
	return price_;
}

Product::Product(double price)
{
	price_ = price;
}
