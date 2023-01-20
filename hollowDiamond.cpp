#include <iostream>
using namespace std;

void hollowDiamond(int number);

main()
{
    int number;
    cout << "Enter number of rows: ";
    cin >> number;

    hollowDiamond(number);

}

void hollowDiamond(int number)
{
    int numberUpdated;
    if (number%2 == 0)
    {
        numberUpdated = number/2;
    }
    else
    {
        numberUpdated = (number - 1)/2;
    }
    for (int i = 1; i <= numberUpdated; i++)
    {
        if (number%2 != 0)
        {
            cout << " ";
        }
        for (int j = 1; j <= (numberUpdated - i); j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i!=1)
        {
            for (int j = 1; j < 2*i - 2; j++)
        {
            cout << " ";
        }
        cout << "*";
        }
        
        for (int j = 1; j <= (numberUpdated - i); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    if (number%2 != 0)
    {
        cout << "*";
        for (int j = 1; j <= (((number-1)) - 1); j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }



    for (int i = numberUpdated; i >= 1; i--)
    {
        if (number%2 != 0)
        {
            cout << " ";
        }
        for (int j = 1; j <= (numberUpdated - i); j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 1)
        {
            for (int j = 1; j < 2*i - 2; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        for (int j = 1; j <= (numberUpdated - i); j++)
        {
            cout << " ";
        }
        cout << endl;
    }

}