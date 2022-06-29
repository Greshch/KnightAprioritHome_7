// KnightAprioritHome_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    const int szBoard = 8;
    std::cout << "Enter x1: ";
    int x1 = 0;
    std::cin >> x1;
    std::cout << "Enter y1: ";
    int y1 = 0;
    std::cin >> y1;

    std::cout << "Enter x2: ";
    int x2 = 0;
    std::cin >> x2;
    std::cout << "Enter y2: ";
    int y2 = 0;
    std::cin >> y2;
    
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    
    bool knight = false;
    if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0)
    {
        knight = false;
    }
    else if (x1 >= szBoard || y1 >= szBoard || x2 >= szBoard || y2 >= szBoard)
    {
        knight = false;
    }
    else if (dx == 1 && dy == 2)
    {
        knight = true;
    }
    else if (dx == 2 && dy == 1)
    {
        knight = true;
    }

    if (knight)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }
}

