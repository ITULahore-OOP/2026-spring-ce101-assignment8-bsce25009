#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(string name, int id, double cgpa,
    double salary, AccessCard card, int hours)
    : UniversityMember(name, id),
    Student(name, id, cgpa),
    Staff(name, id, salary, card) {
    workingHours = hours;
}

void TeachingAssistant::displayRole() {
    cout << "Role: Teaching Assistant, Name: " << name
        << ", CGPA: " << getCGPA()
        << ", Salary: " << getSalary()
        << ", Hours: " << workingHours << endl;
}


void TeachingAssistant::gradeAssignment(int score) {
    cout << "numeric score: " << score << "/100" << endl;
}

void TeachingAssistant::gradeAssignment(string grade) {
    cout << "letter grade: " << grade << endl;
}