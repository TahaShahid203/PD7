#include <iostream>
using namespace std;

main()
{
    int numberOfDays, numberOfPatients;
    int untreatedPatients = 0;
    int treatedPatients = 0;
    int numberofDoctors = 7;

    cout << "Enter number of days: ";
    cin >> numberOfDays;

    for (int i = 1; i <= numberOfDays; i++)
    {
        cout << "Enter number of patients: ";
        cin >> numberOfPatients;
        if (i%3 == 0 && untreatedPatients > treatedPatients)
        {
            numberofDoctors++;
        }
        if (numberOfPatients > numberofDoctors)
        {
            
            untreatedPatients = untreatedPatients + numberOfPatients - numberofDoctors;
            treatedPatients = treatedPatients + numberofDoctors;
        }
        else
        {
            treatedPatients = treatedPatients + numberOfPatients;
        }

        

    }

    cout << "Treated patients: " << treatedPatients << endl;
    cout << "Untreated patients: " << untreatedPatients << endl;

}