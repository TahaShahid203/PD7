#include <iostream>
using namespace std;

void printShape(int rows);

main()
{
    int rows;
    cout << "Enter rows: ";
    cin >> rows;

    printShape(rows);
}

void printShape(int rows)
{
    int halfRow, spaces;
    if (rows%2 == 0)
    {
        halfRow = rows/2;
    }
    else 
    {
        halfRow = (rows - 1)/2;
    }
    for (int i = 1; i <= halfRow; i++)
    {
        spaces = halfRow - i;
        if (rows%2 != 0)
        {
            spaces++;
        }
        for (int j=1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int c=1; c <= i; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    if (rows%2 != 0)
    {

        for (int i = 1; i <= (halfRow + 1); i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = halfRow; i >=1; i--)
    {
        spaces = halfRow - i;
        if (rows%2 != 0)
        {
            spaces++;
        }
        for (int j=1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int c=1; c <= i; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
}