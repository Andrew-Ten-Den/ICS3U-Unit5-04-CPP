// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew-Ten-Den
// Created on: May 2022
// This program calculates the volume of a cylinder

#include <iostream>
#include <cmath>
#include <iomanip>

float CylinderVolume(int radius, int height) {
    // calculates the volume of a cylinder
    float answer = M_PI * pow(radius, 2) * height;

    return answer;
}


main() {
    // This program uses cylinder volume

    std::string radius;
    std::string height;
    int radiusAsInt;
    int heightAsInt;
    float solution;

    // input
    std::cout << "Enter radius (in cm): ";
    std::cin >> radius;
    std::cout << "Enter height (in cm): ";
    std::cin >> height;
    std::cout << std::endl;

    // process
    try {
        radiusAsInt = std::stoi(radius);
        heightAsInt = std::stoi(height);
        solution = CylinderVolume(radiusAsInt, heightAsInt);
        std::cout << "The volume is "
        << std::fixed << std::setprecision(2) << std::setfill('0')
        << solution << " cm³" << std::endl;
    } catch (...) {
        std::cout << "Theses are not integers";
    }
}
