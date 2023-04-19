#include <iostream>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car():vehicle()
{
	doorNums = 0;
}

Car::Car(string m, int y, int d) :vehicle(m, y)
{
	doorNums = d;
}

int Car::getDoorAmt()
{
	return doorNums;
}

void Car::setDoorAmt(int d)
{
	doorNums = d;
}

void Car::displayInfo()
{
	vehicle::displayInfo();
	cout << "Number of doors: " << getDoorAmt() << endl;
}