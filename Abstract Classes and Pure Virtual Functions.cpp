#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car starts with a key." << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() {
        cout << "Bike starts with a self-start button." << endl;
    }
};

int main() {
    Car c;
    Bike b;

    Vehicle *v;

    v = &c;
    v->start();

    v = &b;
    v->start();

    return 0;
}
