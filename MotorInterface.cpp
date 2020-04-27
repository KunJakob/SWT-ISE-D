#include "MotorInterface.h"
#include <thread>         // std::this_thread::sleep_for
#include <chrono>
void MotorInterface::dispenseProduct(int)
{
	std::this_thread::sleep_for(std::chrono::seconds(3));
}
