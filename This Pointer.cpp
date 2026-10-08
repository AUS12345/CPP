#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;

public:
    Employee(int id, string name) {
        this->id = id;
        this->name = name;
    }

    void display() {
        cout << "Employee ID: " << this->id << endl;
        cout << "Employee Name: " << this->name << endl;
    }
};

int main() {
    Employee e(101, "Abhi");
    e.display();

    return 0;
}
