#include <iostream>
using namespace std;

template <class T>
T findMaximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Maximum of integers = "
         << findMaximum(10, 25) << endl;

    cout << "Maximum of floats = "
         << findMaximum(5.5, 8.2) << endl;

    cout << "Maximum of characters = "
         << findMaximum('A', 'Z') << endl;

    return 0;
}
