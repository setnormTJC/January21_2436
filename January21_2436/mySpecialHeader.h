#pragma once


#include <iostream>

#include<vector> 

using std::cout, std::vector, std::string, std::pair;



auto initializeContentsOf2DRoom()
{
    vector<vector<string>> myRoom =
    {
        // front row of my room:
        {"Chair", "Table", "Lamp", "Bookshelf"},
        {"Bed", "myKeys", "Desk", "Laptop"}, 
        //putting myKeys in the middle
        //leads to an "average case" scenario in sequential search 
        {"Rug", "Plant", "Clock", "Mirror"},
        {"Sofa", "TV", "Coffee Table", "Painting", "Jagged element"}
    };


    return myRoom; 

}


pair<int, int> doSayreSequentialSearch(vector<vector<string>> twoDArrayOfStrings, string thingIAmLookingFor)
{
    pair<int, int> locationIn2DArray;

    for (int currentColumn = 0; currentColumn < twoDArrayOfStrings.size(); ++currentColumn)
    {
        vector<string> currentRow = twoDArrayOfStrings.at(currentColumn); 
        for (int row = 0; row < currentRow.size(); ++row)
        {
            cout << currentRow.at(row) << " ";
        }
        cout << "\n";
    }

    for (int row = 0; row < twoDArrayOfStrings.size(); ++row)
    {
        for (int col = 0; col < twoDArrayOfStrings.at(row).size(); ++col)
        {
            if (twoDArrayOfStrings[row][col] == thingIAmLookingFor)
            {
                locationIn2DArray = { row, col };
                return locationIn2DArray;
            }
        }
    }

    // if not found...
    locationIn2DArray = { -1, -1 };
    return locationIn2DArray;

    //return 
}

template<typename T> 
void print(vector<vector<T>> someTwoDArray)
{
    for (const auto& row : someTwoDArray) //& is pass by reference
    {
        for (const auto& element : row)
        {
            cout << element << " ";
        }
        cout << "\n";
    }

}

