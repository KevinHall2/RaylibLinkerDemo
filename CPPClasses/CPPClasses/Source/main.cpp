// CPPClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Player.h"

int main()
{
    Player robert = Player();

    //input example using a function
    std::cout << "What is your name?\n";
    std::cout << "> ";
    char name[512];
    std::cin >> name;
    robert.SetName(name);

    bool shouldExitLoop = false;
    while (!shouldExitLoop) 
    {
        system("cls");
        robert.PrintStats();
        std::cout << std::endl;
        std::cout << "Hello " << robert.GetName() << "! What would you like to do today?" << std::endl;
        std::cout << "1. Punch your wall and take 5 damage\n";
        std::cout << "2. Eat breakfast and heal 5 damage\n";
        std::cout << "3. Go outside for a jog and gain 17 xp\n";
        std::cout << "< ";

        int input = 0;
        std::cin >> input;

        switch (input) 
        {
        case 1:
            robert.TakeDamage(5);
            break;
        case 2:
            robert.Heal(5);
            break;
        case 3:
            robert.AddXP(17);
            break;

        }

    }
    return 0;
}


