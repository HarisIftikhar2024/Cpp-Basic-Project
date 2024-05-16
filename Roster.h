//
//  roster.hpp
//  Class Roster
//
//  Created by Sergio Gonzalez on 3/18/24.
//

#ifndef roster_hpp
#define roster_hpp
#include "degree.h"
#include "Student.h"
#include <stdio.h>
#include <array>
#include <vector>
using namespace std;


class Roster {
    
public:
    
    // const static int studentDataTable = 5;    
    // Student* classRosterArray[studentDataTable];

    vector<Student> classRosterArray;

    int classSize;
    int index;
    
    Roster(int classSize);

    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int
daysInCourse3, DegreeType degreetype);
    void parse(string studentData);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeType(DegreeType degreeType);
    
    ~Roster();
    
};


#endif /* roster_hpp */
