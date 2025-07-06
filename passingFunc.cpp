#include<iostream>
using namespace std; 
class Student{
    public:
    string name ;
    int roll_no;
    float cgpa;
    void display(){
        cout<<name<<endl;
        cout<<roll_no<<endl;
        cout<<cgpa<<endl;
    }
};
int main (){
    Student s1;
    s1.name = "John";
    s1.roll_no = 101;
    s1.cgpa = 9.1;
    s1.display();
 cout<<endl;
    Student s2
    = s1;
    s2.name = "Ramesh";
    s2.roll_no =102;
    s2.cgpa = 8.5;

    
    s2.display();

    return 0 ;
}