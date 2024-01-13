#include<bits/stdc++.h>
using namespace std;
class students{
    public:
    int marks;
    string name;
    char grade;

    // Defualt Constructor 
    students(){
        cout<<"Default Constructor of Students class is called."<<endl;
    }

    //parametrized constructor
    students(int marks,string name,char grade){
        cout<<"Parametrized constructor called."<<endl;
        this->marks = marks;
        this->name = name;
        this->grade = grade;
    }
    void print(){
        cout<<"students marks : "<<this->marks<<"\n";
        cout<<"students name : "<<this->name<<"\n";
        cout<<"students grade : "<<this->grade<<"\n";
    }
};
int main(){
    students s1;
    students s2(80,"Jayesh",'A');
    s1.print();
    s2.print();

}