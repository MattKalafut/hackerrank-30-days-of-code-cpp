#include <iostream>
#include <cmath>
using namespace std;


/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double mealCost, int tipPercent, int taxPercent)
{
    // tipAmount = (tipPercent / 100) x mealCost
    double tipAmount = (static_cast<double>(tipPercent) / 100) * mealCost;
    //cout << tipAmount;

    // taxAmount = (taxPercent / 100) * mealCost
    double taxAmount = (static_cast<double>(taxPercent) / 100) * mealCost;
    //cout << taxAmount;

    double totalCost = mealCost + tipAmount + taxAmount;
        
    cout << round(totalCost);
}

int main()
{
    double mealCost;
    int tipPercent;
    int taxPercent;

    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;

    solve(mealCost, tipPercent, taxPercent);

    return 0;
}
