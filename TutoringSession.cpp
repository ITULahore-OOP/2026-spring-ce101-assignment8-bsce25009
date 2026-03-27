#include "TutoringSession.h"

TutoringSession::TutoringSession(int id, double duration,
    TeachingAssistant* ta, Student* student) {
    sessionID = id;
    durationMinutes = duration;
    this->ta = ta;
    this->student = student;
}

double TutoringSession::getDuration() {
    return durationMinutes;
}

void TutoringSession::displaySession() {
    cout << "Session ID: " << sessionID
        << ", Duration: " << durationMinutes << " mins" << endl;
}

TutoringSession TutoringSession::operator+(const TutoringSession& other) {
    double totalDuration = durationMinutes + other.durationMinutes;
    return TutoringSession(0, totalDuration, ta, student);
}

bool operator>(TutoringSession s1, TutoringSession s2) {
    if (s1.getDuration() > s2.getDuration())
    {
        return true;
    }
    else
    {
        return false;
    }
}