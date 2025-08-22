// Author: SummerBenner
// Implementation file for ItemTracker class

#include "ItemTracker.h"
#include <fstream>
#include <iostream>
#include <iomanip>

ItemTracker::ItemTracker(const std::string& inputFile) {
    loadItemsFromFile(inputFile); // Load data on object creation
    writeFrequencyToFile("frequency.dat"); // Create backup file
}

void ItemTracker::loadItemsFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    std::string item;

    if (!inFile) {
        std::cerr << "Error opening input file: " << filename << std::endl;
        return;
    }

    // Read each item and update frequency map
    while (inFile >> item) {
        ++itemFrequency[item];
    }

    inFile.close();
}

void ItemTracker::writeFrequencyToFile(const std::string& filename) {
    std::ofstream outFile(filename);

    if (!outFile) {
        std::cerr << "Error creating backup file: " << filename << std::endl;
        return;
    }

    // Write each item and its frequency to backup file
    for (const auto& pair : itemFrequency) {
        outFile << pair.first << " " << pair.second << std::endl;
    }

    outFile.close();
}

int ItemTracker::getItemFrequency(const std::string& item) {
    // Return frequency or 0 if item not found
    if (itemFrequency.count(item)) {
        return itemFrequency[item];
    }
    return 0;
}

void ItemTracker::printAllFrequencies() {
    std::cout << "\n=== Item Frequencies ===\n";
    for (const auto& pair : itemFrequency) {
        std::cout << std::setw(12) << std::left << pair.first << " " << pair.second << std::endl;
    }
}

void ItemTracker::printHistogram() {
    std::cout << "\n=== Item Histogram ===\n";
    for (const auto& pair : itemFrequency) {
        std::cout << std::setw(12) << std::left << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
void ItemTracker::printHistogram() {
    std::ifstream inFile("frequency.dat");
    std::string item;
    int count;

    if (!inFile) {
        std::cout << "Error: Could not open frequency.dat\n";
        return;
    }

    std::cout << "\n=== Purchase Frequency Histogram ===\n";

    while (inFile >> item >> count) {
        std::cout << std::setw(12) << std::left << item << std::string(count, '*') << '\n';
    }

    inFile.close();
}
