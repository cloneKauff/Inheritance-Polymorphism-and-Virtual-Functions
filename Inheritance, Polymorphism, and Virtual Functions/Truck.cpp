#include <iostream>
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

Truck::Truck() :vehicle()
{
	towCapacity = 0;
}

Truck::Truck(string m, int y, int t) :vehicle(m, y)
{
	towCapacity = t;
}

int Truck::getTowingCap()
{
	return towCapacity;
}

void Truck::setTowCapacity(int t)
{
	towCapacity = t;
}

void Truck::displayInfo()
{
	vehicle::displayInfo();
	cout << "Towing capacity: " << getTowingCap() << endl;
}