#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double EURO = 0.93;
    const double AUSTRALIAN_DOLLAR = 1.55;
    const double YEN = 145.60;
    const double RUPEE = 82.56;

    int choice;

    double amountOfDollars;
    double amountOfEuros;
    double amountOfYen;
    double amountOfRupees;
    double amountOfAusDollars;

    cout << "Currency Converter - Convert US dollars to :" << endl;
    cout << "1. Euros" << endl;
    cout << "2. Australian Dollars" << endl;
    cout << "3. Yen" << endl;
    cout << "4. Rupees" << endl;
    cout << "5. Quit Program" << endl;
    cout << "Enter your choice 1-5: ";

    cin >> choice;
    
    if ((choice >= 1) && (choice <= 4)) {
        cout << "Enter the amount of dollars: ";
        cin >> amountOfDollars;
     }


    if (choice == 1) {
        amountOfEuros = round(amountOfDollars * EURO * 10.0) / 10.0;
        cout << "$" << amountOfDollars << " would be " << amountOfEuros << " Euros" << endl; 
    }
        else if (choice == 2) {
        amountOfAusDollars = round (amountOfDollars * AUSTRALIAN_DOLLAR * 100.0) / 100.0;
        cout << "$" << amountOfDollars << " would be " << amountOfAusDollars << " Australian Dollars" << endl; 
    }
        else if (choice == 3) {
        amountOfYen = round (amountOfDollars * YEN);
        cout << "$" << amountOfDollars << " would be " << amountOfYen << " Yen" << endl;
    }
        else if (choice == 4) {
        amountOfRupees = round (amountOfDollars * RUPEE);
        cout << "$" << amountOfDollars << " would be " << amountOfRupees << " Rupees" << endl;
    }
        else {
        cout << "Not a valid entry";
    }
    
    return 0;
}