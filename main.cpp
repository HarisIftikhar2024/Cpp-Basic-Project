#include <iostream>
#include "Roster.h"
#include "Student.h"
#include "Degree.h"

using namespace std;

int main() {

    DegreeType degreeType = {SECURITY, NETWORK, SOFTWARE};

    Roster rosterObj(5);



    rosterObj.add("123", "Sergio", "Gonzalez", "sergio@gmail.com", 23, 1, 2, 3, degreeType);
    rosterObj.add("123", "Bob", "Gonzalez", "sergio@gmail.com", 23, 1, 2, 3, "SECURITY");
    rosterObj.add("123", "Alex", "Gonzalez", "sergio@gmail.com", 23, 1, 2, 3, "SECURITY");
    rosterObj.add("123", "John", "Gonzalez", "sergio@gmail.com", 23, 1, 2, 3, "SECURITY");
    rosterObj.add("123", "Kelly", "Gonzalez", "sergio@gmail.com", 23, 1, 2, 3, "SECURITY");



    rosterObj.printAll();

    rosterObj.printInvalidEmails();

    for (int i = 0; i < rosterObj.classRosterArray.size(); i++) {

        rosterObj.printAverageDaysInCourse(rosterObj.classRosterArray[i].getStudentID());
    }


    rosterObj.printByDegreeProgram();
    rosterObj.remove("A2");
    rosterObj.printAll();


    return 0;
}