#ifndef ACCESS_CARD_H
#define ACCESS_CARD_H

#include <iostream>
using namespace std;

class AccessCard {
private:
    string cardID;
    int accessLevel;

public:
    AccessCard(string cardID = "", int accessLevel = 0);

    string getCardID();
    int getAccessLevel();

    void displayCardInfo();
};

#endif