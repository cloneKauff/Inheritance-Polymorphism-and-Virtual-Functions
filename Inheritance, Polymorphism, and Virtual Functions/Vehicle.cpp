#include <iostream>
#include "Vehicle.h"

using namespace std;

vehicle::vehicle()
{
	manufacturerName = "";
	buildYear = 0;
}

vehicle::vehicle(string m, int y)
{
	manufacturerName = m;
	buildYear = y;
}

string vehicle::getManu()
{
	return manufacturerName;
}

int vehicle::getYear()
{
	return buildYear;
}

void vehicle::setManu(string m)
{
	manufacturerName = m;
}

void vehicle::setYear(int y)
{
	buildYear = y;
}

void vehicle::displayInfo()
{
	cout << "\nVehicle information: " << endl;
	cout << "Manufacturer name: " << getManu() << endl;
	cout << "Year vehicle was built: " << getYear() << endl;
}