#pragma once
#include "Vehicle.h"

class Truck : public Vehicle
{
	double load;
	double max_load;
	double petrol_amount;
	double tank_volume;
public:
	Truck(double l, double ml, double pa, double tv);
	double getcurrentload();
	double getmaxload();
	void arrive();
	bool leave(); 
};
