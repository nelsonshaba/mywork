#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

int main() {
    
    srand(static_cast<unsigned int>(time(0)));
    
    // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12; // Generates a number between 0 and 11
    
    // Output the randomly generated days until expiration
    std::cout << "Days until subscription expires: " << daysUntilExpiration << std::endl;

    // Use a switch statement to determine the message based on daysUntilExpiration
    switch(daysUntilExpiration) {
        case 0:
        case 1:
            std::cout << "Your subscription expires within a day!" << std::endl;
            std::cout << "Renew now and save 20%!" << std::endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            std::cout << "Your subscription expires in " << daysUntilExpiration << " days." << std::endl;
            std::cout << "Renew now and save 10%!" << std::endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
            break;
        case 11:
            std::cout << "Your subscription has expired." << std::endl;
            break;
        default:
            std::cout << "You have an active subscription." << std::endl;
            break;
    }
}