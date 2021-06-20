// RunTimePolymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Car.h"
#include <iostream>
#include <random>

Car* get_car_pointer() {

    static std::mt19937 eng{ std::random_device{}() };
    static std::uniform_int_distribution<> dist{ 0,3 };

    switch (dist(eng)) {
    case 0: std::cout << "Mercedes_case\n"; return new Mercedes;
    case 1: std::cout << "Fiat_case\n"; return new Fiat;
    case 2: std::cout << "Renault_case\n"; return new Renault;
    case 3: std::cout << "BMW_case\n"; return new BMW;
    default: return nullptr;

    }
}

void Run(Car* base) {
    base->start();
    base->drive();
    base->stop();
}

int main()
{
    std::cout << "Hello World!\n";
    for (;;)
    {
        auto Car = get_car_pointer();
        Run(Car);
        delete(Car);
        std::cout << ".................." << std::endl;
        std::getchar();
    }
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
