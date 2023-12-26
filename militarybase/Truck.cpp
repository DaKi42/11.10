#include "Truck.h"
#include "Base.h"

Truck::Truck(double l, double ml, double pa, double tv)
{
    load = l;
    max_load = ml;
    petrol_amount = pa;
    tank_volume = tv;
}

double Truck::getCurrentLoad()
{ 
    return load;
}

double Truck::getMaxLoad()
{
    return max_load;
}

void Truck::arrive()
{
    Base::goods_on_base += load;
    load = 0;
}

bool Truck::leave()
{
    if (Base::goods_on_base > 0) {
        load = (Base::goods_on_base - max_load);
        Base::goods_on_base -= load;
        Vehicle::leave();
    }
    else {
        return false;
    }
}