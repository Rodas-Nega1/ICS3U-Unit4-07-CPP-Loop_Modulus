// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Oct 2021
// This program outputs 1000 to 2000

#include <iostream>


int main() {
    // this function outputs 1000 to 2000, and starts a new line
    // int millenniumCounter = 1000;

    // process & output
    for (int millenniumCounter = 1000; millenniumCounter < 2000 + 1;
    millenniumCounter++) {
        if (millenniumCounter % 5 == 0) {
            std::cout << "" << std::endl;
            std::cout << millenniumCounter << " ";
        } else {
            std::cout << millenniumCounter << " ";
        }
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
