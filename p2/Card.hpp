#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <vector>

class Card{
public:
    // Accessor Functions
    int getFace() const;
    int getSuit() const;

    //Constructor
    Card(int suit_num, int face_num);

    // toString constant function - returns Card as a string
    std::string toString() const;

private:
    int face;
    int suit;
    static std::vector<std::string> faceNames;
    static std::vector<std::string> suitNames;
};

#endif

