//
//  main.cpp
//  BullsAndCows
//
//  Created by Daniel Rotenberg on 6/18/17.
//  Copyright © 2017 drot88. All rights reserved.
//

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;


void printIntro();
void playGame();
string getGuess();
bool askToPlayAgain();
FBullCowGame BCGame;

int main() {
    do {
        printIntro();
        playGame();
    } while (askToPlayAgain() == true);
    
    //add a game summary
    return 0;
}

void printIntro() {
    constexpr int WORD_LENGTH = 5;
    cout << "Welcome to Bulls and Cows!" << endl;
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;
}

void playGame() {
    BCGame.reset();
    int maxTries = BCGame.getMaxTries();
    int currentTry = BCGame.getCurrentTry();
    cout << "Try # " << currentTry << endl;
    cout << "Max # of Tries: " << maxTries << endl;
    
    //loop for the number of turns asking for the guess
    // TODO change from FOR to WHILE loop once we are validating tries
    for (int i = 0; i < maxTries; i++){
        string guess = getGuess(); //TODO make loop checking valid
        
        //submit valid guess to the game
        //print the number of bulls and cows
        cout << "Your guess was: " << guess << endl;
        cout << endl;
    }
    
    // TODO summarize game
    
}

string getGuess() {
    cout << "Enter Guess: ";
    string guess = "";
    getline(cin, guess);
    return guess;
}

bool askToPlayAgain() {
    cout << "Would you like to play again? ";
    string response = "";
    getline(cin, response);
    cout << endl;
    
    if (response[0] == 'y' || response[0] == 'Y') {
        return true;
    } else {
        return false;
    }

}
