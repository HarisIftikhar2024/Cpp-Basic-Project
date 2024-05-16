#ifndef Student_h
#define Student_h
#include "degree.h"

using namespace std;


class Student {
 
private:
    const static int dayArray = 3;
    string StudentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse [dayArray];
    DegreeType degreeType;
    
 
public:
    
    Student();
    Student(string StudentID, string firstName, string lastName, string emailAddress, int age);      //constructor
     
    
    
    string getStudentID();
    string getfirstName();
    string getlastName();                           //getters (accessor)
    string getemailAddress();
    int getage();
    int* getdaysInCourse();
    DegreeType getdegreeType();
    
    void setStudentID(string StudentID);
    void setfirstName(string firstName);            //setters  (mutator)
    void setlastName(string lastName);
    void setemailAddress(string emailAddress);
    void setage(int age);
    void setdaysInCourse(int daysInCourse[]);
    
    ~Student();                                     //destructor
    
    void print();                                   //print
};

#endif /* Student_h */


