// January21_2025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<vector> 

using std::cout, std::vector, std::string;

int main()
{
    vector<vector<string>> myRoom =
    {
        // front row of my room:
        {"Chair", "Table", "Lamp", "Bookshelf"},
        {"Bed", "Wardrobe", "Desk", "Laptop"},
        {"Rug", "Plant", "Clock", "Mirror"},
        {"Sofa", "TV", "Coffee Table", "Painting", "Jagged element"}
    };

    for (const auto& row : myRoom) //& is pass by reference
    {
        for (const auto& element : row)
        {
            cout << element << " ";
        }
        cout << "\n";
    }

    cout << "Is it desk?\t\a" << myRoom.at(1).at(2) << "\n";

    cout << "Is it jagged element?\t\a" << myRoom.back().back() << "\n";

}
