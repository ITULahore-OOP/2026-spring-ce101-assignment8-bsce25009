#ifndef UNIVERSITY_MEMBER_H
#define UNIVERSITY_MEMBER_H

#include <iostream>
using namespace std;

class UniversityMember {
protected:
    string name;
    int memberID;

public:
    UniversityMember(string name, int memberID);
    virtual ~UniversityMember();

    string getName();
    int getMemberID();

    virtual void displayRole() = 0;
};

#endif