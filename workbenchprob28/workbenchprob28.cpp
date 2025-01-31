// workbenchprob28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double force, area, pressure;
    cout << "Please enter your force ";
    cin >> force;
    cout << "Please enter your aera ";
    cin >> area;

    pressure = force / area;

    cout << "With a force of " << force << " and an area of " << area << " you have a pressure of " << pressure;

}

