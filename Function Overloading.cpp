#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int area(int length, int breadth) {
    return length * breadth;
}

float area(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    cout << "Area of Square = " << area(5) << endl;
    cout << "Area of Rectangle = " << area(10, 5) << endl;
    cout << "Area of Circle = " << area(3.0f) << endl;

    return 0;
}
