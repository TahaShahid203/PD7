#include <iostream>
using namespace std;

int triangle(int number);

main()
{
    int triangleNumber, numberOfDots;

    cout << "Enter triangle number: ";
    cin >> triangleNumber;

    numberOfDots = triangle(triangleNumber);

    cout << "Number of dots: " << numberOfDots << endl;
}

int triangle(int number)
{
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }

    return sum;
}