// RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Choices/Paper.h"
#include "Choices/Rock.h"
#include "Choices/Scissors.h"

int main()
{
    Rock rock;
    Paper paper;
    Scissors scissors;

    std::cout << rock.Get_Name() << "\n";
    std::cout << paper.Get_Name() << "\n";
    std::cout << scissors.Get_Name() << "\n";
}
