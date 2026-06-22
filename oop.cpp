//there is total 4 pillars of oop on which oop stand on one by one will learn all
// 1. Encapsulation
// Wrapping data and functions into a single unit (class)
// Protects data using access modifiers (private, public)
#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    int getMarks() {
        return marks;
    }
};

int main() {
    Student s;
    s.setMarks(85);
    cout << "Marks: " << s.getMarks();
}


// 2.
