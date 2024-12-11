// CsharpTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Player {};

int main()
{
    //* means this is a pointer. const char* is how a string is stored
    const char* string1 = "Hello World!";

    //arrays and pointers are kind of the same, so this works too
    const char string2[] = "Hello Planet!";

    std::cout << string1;
    std::cout << string2;

    //input example
    float playerHealth;
    std::cout << "Input player health> ";
    std::cin >> playerHealth;
    std::cout << "Player health is " << playerHealth << std::endl;

    //system("cls") is a clear screen command
    //system("pause") pauses everything in the entire program. this should only be used for testing purposes

    //creating a pointer. a class is required
    Player* bob = new Player;


    //makes an array on the heap
    int* intHeapArray = new int[5];

    //the size of an array must be known at the time at which it is compiled, so you cannot have a variable int within the [] unless it is a constant
    //the size of an array can be determined at runtime however
    int x = 5;
    int* intRuntimeArray = new int[x] {0, 1, 2, 3, 4, 5};
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
