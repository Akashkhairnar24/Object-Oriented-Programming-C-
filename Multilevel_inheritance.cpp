#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    public:
    void setvalues(int a,int w){
        this->age = a;
        this->weight = w;
    }
};
class German : public Animal{
    public:
    string name;

    public:
    void setName(string name){
        this->name = name;
    }


};
class Male: public German{
    public:
    void print(){
        cout<<"Name:"<<name<<" age: "<<age<<"yrs weight: "<<weight<<"kg gender:male"<<endl;
    }
};
int main(){
    Male m1;
    m1.setvalues(3,25);
    m1.setName("Tommy");
    m1.print();

}