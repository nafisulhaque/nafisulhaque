#include <iostream>

int main()
{
    //Welcome message of the game
    std::cout << "You're a mathemagician trying to get into a magic vault" <<std::endl;
    std::cout << "You must enter the correct math rune to continue..." << std::endl;

    //Declaring 3 variables
    const int CodeA = 4;
    const int CodeB = 2;
    const int CodeC = 3;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the rune" << std::endl;
    std::cout << "The sum of the numbers are: " << CodeSum << std::endl;
    std::cout << "The product of the numbers are: " << CodeProduct << std::endl;
    std::cout << "Please enter the 3 numbers separated by spaces: ";
    //Player's guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You have entered the vault";
    } else {
        std::cout << "You have failed to enter the vault";
    }
    return 0;
}