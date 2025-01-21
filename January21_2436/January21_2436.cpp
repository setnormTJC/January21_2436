// January21_2025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include"mySpecialHeader.h"

//class LinkedList
//{
//    //later
//};


int main()
{
    auto myRoom = initializeContentsOf2DRoom();

    //print(myRoom);
    string thingIAmLookingFor = "myCar";

    std::pair<int, int> locationIn2DArray = doSayreSequentialSearch(myRoom, thingIAmLookingFor); 
    cout << thingIAmLookingFor << "was? found at row = " << locationIn2DArray.first
        << " and column = " << locationIn2DArray.second << "\n";

    //cout << "Is it desk?\t\a" << myRoom.at(1).at(2) << "\n";

    //cout << "Is it jagged element?\t\a" << myRoom.back().back() << "\n";

}
