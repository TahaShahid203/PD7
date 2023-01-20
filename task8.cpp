#include <iostream>
using namespace std;

float averagePrice(int minibusCargo, int truckCargo, int trainCargo);
float percentage(int cargoInQuestion, int minibusCargo, int truckCargo, int trainCargo);

main()
{
    int numberOfCargos, ton;
    int minibusCargo = 0;
    int truckCargo = 0;
    int trainCargo = 0;

    cout << "Enter number of cargos: ";
    cin >> numberOfCargos;

    for (int i = 1; i <= numberOfCargos; i++)
    {
        cout << "Enter ton: ";
        cin >> ton;
        if (ton <= 3)
        {
            minibusCargo = minibusCargo + ton;;
        }
        else if (ton > 3 && ton <= 11)
        {
            truckCargo = truckCargo + ton;
        }
        else if (ton > 11)
        {
            trainCargo = trainCargo + ton;
        }
    }


    

    float price = averagePrice(minibusCargo, truckCargo, trainCargo);
    float percentageMinibus = percentage(minibusCargo, minibusCargo, truckCargo, trainCargo);
    float percentageTruck = percentage(truckCargo, minibusCargo, truckCargo, trainCargo);
    float percentageTrain = percentage(trainCargo, minibusCargo, truckCargo, trainCargo);
    
    cout << "Average price: " << price << endl;
    cout << "percentage of cargo in minibus: " << percentageMinibus << endl;
    cout << "percentage of cargo in truck: " << percentageTruck << endl;
    cout << "percentage of cargo in train: " << percentageTrain << endl;
    
    
}


float averagePrice(int minibusCargo, int truckCargo, int trainCargo)
{
    int sum = minibusCargo + truckCargo + trainCargo;

    float totalPrice = minibusCargo*200 + truckCargo*175 + trainCargo*120;

    float average = totalPrice/sum;

    return average;
}
float percentage(int cargoInQuestion, int minibusCargo, int truckCargo, int trainCargo)
{
    int sum = minibusCargo + truckCargo + trainCargo;
    float percentage = ((cargoInQuestion*1.0)/sum)*100;

    return percentage;    
}