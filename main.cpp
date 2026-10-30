#include <iostream>

using namespace std;

int main() {
    const double HALF_FARE = 1.50;
    const double FULL_FARE = 3.00;
    const double JUMPER_FARE = 0.00;

    int totalSwipes = 0;

    cout << "Enter the number of weekday riders (90000 - 100000): ";
    cin >> totalSwipes;

    while (totalSwipes < 90000 || totalSwipes > 100000) {
        cout << "Invalid input. Please enter a value between 90000 and 100000: ";
        cin >> totalSwipes;
    }

    double totalRevenue = 0.00;
    int jumperCount = 0;
    int halfFareCount = 0;
    int fullFareCount = 0;

    for (int swipe = 1; swipe <= totalSwipes; ++swipe) {
        if (swipe % 3 == 0) {
            totalRevenue += JUMPER_FARE;
            jumperCount++;
        } 
        else if (swipe % 5 == 0) {
            totalRevenue += HALF_FARE;
            halfFareCount++;
        } 
        else {
            totalRevenue += FULL_FARE;
            fullFareCount++;
        }
    }

    cout << "\nFulton St. Station Simulation Results (" << totalSwipes << " Swipes)\n";
    cout << "Full Fare Riders: " << fullFareCount << " ($" << (fullFareCount * FULL_FARE) << ")\n";
    cout << "Half Fare Riders: " << halfFareCount << " ($" << (halfFareCount * HALF_FARE) << ")\n";
    cout << "Jumper Riders: " << jumperCount << " ($0.00)\n";
    cout << "Total Revenue: $" << totalRevenue << "\n";

    return 0;
}
