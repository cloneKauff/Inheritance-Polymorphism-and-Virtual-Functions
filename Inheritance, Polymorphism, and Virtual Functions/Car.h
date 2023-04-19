#pragma once
#ifndef CAR_H_
#define CAR_H_

#include <iostream>
#include "Vehicle.h"

using namespace std;

class Car : public vehicle
{
	int doorNums;
	
public:
	Car();
	Car(string m, int y, int d);
	int car(string m, int y, int d);
	int getDoorAmt();
	void setDoorAmt(int d);
	void displayInfo();
};

#endif
