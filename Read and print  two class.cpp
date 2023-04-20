#include <iostream>
#include <string.h>

using namespace std;


class Student {
public:
    string name;
    int age;
    string address;

    void readData() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter student age: ";
        cin >> age;
        cin.ignore(); 
        cout << "Enter student address: ";
        getline(cin, address);
    }

    void printData() {
        cout << "Student name: " << name << endl;
        cout << "Student age: " << age << endl;
        cout << "Student address: " << address << endl;
    }
};


class StudentManager {
public:
    void createStudent() {
        Student student; 
        student.readData(); 
        student.printData(); 
    }
};

int main() {
    StudentManager obj; 
    obj.createStudent(); 
    return 0;
}
