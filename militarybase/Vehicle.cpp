#include "Vehicle.h"
#include "Base.h"
#include <iostream>
using namespace std;


Vehicle::Vehicle(double pa, double tv) : petrol_amount(pa), tank_volume(tv)
{
}

double Vehicle::getTankVolume()
{
    return tank_volume;
}

double Vehicle::getPetrolAmount() 
{
    return petrol_amount;
}

void Vehicle::arrive()
{
    cout << "Vehicle arrived at the base." << endl;
}

bool Vehicle::leave()
{
    if (Base::petrol_on_base > 0) {
        if (petrol_amount < tank_volume) {
            petrol_amount += (tank_volume - petrol_amount);
        }

        return true;
    }

    return false;
}