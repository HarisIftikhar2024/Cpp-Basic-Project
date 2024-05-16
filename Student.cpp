//
//  Student.cpp
//  Class Roster
//
//  Created by Sergio Gonzalez on 3/18/24.
//

#include "Student.h"
#include "degree.h"
#include <string>
#include <iostream>

using namespace std;

Student::Student(string StudentID, string firstName, string lastName, string emailAddress, int age){
    
    this->StudentID = StudentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;                        //constructor
    this->daysInCourse[0] = 0;
    this->daysInCourse[1] = 1;
    this->daysInCourse[2] = 2;
    this->degreeType = SECURITY;
};


string Student::getStudentID() {return StudentID;}
string Student::getfirstName(){return firstName;}
string Student::getlastName(){return lastName;}
string Student::getemailAddress(){return emailAddress;}         //getters
int Student::getage(){return age;}
int* Student::getdaysInCourse(){return daysInCourse;}
DegreeType Student::getdegreeType(){return degreeType;}



void Student::setStudentID(string StudentID){StudentID = StudentID;}
void Student::setfirstName(string firstName){firstName = firstName;}        //setters
void Student::setlastName(string lastName){lastName = lastName;}
void Student::setemailAddress(string emailAddress){emailAddress = emailAddress;}
void Student::setage(int age){age = age;}
void Student::setdaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3){

    daysInCourse = {daysInCourse1, daysInCourse2, daysInCourse3};

}    


void Student::print(){
    cout << getStudentID() << endl;
    cout << getfirstName() << endl;
    cout << getlastName() << endl;              //print
    cout << getemailAddress() << endl;
    cout << getage() << endl;
    cout << getdaysInCourse() << endl;
    
}

Student::~Student(){}; //destructor
