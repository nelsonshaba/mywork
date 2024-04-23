#include <iostream>

int main() {
    int userInput;
    int y;

   

    while (!(y > 5 && y < 10))
    {
         std::cout << "Please enter an integer value between 5 and 10: ";
         std::cin >> y;
    }
    std::cout << "Your input value has been accepted"<< std::endl;
   
    

}
