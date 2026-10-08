#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T a, b;

public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    void add() {
        cout << "Addition = " << a + b << endl;
    }
};

int main() {
    Calculator<int> c1(10, 20);
    Calculator<float> c2(5.5, 2.5);

    cout << "Integer:" << endl;
    c1.add();

    cout << "Float:" << endl;
    c2.add();

    return 0;
}
