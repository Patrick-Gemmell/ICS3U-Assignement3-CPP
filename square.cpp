// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: October 2019
// This Program plays a guessing game

#include <iostream>
#include <iomanip>


int main() {
        // This function compares integers
        float length;
        float width;

        // input
        std::cout << "Give me a length (cm): ";
        std::cin >> length;
        std::cout << "Give me a width (cm): ";
        std::cin >> width;


        // process and output
        if (length == width) {
            printf("Your rectangle is a square ");
        } else if (length != width) {
            printf("Your rectangle is not a square");
        } else {
            printf("dimensions are undefined");
        }
}
