// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Nov. 8th, 2023
// This program asks the user to enter a whole number
// then tells the user the factorial of that number
#include <iostream>

int main() {
    // Declare variables
    int userNumInt;
    std::string userNumString;

    // initialize the counter and factorial
    int counter = 1;
    int factorial = 1;

    // get the user number as a string
    std::cout << "Enter a whole number: ";
    std::cin >> userNumString;
    std::cout << std::endl;

    try {
        // convert the user's guess to an int
        userNumInt = std::stoi(userNumString);

        // Check if the user's number is negative
        if (userNumInt < 0) {
            std::cout << userNumInt;
            std::cout << " is not a whole number." << std::endl;
        } else {
            // Calculate the factorial of the user's number
            do {
                std::cout << "Tracking " << counter;
                std::cout << " times through the loop." << std::endl;
                factorial = factorial * counter;
                counter = counter + 1;
            } while (counter <= userNumInt);

            // Display the factorial after the loop
            std::cout << "The factorial of " << userNumInt;
            std::cout << " is " << factorial << std::endl;
        }
    } catch (std::exception) {
        // The user did not enter an integer
        std::cout << userNumString << " is not an integer!\n";
    }
}
