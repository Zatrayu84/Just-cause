//
// Created by erikf on 5/6/2026.
//
#pragma once
#include <vector>
#include <string>

class UI {
public:
    static void ClearConsole();

    static std::string PromptUser(const std::string &primeText, const std::string &promptText);

    // ShowSpeech is going to be my dialogue area
    void ShowSpeech(const std::string &message);

    // Display menu is my choices area
    std::vector<std::string>  DisplayMenu(const std::vector<std::string> &yourChoices, const std::string &promptText);

    // This handles where the players choices are made and moving into next steps
    void PlayerChoices();

private:
    //Variables
    std::vector<std::string> currentChoices;
};
