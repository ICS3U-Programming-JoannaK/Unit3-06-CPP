// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: March 27, 2025
// This program casts a string to an integer
// then generates a random number between 0 and 9
// and asks the user to guess it

#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    // Declare variables
    int userNumInteger;
    std::string userNumString;
    int genNum;

    // initialize random seed
    srand((unsigned)time(NULL));

    // Generate a random number between 1 and 100
    genNum = rand() % 10;

    // Get the user's number
    std::cout << "Enter your number: ";
    std::cin >> userNumString;

    // Cast the string into an integer
    try {
        // casts the user's guess to an int
        userNumInteger = std::stoi(userNumString);

        // check if user's guess is correct
        if (userNumInteger == genNum) {
            std::cout << "You guessed correctly !" << std::endl;
        } else {  // if user's guess is not correct
            std::cout << "You guessed wrong. The correct answer was: "
                      << genNum << std::endl;
        }
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << userNumString << " is not a number.\n";
    }
}
