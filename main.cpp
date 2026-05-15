#include <iostream>
#include <string>
#include <chrono>
#include "UI.h"

int main() {
    UI gameUI;
    //introduction
    gameUI.ShowSpeech("Welcome to the world of Shrilas!");
    gameUI.ShowSpeech("An older man approaches you and speaks in a low gravely voice...");
    gameUI.ShowSpeech("I am Timand, what brings you here stranger?, Have you a name?");

    std::string playerName = gameUI.PromptUser("Input your name here.", "Name ");
    gameUI.ShowSpeech("Greetings " + playerName + "! Welcome!");
    gameUI.ShowSpeech("The look on your face shows you to be....");



    int playerChoice = 0;
    // While loop for menu creation and for Input Validation
    // while true{false;}

    while (playerChoice != 1 && playerChoice != 2 && playerChoice != 3) {

        gameUI.DisplayMenu({ "Good", "Bad", "I want to go home!" },
            "This will decide your fate. How do you feel?");
        
        //get input from player
       std::cin >> playerChoice;

        switch (playerChoice) {
            case 1:
                UI::ClearConsole();
                std::cout << "I am good!" << std::endl;
                std::cout << "Then let us have a little adventure shall we?" << "\n" << std::endl;
                break;
            case 2:
                UI::ClearConsole();
                std::cout << "I am bad!" << std::endl;
                std::cout << "Then let us have a little adventure shall we?" << "\n" << std::endl;
                break;
            case 3:
                UI::ClearConsole();
                std::cout << "Don't waste my time then, go home!" << std::endl;
                break;
            case 4:
                UI::ClearConsole();
                std::cout << "Exit" << std::endl;
                return 0;
            default:
                UI::ClearConsole();
                std::cout << "Make a valid choice - didn't work..." << std::endl;
        }
    }

    // this is it where I stop for the night, finally got something going again. Well closer!

    gameUI.DisplayMenu({ "Away from here, and fast.", "To the end fo the world.", "Under a rock!" },
        "Where do we go now?");

    int newChoice;
    std::cin >> newChoice;

}

    // this is where I am going to display my menu

    //std::string feelingToday = UI::PromptUser("You feel...", "Pick one");


    /*std::cout << "Input your first name here... > ";
    std::string firstName;
    std::cin >> firstName;
    std::cout << "Input your last name here... > ";
    std::string lastName;
    std::cin >> lastName;

    std::cout << "Hello, " << firstName << " " << lastName << "!\n" << "How are you doing today?" << std::endl;
    std::string feelingToday;
    std::cin >> feelingToday;

    std::cout << "I am glad you are feeling " << feelingToday << "." << std::endl;

    std::cout << "My name is Bartamus, I had a question for you." << std::endl;

    std::chrono::seconds firstBreak(3);
    std::this_thread::sleep_for(firstBreak);
    std::cout << "\n\nWould you like to go on an adventure?\n\n";

    std::chrono::seconds duration( 5 );
    std::this_thread::sleep_for( duration );
    std::cout << "(1) \"Yes\"\n(2) \"No\"" << std::endl;

    std::string playOn;
    std::cin >> playOn;

    if (playOn == "1") {
        std::cout << "Ok then, let us have some fun!" << std::endl;
    }
    else if (playOn == "2") {
        std::cout << "Then I hope you have a great day." << std::endl;
    }

    std::cout << "Please press \"enter\"' to exit........";

    std::cin.ignore();

    // remember that when we use any kind of new line character \n
    // it stays in buffer so std::cin.get() will recognize that and read that input.

    std::cin.get();

    return 0;*/

    // I can't remember if I have to make my own function just to ge the text to work like this but will see here shortly.
//}