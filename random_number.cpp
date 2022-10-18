// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Oct 2022
// This program is a random number guessing game

#include <iomanip>
#include <iostream>
#include <random>

int main() {
    // This function checks if the number you chose matches the random number.
    int userNumber;
    int randomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,100]
    randomNumber = idist(rgen);

    // input
    std::cout << "Choose a number between 0-9: ";
    std::cin >> userNumber;
    std::cout << "" << std::endl;

    // process
    if (userNumber == randomNumber) {
        // output
        std::cout << "You've got the right number! Good job.";
    } else {
        // output
        std::cout << "You guessed incorrectly, the number was " << std::fixed
        << std::setprecision(2) << randomNumber << std::endl;
    }

    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
