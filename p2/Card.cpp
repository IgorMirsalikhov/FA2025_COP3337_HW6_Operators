#include "Card.hpp"
#include <iostream>
#include <vector>

// Accessor Functions
int Card::getFace() const {
    return face;
}

int Card::getSuit() const {
    return suit;
}

// Constructor
Card::Card(int suit_num, int face_num) : face (face_num), suit (suit_num) { }

// toString Function - returns card suit/face as a string
std::string Card::toString() const{
    return faceNames[face] + suitNames[suit];
}

// Initializing static members
std::vector<std::string> Card::faceNames { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
std::vector<std::string> Card::suitNames {"♥", "♦", "♣", "♠"};
