#include <iostream>
#include <string>
#include <chrono>
#include "UI.h"

int main() {
    UI gameUI;
    //introduction
    gameUI.ShowText("Welcome to the world of Shrilas!");
    gameUI.ShowText("An older man approaches you and speaks in a low gravely voice...");
    gameUI.ShowText("I am timand, what brings you here stranger?, Have you a name?");

    std::string playerName = gameUI.PromptUser("Input your name here.", "Name: ");
    gameUI.ShowText("Greetings " + playerName + "! Welcome!");
    gameUI.ShowText("The look on your face shows you to be....");

    std::vector<std::string> playerChoice = gameUI.DisplayMenu({"Good", "Bad", "I want to go home!"},
        "This will decide your fate. How do you feel?");





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