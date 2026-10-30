// Copyright (c) 2026 Victor Victor-Calixte All rights reserved.
// .
// Created by: Victor Victor-Calixte
// Date: 10/30/26
// This program determines whether or not an input year is a leap year

#include<iostream>
#include<string>

char const IS_LEAP_YEAR[] = " is a leap year!";
char const IS_NOT_LEAP_YEAR[] = " isn't a leap year";

char const ERR_MSG[] = " isn't an integer. \n Please enter a year!";


int main() {
    // Getting a year from the user
    std::string yearStr;

    std::cout << "Enter a year: ";
    std::cin >> yearStr;

    // the try statement will make sure the code safely with invalid user inputs
    try {
        // Converting the year input to an integer
        int yearInt = std::stoi(yearStr);
        // This section calculates whether or not the input 
        // year is a leap year or not, and displays it back to the user
        if (yearInt % 4 == 0) {
            if (yearInt % 100 == 0) {
                if (yearInt % 400 == 0) {
                    std::cout << yearInt << IS_LEAP_YEAR;

                } else {
                    std::cout << yearInt << IS_NOT_LEAP_YEAR;
                }

            } else {
                std::cout << yearInt << IS_LEAP_YEAR;
            }
        } else {
            std::cout << yearInt << IS_NOT_LEAP_YEAR;
        }

        // If the try statement fails,
        // it was likely due to the input from the user being invalid
    } catch (std::invalid_argument) {
        std::cout << yearStr << ERR_MSG;
    }
}
