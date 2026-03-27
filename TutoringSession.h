#ifndef TUTORING_SESSION_H
#define TUTORING_SESSION_H

#include "TeachingAssistant.h"

class TutoringSession {
private:
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;
    Student* student;

public:
    TutoringSession(int id, double duration,
        TeachingAssistant* ta, Student* student);

    double getDuration();
    void displaySession();

    TutoringSession operator+(const TutoringSession& other);

    friend bool operator>(TutoringSession s1, TutoringSession s2);
};

#endif
