#include <iostream>
using namespace std;

int main() {

    double merchandiseCost, salary, rent, electricityCost, desiredProfit;

    cout << "Enter the total cost of merchandise: ";
    cin >> merchandiseCost;

    cout << "Enter the total salary of employees and enter even your own salary: ";
    cin >> salary;

    cout << "Enter the rent cost of the year: ";
    cin >> rent;

    cout << "Enter the cost of electricity: ";
    cin >> electricityCost;

    desiredProfit = 0.1*( merchandiseCost + salary + rent + electricityCost);

    double markedUpPrice = merchandiseCost + desiredProfit;
    double finalPrice = markedUpPrice/(1-0.15);

    cout << "The merchandise is to be marked uo by approximately: " << finalPrice - merchandiseCost << endl;

    return 0;
}
