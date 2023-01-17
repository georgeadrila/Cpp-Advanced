#include<iostream>
using namespace std;

class Student
{
private:
    /* data */
public:
    int studentCode;
    string name;
    string lname;
    string email;
};

class Parent : public Student{
};
