#include "Bus.h"
#include "Base.h"
#include <iostream>
using namespace std;

Bus::Bus(int p, int mp, double pa, double tv)
{
    people = p; 
    max_people = mp;
    petrol_amount = pa;
    tank_volume = tv;
}

double Bus::getTankVolume()
{
    return tank_volume;
}

double Bus::getPetrolAmount()
{
    return petrol_amount;
}

int Bus::getPeopleCount()
{
    return people;
}

int Bus::getMaxPeople()
{
    return max_people;
}

void Bus::arrive()
{
    cout << "Bus arrived at the base." << endl;
    Base::people_on_base += people;
    people = 0;
}

bool Bus::leave()
{
    if (Base::people_on_base > 0) {
        people = (max_people - Base::people_on_base);
        Base::people_on_base -= people;

        Vehicle::leave();
    }
    else {
        return false;
    }
}