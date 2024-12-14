#include <iostream>
#include <algorithm> // For std::min

int main()
{
    std::string name;
    int eggsAmount, milkAmount, flourAmount;
    const int eggsMin = 1, milkMin = 200, flourMin = 100;

    // Startup
    std::cout << "What is your name: ";
    std::cin >> name;
    std::cout << "\nHello " << name << "\nCake calculator is starting up...\n\n";

    // Get input
    std::cout << "How many eggs do you have? ";
    std::cin >> eggsAmount;

    std::cout << "How much milk do you have? ";
    std::cin >> milkAmount;

    std::cout << "How much flour do you have? ";
    std::cin >> flourAmount;

    // Check if there are enough ingredients
    if (eggsAmount < eggsMin || milkAmount < milkMin || flourAmount < flourMin)
    {
        std::cout << "Not enough ingredients, sadly you cannot make a cake 😢\n";
        return 0;
    }

    // Calculate portions
    int eggsPortions = eggsAmount / eggsMin;
    int milkPortions = milkAmount / milkMin;
    int flourPortions = flourAmount / flourMin;

    // Find the smallest portion
    int smallest = std::min(eggsPortions, std::min(milkPortions, flourPortions));

    // Display results
    std::cout << "\nYou can make " << smallest << " portions of cake\n";
    std::cout << "Cake calculator shutting down...\n";

    return 0;
}
