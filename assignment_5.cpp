#include <iostream>
#include <cmath> // For sqrt function

// Function prototypes for area calculations
double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
double calculateSquareArea(double side);

int main() {
    int choice;
    double base, height, length, width, side;

    // Display menu and process user's choice
    while (true) {
        // Display menu options
        std::cout << "Area Calculation Menu:" << std::endl;
        std::cout << "1. Calculate the area of a Triangle" << std::endl;
        std::cout << "2. Calculate the area of a Rectangle" << std::endl;
        std::cout << "3. Calculate the area of a Square" << std::endl;
        std::cout << "4. Quit program" << std::endl;
        std::cout << "Enter your choice (1-4): ";
        
        // Get user's choice
        std::cin >> choice;

        // Process user's choice
        switch (choice) {
            case 1:
                // Triangle area calculation
                std::cout << "Enter the base length of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                std::cout << "Area of the triangle: " << calculateTriangleArea(base, height) << std::endl;
                break;
            case 2:
                // Rectangle area calculation
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;
                std::cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << std::endl;
                break;
            case 3:
                // Square area calculation
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                std::cout << "Area of the square: " << calculateSquareArea(side) << std::endl;
                break;
            case 4:
                // Exit the program
                std::cout << "Exiting the program..." << std::endl;
                return 0;
            default:
                // Invalid choice
                std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
                break;
        }
    }

    return 0;
}

// Function definitions for area calculations
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}
