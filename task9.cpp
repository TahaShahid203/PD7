#include <iostream>
using namespace std;

void printTwoOpposingTriangles(int number);

main()
{
    int number;
    cout << "Enter number of rows: ";
    cin >> number;

    printTwoOpposingTriangles(number);

}

void printTwoOpposingTriangles(int number)
{
    int spaces;
    for (int i=1; i <= number; i++)
    {
        spaces = (number - i)*2;
        for (int j=1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j=1; j<=spaces; j++)
        {
            cout << " ";
        }
        for (int j=1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}