#include <iostream>
#include <iomanip>

using namespace std;

//calculate REGULAR bill
double regularBill(double totalMins) {
    double amountDue;
    if (totalMins > 50) {
        double chargeMins = totalMins - 50.00;
        amountDue = (0.20 * chargeMins) + 10.00;
    } else {
        amountDue = 10.00;
    }
    return amountDue;
}
//calculate PREMIUM bill
double premiumBill(double day, double night) {
    double amountDue, dayCharge, nightCharge, charge;
    //day
    if (day > 75) {
        charge = day - 75;
        dayCharge = charge * 0.1;
    } else {
        dayCharge = 0.00;
    }
    //night
    if (night > 100) {
        charge = night - 100;
        nightCharge = charge * 0.1;
    } else {
        nightCharge = 0.00;
    }
    amountDue = dayCharge + nightCharge + 25.00;
    return amountDue;
}

int main() {

    int accountNum, minsUsed, dayMinutes, nightMinutes;
    double totalBill;
    char serviceCode;
    string serviceType;

    cout << "Enter Account Number: " << endl;
    cin >> accountNum;

    do {
        cout << "Enter Service Code('r' or 'p'): " << endl;
        cin >> serviceCode;
    } while (serviceCode != 'r' && serviceCode != 'p');

    if (tolower(serviceCode) == 'r')
        serviceType = "Regular";
    else
        serviceType = "Premium";

    switch (tolower(serviceCode)) {
        //Regular service
        case 'r':
            cout << "Enter minutes used: " << endl;
            cin >> minsUsed;
            totalBill = regularBill(minsUsed);
            break;
        //Premium service
        case 'p':
            cout << "Enter minutes used during 6am - 6pm: " << endl;
            cin >> dayMinutes;
            cout << "Enter minutes used during 6pm - 6am: " << endl;
            cin >> nightMinutes;
            minsUsed = dayMinutes + nightMinutes;
            totalBill = premiumBill(dayMinutes,nightMinutes);
            break;
        default:
            break;
    }

    cout << "Account Number: " << accountNum << '\n';
    cout << "Service Type: " << serviceType << '\n';
    cout << "Minutes used: " << minsUsed << '\n';

    cout << fixed << showpoint;
    cout << setprecision(2) << "Amount Due: $" << totalBill << endl;

}