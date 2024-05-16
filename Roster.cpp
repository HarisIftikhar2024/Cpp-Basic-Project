//
//  roster.cpp
//  Class Roster
//
//  Created by Sergio Gonzalez on 3/18/24.
// 

#include "Roster.h"
#include "Student.h"
#include "Degree.h"
#include <vector>
#include <string>

using namespace std;

// ctor
Roster::Roster(int classSize) {
    classRosterArray(classSize);
}

// dtor
Roster::~Roster() {

}


void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int
daysInCourse3, DegreeType degreetype) {

    vector<int> daysInCourseArray = {daysInCourse1, daysInCourse2, daysInCourse3};

    classRosterArray.push_back(Student::Student(studentID, firstName, lastName, emailAddress, age, daysInCourseArray, degreeType));

}


void Roster::remove(string studentID) {

    for(int i = 0; i < classRosterArray.size(); i++) {
        if (studentID == classRosterArray[i].getStudentID()) {
            classRosterArray[i].pop();
            return;
        }
    }
    cout << "The student you wanted to delete didn't exist" << endl;
    return;
}





void Roster::printAll() {

    for (int i = 0; i < classRosterArray.size(); i++) {
        classRosterArray[i].print();
        cout << "\t";
    }

}



void Roster::printAverageDaysInCourse(string studentID) {

    for (int i = 0; i < classRosterArray.size(); i++) {
        if (studentID == classRosterArray[i].getStudentID()) {
            vector<int> retrievedDays = classRosterArray[i].getdaysInCourse();
            
            int totalSum = 0;
            for (int i = 0; i < retrievedDays.size(); i++) {
                totalSum = totalSum + retrievedDays[i];
            }
            int totalCount = retrievedDays.size();
            
            float average = totalSum / totalCount;

            cout << "Average: " << average << endl;

        }
    }

}


void Roster::printInvalidEmails() {
    for (int i = 0; i < classRosterArray.size(); i++) {
        string email = classRosterArray[i].getemailAddress();
        if (email.find('@') != npos && email.find('.') != npos && email.find(' ') == npos) {
        cout << email << endl;
    }
    }
}


void Roster::printByDegreeProgram() {
    for (int i = 0; i < classRosterArray.size(); i++) {

        DegreeType degreeTypeNew = classRosterArray[i].getdegreeType();
        cout << degreeTypeNew << endl;

    }
}













