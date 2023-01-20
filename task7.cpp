#include <iostream>
using namespace std;

main()
{
    int numberOfNumbers, number;
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;

    float percentage1, percentage2, percentage3;

    cout << "Enter number of numbers: ";
    cin >> numberOfNumbers;

    for (int i = 1; i <= numberOfNumbers; i++)
    {
        cout << "Enter number: ";
        cin >> number;
        if (number%2 == 0)
        {
            counter1++;
        }
        if (number%3 == 0)
        {
            counter2++;
        }
        if (number%4 == 0)
        {
            counter3++;
        }
    }

    percentage1 = ((counter1*1.0)/numberOfNumbers)*100;
    percentage2 = ((counter2*1.0)/numberOfNumbers)*100;
    percentage3 = ((counter3*1.0)/numberOfNumbers)*100;

    cout << percentage1 << endl;
    cout << percentage2 << endl;
    cout << percentage3 << endl;
    
    

}