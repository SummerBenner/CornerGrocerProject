// Author: SummerBenner
// Project: Corner Grocer Item Tracker
// Description: Menu-driven program to analyze item frequency from input file

#include <iostream>
#include <string>
#include "ItemTracker.h"

void displayMenu() {
    std::cout << "\n=== Corner Grocer Item Tracker ===\n";
    std::cout << "1. Search for item frequency\n";
    std::cout << "2. Display all item frequencies\n";
    std::cout << "3. Display histogram\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    ItemTracker tracker("CS210_Project_Three_Input_File.txt"); // Load data from input file
    int choice;
    std::string item;

    do {
        displayMenu();
        std::cin >> choice;

        // Validate menu input
        if (std::cin.fail() || choice < 1 || choice > 4) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(10000, '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a number between 1 and 4.\n";
            continue;
        }

        switch (choice) {
            case 1:
                std::cout << "Enter item name: ";
                std::cin >> item;
                std::cout << item << " was purchased " << tracker.getItemFrequency(item) << " times.\n";
                break;
            case 2:
                tracker.printAllFrequencies();
                break;
            case 3:
                tracker.printHistogram();
                break;
            case 4:
                std::cout << "Exiting program. Goodbye!\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
