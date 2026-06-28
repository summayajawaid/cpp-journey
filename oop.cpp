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


// 2. Abstraction
// Hiding internal details and showing only essential features
// Achieved using classes and functions

//  Example:
#include <iostream>
using namespace std;

class Car {
public:
    void start() {
        cout << "Car started using key\n";
    }
};

int main() {
    Car c;
    c.start(); // user doesn't know internal mechanism
}




// 3. Inheritance
// One class acquires properties of another class
// Promotes code reuse

//  Example:

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks\n";
    }
};

int main() {
    Dog d;
    d.eat();
    d.bark();
}
// 4. Polymorphism
// One function behaves differently in different situations
// Types:
// Compile-time (Function Overloading)
// Run-time (Function Overriding)

//  Example (Function Overloading):

#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math m;
    cout << m.add(2, 3) << endl;
    cout << m.add(2, 3, 4);
}
