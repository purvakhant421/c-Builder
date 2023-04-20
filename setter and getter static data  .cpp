#include<iostream>
#include<string.h>

using namespace std;

class HighSchool
{

private:
    int id;
    char stu_name[20];
    int stu_roll_no;
    int stu_standard;
    int stu_age;
    int stu_contact;
    char stu_address[40];
public:

        static char stu_edu_institute_name[40];

    void getter(){
        cout<<"Enter student's id:";
        cin>>this->id;
        cout<<"Enter student's name:";
        cin>>this->stu_name;
        cout<<"Enter student's roll number:";
        cin>>this->stu_roll_no;
        cout<<"Enter student's standard in digit:";
        cin>>this->stu_standard;
        cout<<"Enter student's age in years:";
        cin>>this->stu_age;
        cout<<"Enter student's contact number:";
        cin>>this->stu_contact;
        cout<<"Enter student's address:";
        cin>>this->stu_address;
    }
    void setter(){
        this->id = id;
        strcpy(this->stu_name,stu_name);
        this->stu_roll_no = stu_roll_no;
        this->stu_standard = stu_standard;
        this->stu_age = stu_age;
        this->stu_contact = stu_contact;
        strcpy(this->stu_address,stu_address);
    }
    void printer(){
        cout<<"Student's id: "<<this->id<<endl;
        cout<<"Student's name: "<<this->stu_name<<endl;
        cout<<"Student's roll number is: "<<this->stu_roll_no<<endl;
        cout<<"Student is in standard: "<<this->stu_standard<<endl;
        cout<<"Student's age is: "<<this->stu_age<<endl;
        cout<<"Student's contact number is: "<<this->stu_contact<<endl;
        cout<<"Student's institute name is: "<<HighSchool::stu_edu_institute_name<<endl;
        cout<<"Student's address is: "<<this->stu_address<<endl;
    }
};

char HighSchool::stu_edu_institute_name[40] = "Red&White institute";

int main(){
    HighSchool s[5];
    int i;
    for ( i = 0; i < 4; i++)
    {
        s[i].getter();
        s[i].setter();
    }
    for ( i = 0; i < 4; i++)
    {
        s[i].printer();
    }
    return 0;
}

// Without use of this

// #include<iostream>
// #include<string.h>

// using namespace std;

// class HighSchool
// {

// private:
//     int id;
//     char stu_name[20];
//     int stu_roll_no;
//     int stu_standard;
//     int stu_age;
//     int stu_contact;
//     char stu_address[40];
// public:

//     static char stu_edu_institute_name[40];

//     void getter(){
//         cout<<"Enter student's id:";
//         cin>>id;
//         cout<<"Enter student's name:";
//         cin>>stu_name;
//         cout<<"Enter student's roll number:";
//         cin>>stu_roll_no;
//         cout<<"Enter student's standard in digit:";
//         cin>>stu_standard;
//         cout<<"Enter student's age in years:";
//         cin>>stu_age;
//         cout<<"Enter student's contact number:";
//         cin>>stu_contact;
//         cout<<"Enter student's address:";
//         cin>>stu_address;
//     }
//     void setter(){
//         id = id;
//         strcpy(stu_name,stu_name);
//         stu_roll_no = stu_roll_no;
//         stu_standard = stu_standard;
//         stu_age = stu_age;
//         stu_contact = stu_contact;
//         strcpy(stu_address,stu_address);
//     }
//     void printer(){
//         cout<<"Student's id: "<<id<<endl;
//         cout<<"Student's name: "<<stu_name<<endl;
//         cout<<"Student's roll number is: "<<stu_roll_no<<endl;
//         cout<<"Student is in standard: "<<stu_standard<<endl;
//         cout<<"Student's age is: "<<stu_age<<endl;
//         cout<<"Student's contact number is: "<<stu_contact<<endl;
//         cout<<"Student's institute name is: "<<HighSchool::stu_edu_institute_name<<endl;
//         cout<<"Student's address is: "<<stu_address<<endl;
//     }
// };

// char HighSchool::stu_edu_institute_name[40] = "Red&White institute";

// int main(){
//     HighSchool s[5];
//     int i;
//     for ( i = 0; i < 2; i++)
//     {
//         s[i].getter();
//         s[i].setter();
//     }
//     for ( i = 0; i < 2; i++)
//     {
//         s[i].printer();
//     }
//     return 0;
// }
