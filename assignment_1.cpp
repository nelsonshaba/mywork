#include <iostream>
#include <cstdlib> // For rand() and srand() functions
#include <ctime>   // For time() function to seed srand()

using namespace std;

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 0 and 11 for days until expiration
    int daysUntilExpiration = rand() % 12; // Generates a number between 0 and 11

    // Output message based on daysUntilExpiration value
    if (daysUntilExpiration <= 0) {
        cout << "Your subscription has expired." << endl;
    } else if (daysUntilExpiration <= 1) {
        cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << endl;
    } else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else {
        cout << "Your subscription has expired " << daysUntilExpiration << " days." << endl;
    }

    return 0;
}
