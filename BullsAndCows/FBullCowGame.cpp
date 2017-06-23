//
//  FBullCowGame.cpp
//  BullsAndCows
//
//  Created by Daniel Rotenberg on 6/22/17.
//  Copyright © 2017 drot88. All rights reserved.
//

#include "FBullCowGame.hpp"

FBullCowGame::FBullCowGame() {
    reset();
}

int FBullCowGame::getMaxTries() const {
    return myMaxTries;
}

int FBullCowGame::getCurrentTry() const {
    return myCurrentTry;
}

bool FBullCowGame::isGameWon() const {
    return false;
}

bool FBullCowGame::checkGuessValidity(std::string) {
    return false;
}

void FBullCowGame::reset() {
    constexpr int MAX_TRIES = 8;
    myMaxTries = MAX_TRIES;
    
    myCurrentTry = 1;
    return;
}

