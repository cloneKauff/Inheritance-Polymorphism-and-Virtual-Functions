// Morgan Kauffer
// CIS 1202 501
// April 19, 2023

#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "Vehicle.h"

using namespace std;

int main()
{
	string m; // holds manufacturer name
	int d; // holds number of doors on vehicle
	int o; // holds towing capacity
	int y; // holds build year of vehicle

	cout << "Vehicle Program" << endl << endl;
	cout << "Vehicle: " << endl;
	
	cout << "Enter the name of the manufacturer: ";
	cin >> m;

	cout << "Enter the year the vehicle was built: ";
	cin >> y;

	vehicle v(m, y);
	v.displayInfo();

	cout << "\nCar: " << endl;

	cin.clear();
	cin.ignore(100, '\n');

	cout << "Enter the name of the manufacturer: ";
	cin >> m;

	cout << "Enter the year the vehicle was built: ";
	cin >> y;

	cout << "Enter the number of doors on the vehicle: ";
	cin >> d;

	Car c(m, y, d);
	c.displayInfo();

	cout << "\nTruck: " << endl;

	cin.clear();
	cin.ignore(100, '\n');

	cout << "Enter the name of the manufacturer: ";
	cin >> m;

	cout << "Enter the year the vehicle was built: ";
	cin >> y;

	cout << "Enter the towing capacity: ";
	cin >> o;

	Truck t(m, y, o);

	t.displayInfo();

	system("pause");
	return 0;
}