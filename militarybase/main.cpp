#include <iostream>
#include "Base.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Truck.h"
using namespace std;

int Base::people_on_base = 3;
int Base::vehicles_on_base = 4;
double Base::petrol_on_base = 5000.0;
double Base::goods_on_base = 1000.0;

int main() {

    Vehicle veh(20, 100); 
    Bus bus(10, 20, 150, 150);
    Truck truck(30, 30, 10, 200);

    veh.arrive();
    if (veh.leave()) {
        cout << "Vehicle has left the base." << "\n\n";
    }
    else {
        cout << "Vehicle has not left the base." << "\n\n";
    }

    bus.arrive();
    cout << "Bus tank capacity: " << bus.gettankvolume() << " liters" << endl;
    if (bus.leave()) {
        cout << "Bus has left the base." << "\n\n";
    }
    else {
        cout << "Bus has not left the base." << "\n\n";
    }
    cout << "Bus has " << bus.getpeoplecount() << " passengers on board." << endl;

    truck.arrive();
    if (truck.leave()) {
        cout << "Truck has left the base." << "\n\n";
    }
    else {
        cout << "Truck has not left the base." << "\n\n";
    }
    cout << "Truck is carrying " << truck.getcurrentload() << " kg of goods." << endl;
}
