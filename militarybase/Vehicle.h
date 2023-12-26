#pragma once
class Vehicle
{
	double petrol_amount;
	double tank_volume;

public:
	Vehicle() = default;
	Vehicle(double pa, double tv);
	double getTankVolume();
	double getPetrolAmount();
	void arrive();
	bool leave();
};
 