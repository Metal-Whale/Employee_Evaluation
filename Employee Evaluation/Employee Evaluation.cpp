// Employee Evaluation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ostream>
#include "Employee.h"
#include "Manager.h"


int main()
{
    Employee Employee_1("Colin", "Chavez", 3, 40000, "Space Cadet");

    std::cout << Employee_1;

    Manager Manager_1("Fred", "Flintstone", 5, 60000, "Down to Earth", "Rock Pit Supervisor", "Construction");

    std::cout << Manager_1;

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
