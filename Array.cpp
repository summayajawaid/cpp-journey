#include <iostream>
using namespace std;
//array are used for listing 
int main() 
{
    // Step 1: Declare an array of size 5
    int numbers[5];

    // Step 2: Take input from user
    cout << "Enter 5 numbers:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    // Step 3: Display the array elements
    cout << "You entered:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    // Step 4: Calculate sum of elements
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }

    // Step 5: Display sum
    cout << "Sum of elements: " << sum << endl;

    return 0;
}
