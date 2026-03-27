#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "UniversityMember.h"

class Department {
private:
    string departmentName;
    UniversityMember* members[50];
    int memberCount;

public:
    Department(string name);

    void addMember(UniversityMember* member);
    void displayAllRoles();
};

#endif
