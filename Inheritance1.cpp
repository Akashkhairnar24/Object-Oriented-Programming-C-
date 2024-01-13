#include<bits/stdc++.h>
using namespace std;
class Human{
    public:
    int weight;
    int height;
    int age;

    public:
    void setvalues(int weight,int height,int age){
        this->weight = weight;
        this->height = height;
        this->age = age;
    }
    void print(){
        cout<<this->weight<<" "<<this->height<<" "<<this->age<<endl;
    }
    
};
class Male: public Human{
    public: 
    string color;

    public:
    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};
class female: protected Human{
    public:
    string beauty;

    public:
    void hardwork(){
        cout<<"female is not sleeping"<<endl;
    }
};
int main(){
    Male m1;
    m1.color = "Black";
    m1.sleep();
    m1.setvalues(45,5,24);
    m1.print();
    female f1;
    f1.beauty = "White";    
    f1.hardwork();
    f1.setvalues(100,5,23);
    f1.print();

}