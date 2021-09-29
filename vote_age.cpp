// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program asks the user input their age
// to see if they are able to vote

#include <iostream>
#include <string>

int main() {
    // this function uses a try statement
    std::string age_vote;
    int integerAsNumber;

    // input
    std::cout << "Please enter your age: ";
    std::cin >> age_vote;
    std::cout << "" << std::endl;

    // process & output
    try {
         integerAsNumber = std::stoi(age_vote);

        if (integerAsNumber >= 25 && integerAsNumber <= 40) {
        // output
        std::cout << "You are old enough to vote!";
        } else {
            std::cout << "You are to young to vote!";
        }
            std::cout << std::endl;
         } catch (std::invalid_argument) {
        std::cout << "This is not a number!";
    }
    std::cout << "\nDone.";
}
