#include <iostream>
using namespace std;

int main() {
    int num = 10;

    // Pointer declaration
    int* ptr = &num;

    // Output values
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;

    // Using pointer
    cout << "Pointer ptr stores address: " << ptr << endl;
    cout << "Value at address ptr (dereferencing): " << *ptr << endl;

    // Modifying value using pointer
    *ptr = 20;
    cout << "Updated value of num: " << num << endl;

    return 0;
}