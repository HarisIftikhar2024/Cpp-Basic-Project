#include <iostream>

using namespace std;


class Student {
    private:
        string firstName; 
        int age;
        bool isAdmitted;

    public:

        // default contructor
        Student(){}
        
        // parameterized contructor
        Student(string newFirstName, int newAge, bool newIsAdmitted) {
            firstName = newFirstName;
            age = newAge;
            isAdmitted = newIsAdmitted;
        }


        // getter -> accessor
        string getFirstName() {
            return firstName;
        }

        // setter -> mutator
        void setFirstName(string newFirstName) {
            firstName = newFirstName;
        }


        void printAll() {
            cout << firstName << endl;
            cout << age << endl;
            cout << isAdmitted << endl;
        }


};



int main() {
    
    Student sergio("Sergio", 23, 1);
    Student bob("Bob", 22, 0);
    
    sergio.printAll();
    bob.printAll();



   return 0; 
}