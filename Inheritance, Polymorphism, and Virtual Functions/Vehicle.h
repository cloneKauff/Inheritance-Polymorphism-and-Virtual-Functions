#pragma once
#ifndef VEHICLE_H_
#define VEHICLE_H_

// To allow input and output
#include <iostream>

using namespace std;

class vehicle
{
	string manufacturerName;
	int buildYear;

public:
	vehicle();
	vehicle(string m, int y);
	string getManu();
	int getYear();
	void setManu(string m);
	void setYear(int y);
	void displayInfo();
};

#endif

