#include <iostream>
using namespace std;

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