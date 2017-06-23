//
//  FBullCowGame.hpp
//  BullsAndCows
//
//  Created by Daniel Rotenberg on 6/22/17.
//  Copyright © 2017 drot88. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>

class FBullCowGame {
    
private:
    int myMaxTries; //see constructor initialization
    int myCurrentTry;
public:
    FBullCowGame(); // constructor
    int getMaxTries() const;
    int getCurrentTry() const;
    bool isGameWon() const;
    
    void reset(); // TODO make a more rich return value
    bool checkGuessValidity(std::string); // TODO make a more rich return value
    // provide a method for counting bulls and cows, and increasing turn #
};




#endif /* FBullCowGame_hpp */
