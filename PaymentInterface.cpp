#include "PaymentInterface.h"
#include <random>
#include <functional>

auto gen = std::bind(std::uniform_int_distribution<>(0, 1), std::default_random_engine());

bool PaymentInterface::startTransaction(double)
{
	//We will use a random number generator to test both the transactions being valid and invalid
	
	return gen();
}
