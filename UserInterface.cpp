#include "UserInterface.h"
#include <iostream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>
using namespace std;
void UserInterface::displayFailureMessage()
{
	//This would normally be displayed on some form of LCD on the apparatus
	cout << "Purchase failed. If this is believed to be a mistake, please try again.";
	std::this_thread::sleep_for(std::chrono::seconds(3));
	system("CLS");

}

void UserInterface::displayOrderCollectionNotice()
{
	cout << "Please collect your purchase from the collection drawer.";
	std::this_thread::sleep_for(std::chrono::seconds(3));
	system("CLS");
}
