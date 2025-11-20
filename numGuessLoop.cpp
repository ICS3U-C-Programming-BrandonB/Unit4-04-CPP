// Copyright (c) 2025 Brandon All rights reserved.
// Created By: Brandon
// Date: November 20th, 2025
// This program generates a random number then asks a user to
// enter a number to guess the correct random number

#include <iostream>
#include <string>

int main() {
    // Seed random number generator
    srand((unsigned)time(NULL));

    // Generate a random number between 0 and 9
    int randomNumber = rand() % 9 + 0;

    while (true) {
        std::string userGuess;
        std::cout << "Guess a number between 0 and 9: ";
        std::cin >> userGuess;

        try {
            int userNumber = std::stoi(userGuess);

            // Determine whether or not the number is in range
            if (userNumber < 0 || userNumber > 9) {
                std::cout << "Please enter a number between 0 and 9\n";
            }

            if (userNumber == randomNumber) {
                std::cout << "You guessed correctly!\n";
                break;
            } else {
                std::cout << "Incorrect guess, try again.\n";
            }
        } catch (const std::invalid_argument&) {
            std::cout << "That is not a valid integer\n";
        }
    }
}
