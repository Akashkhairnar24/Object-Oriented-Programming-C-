#include<bits/stdc++.h>
using namespace std;
class students{
    public:
    int marks;
    string name;
    char grade;
    
    public:
    students(){
        marks = 100;
        name = "Jay";
        grade = 'B';
    }
    students(students &temp){
        this->marks = temp.marks;
        this->name = temp.name;
        this->grade = temp.grade;
    }
    void print(){
        cout<<"Marks: "<<this->marks<<" Name: "<<this->name<<" grade: "<<this->grade<<endl;
    }
};
int main(){
    students s1;
    students s2(s1);
    s1.print();
    s2.print();

}