#include <iostream>
using namespace std;
//function are mainly used to short our time one function can be used multiple time in the program 
// Function to display a welcome message
void welcomeMessage()
{
    cout << "Welcome to C++ Functions!" << endl;
}

// Function to add two numbers
int addNumbers(int a, int b)
{
    return a + b;
}

int main()
{
    welcomeMessage();

    int num1 = 10;
    int num2 = 20;

    int result = addNumbers(num1, num2);

    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;
    cout << "Sum: " << result << endl;

    return 0;
}
