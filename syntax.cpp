#include<iostream>
using namespace std;
class Student{
    public:
    string Name;
    int Roll_no;
    string Department;
    float CGPA;

};

int main (){
    Student student;
    student.Name="Harshit Tiwari";
    student.Roll_no=230;
    student.Department="Btech CSE-AI";
    student.CGPA=7.1;
    cout<<student.Name<<endl;
    cout<<student.Roll_no<<endl;
    cout<<student.Department<<endl;
    cout<<student.CGPA<<endl;

}