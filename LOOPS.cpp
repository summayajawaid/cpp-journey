#include <iostream>
using namespace std;

int main()
{
    //THIS COMMAND WE USE TO DO PRINT 
    cout << "===== C++ Loops Example =====" << endl;

    // For Loop
    cout << "\nFor Loop (1 to 10):" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }

    // While Loop
    cout << "\n\nWhile Loop (1 to 5):" << endl;
    int j = 1;
    while (j <= 5)
    {
        cout << j << " ";
        j++;
    }

    // Do While Loop
    cout << "\n\nDo While Loop (1 to 5):" << endl;
    int k = 1;
    do
    {
        cout << k << " ";
        k++;
    } while (k <= 5);

    // Sum using For Loop
    int sum = 0;
    for (int n = 1; n <= 10; n++)
    {
        sum += n;
    }

    cout << "\n\nSum of numbers from 1 to 10 = " << sum << endl;

    // Multiplication Table
    cout << "\nMultiplication Table of 5:" << endl;
    for (int m = 1; m <= 10; m++)
    {
        cout << "5 x " << m << " = " << 5 * m << endl;
    }

    cout << "\nProgram Finished Successfully!" << endl;

    return 0;
}
