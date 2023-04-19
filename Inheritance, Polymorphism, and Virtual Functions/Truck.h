#pragma once
#ifndef TRUCK_H_
#define TRUCK_H_

#include<iostream>
#include "Vehicle.h"

using namespace std;

class Truck:public vehicle
{
	int towCapacity;
public:
	Truck();
	Truck(string m, int y, int t);
	int getTowingCap();
	void setTowCapacity(int t);
	void displayInfo();
};

#endif

