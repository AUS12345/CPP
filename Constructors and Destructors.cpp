#include <iostream>
using namespace std;

class Book {
    string title;
    int price;

public:
    Book(string t, int p) {
        title = t;
        price = p;
        cout << "Constructor called" << endl;
    }

    void display() {
        cout << "Book Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    ~Book() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Book b("C++ Programming", 500);
    b.display();

    return 0;
}	
