#pragma once
#include "Vehicle.h"
class Bus : public Vehicle
{
	int people;
	int max_people;
	double petrol_amount;
	double tank_volume;
public: 
	Bus() = default;
	Bus(int p, int mp, double pa, double tv);
	double gettankvolume();
	double getpetrolamount();
	int getpeoplecount();
	int getmaxpeople();
	void arrive();
	bool leave();
};
