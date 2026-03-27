#include <iostream>
#include "Department.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"

using namespace std;

int main() {

    Department dept("Computer Science");

    int choice;

    AccessCard card("C101", 2);

    Student s1("Ali", 1, 3.5);
    Staff st1("Sara", 2, 50000, card);
    TeachingAssistant ta1("Ahmed", 3, 3.8, 20000, card, 20);

    do {
        cout << "\n===== MENU ====="<<endl;
        cout << "1. Add Members to Department" << endl;
        cout << "2. Display All Roles" << endl;
        cout << "3. Grade Assignment" << endl;
        cout << "4. Tutoring Session Operations" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            dept.addMember(&s1);
            dept.addMember(&st1);
            dept.addMember(&ta1);
            cout << "Members added successfully!" << endl;
            break;

        case 2:
            cout << "\n--- Display Roles ---" << endl;
            dept.displayAllRoles();
            break;

        case 3:
            cout << "\n--- Grading ---" << endl;
            ta1.gradeAssignment(95);
            ta1.gradeAssignment("A");
            break;

        case 4: {
            cout << "\n--- Tutoring Sessions ---" << endl;

            TutoringSession t1(1, 60, &ta1, &s1);
            TutoringSession t2(2, 40, &ta1, &s1);

            TutoringSession t3 = t1 + t2;

            cout << "Combined Session:" << endl;
            t3.displaySession();

            if (t1 > t2)
            {
                cout << "Session 1 is longer" << endl;
            }
            else
            {
                cout << "Session 2 is longer" << endl;
            }

            break;
        }

        case 0:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}