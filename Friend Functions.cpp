#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    Student(int m) {
        marks = m;
    }

    friend void displayMarks(Student s);
};

void displayMarks(Student s) {
    cout << "Student Marks = " << s.marks << endl;
}

int main() {
    Student s(85);
    displayMarks(s);

    return 0;
}
