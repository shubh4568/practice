#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        cout << "Factorial of " << number << " = " << factorial(number) << endl;
    }

    return 0;
}
