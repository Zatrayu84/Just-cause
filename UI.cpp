//
// Created by erikf on 5/6/2026.
//
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>
#include "UI.h"


void UI::ClearConsole() {
    // this is the special string to clear the screen before and after text is placed on screen
    // this also moves the cursor to starting position on the window
    std::cout << "\x1B[2J\x1B[H";
}

void UI::ShowSpeech(const std::string &message) {
    ClearConsole();

    const std::string divider = "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>";

    std::cout << divider << "\n" << std::endl;

    std::cout << "  ";

    // loop to print text across screen at 45 millisecond time interval
    for (int letter = 0; letter < message.length(); ++letter) {
        std::cout << message[letter];

        // This is where the delay happens in milliseconds
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }
    std::cout << std::endl;
    
    std::cout << "\n" << divider << "\n" << std::endl;

    std::cout << "Press \"enter\" to continue........" << std::endl;
    std::cin.get();
}

std::string UI::PromptUser(const std::string &primeText, const std::string &promptText) {
    ClearConsole();

    //Added placeholder for results
    std::string result = "  ";

    //prime the user with prime text here
    std::cout << primeText << "\n" << std::endl;

    //prompt user prefixed by given prompt text
    std::cout << promptText << ": ";

    //Input from user comes here
    getline(std::cin, result);

    return result;
}

std::vector<std::string> UI::DisplayMenu(const std::vector<std::string>& yourChoices, const std::string& promptText){
    ClearConsole();

    //this is where I need to store my choices for menu - this is already declared in my .h 
    currentChoices = yourChoices;
    for ( int i = 0; i < currentChoices.size(); ++ i) {
        std::cout << "[" << (i + 1) << "] " << currentChoices[i] << std::endl;
    }
    std::cout << "\n" << promptText + ": ";
    std::string myChoice;
    getline(std::cin, myChoice);

    if (myChoice == "1") {
        std::cout << "I am good!" << std::endl;
        std::cout << "Then let us have a little adventure shall we?" << "\n" << std::endl;
    }
    else if (myChoice == "2") {
        std::cout << "I am bad!" << std::endl;
        std::cout << "Then let us have a little adventure shall we?" << "\n" << std::endl;
    }
    else if (myChoice == "3") {
        std::cout << "Don't waste my time then, go home!" << std::endl;
    }

    return yourChoices;
}


/*void UI::DisplayMenu() {
    ClearConsole();

    std::cout << "[1] Good" << std::endl;
    std::cout << "[2] Bad" << std::endl;
    std::cout << "[3] I Want to go home" << std::endl;

    std::cout << "Enter your choice: ";
    std::string choiceMade;
    std::cin >> choiceMade;

    if (choiceMade == "1") {
        std::cout << "I am good!" << std::endl;
        std::cout << "Then let us have a little adventure shall we?" << "\n" << std::endl;
    } else if (choiceMade == "2") {
        std::cout << "I am bad!" << std::endl;
        std::cout << "Then let us have a little adventure shall we?" << "\n" << std::endl;
    } else if (choiceMade == "3") {
        std::cout << "Don't waste my time, then go home!" << std::endl;
    }
}*/
