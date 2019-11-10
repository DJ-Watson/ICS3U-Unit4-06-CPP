// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: November 2019
// this program prints all possible rgb values


#include <iostream>
#include <string>

int main() {
    // variables
    int counterR = 0;
    int counterG = 0;
    int counterB = 0;

    // process
    for (counterR = 0; counterR < 255; counterR++) {
        for (counterG = 0; counterG < 255; counterG++) {
            for (counterB = 0; counterB < 255; counterB++) {
                std::cout << "RGB: " << counterR << "," << counterG << ","
                          << counterB << std::endl;
            }
        }
    }
}
