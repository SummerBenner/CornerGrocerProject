// Author: SummerBenner
// Header file for ItemTracker class

#ifndef ITEMTRACKER_H
#define ITEMTRACKER_H

#include <map>
#include <string>

class ItemTracker {
private:
    std::map<std::string, int> itemFrequency; // Stores item and its frequency
    void loadItemsFromFile(const std::string& filename); // Reads input file
    void writeFrequencyToFile(const std::string& filename); // Writes backup file

public:
    ItemTracker(const std::string& inputFile); // Constructor
    int getItemFrequency(const std::string& item); // Returns frequency of a specific item
    void printAllFrequencies(); // Prints all items and their frequencies
    void printHistogram(); // Prints histogram of item frequencies
};

#endif
