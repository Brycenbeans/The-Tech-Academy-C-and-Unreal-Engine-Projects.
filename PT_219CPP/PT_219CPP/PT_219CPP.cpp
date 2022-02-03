// PT_219CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class doggy {
public:
    std::string Breed;
    std::string Color;
    int Height;
    int Weight;
    std::string Shake;
    std::string Sit;
    std::string LayDown;
};

int main()
{
    doggy Jimmy;
    Jimmy.Breed = "Chihuahua";
    Jimmy.Color = "Brown";
    Jimmy.Height = 24;
    Jimmy.Weight = 12;
    Jimmy.Shake = "only shakes when there's thunder";
    Jimmy.Sit = "not smart enough to sit";
    Jimmy.LayDown = "he can lay down no problem";

    cout << "Here's some things about my doggy" << "\n";
    cout << "his breed is: " << Jimmy.Breed;
    cout << "\n" << "his color is: " << Jimmy.Color;
    cout << "\n" << "he is " << Jimmy.Height << " inches tall";
    cout << "\n" << "he weighs " << Jimmy.Weight << " pounds";
    cout << "\n" << "can he shake? Answer: " << Jimmy.Shake;
    cout << "\n" << "can he sit down when asked? Answer: " << Jimmy.Sit;
    cout << "\n" << "can he lay down? Answer: " << Jimmy.LayDown;

    return 0;
}







