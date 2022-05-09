#include <iostream>
using namespace std;

/*
Given an integer, , perform the following conditional actions:

If  is odd, print Weird
If  is even and in the inclusive range of 2 to 5, print Not Weird
If  is even and in the inclusive range of 6 to 20, print Weird
If  is even and greater than 20, print Not Weird
 */
int main()
{
    int num;
    cin >> num;

    // Odd number
    if (num % 2 != 0)
    {
        cout << "Weird";
    }

    // Even number
    if (num % 2 == 0)
    {
        if (num >= 2 && num <= 5)
        {
            cout << "Not Weird";
        }
        if (num >= 6 && num <= 20)
        {
            cout << "Weird";
        }
        if (num > 20)
        {
            cout << "Not Weird";
        }
    }

    return 0;
}
