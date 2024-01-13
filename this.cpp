#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
    int health;
    char level;
    int power;

    public:
    void sethealth(int health){
        health = health;
    }
    void thishealth(int health){
        this->health = health;
    }
    void print(){
        cout<<"this adress: "<<this<<endl;
    }
    void setlevel(char level){
        level = level;
    }
    void thislevel(char level){
        this->level = level;
    }
};
int main(){
    hero jay;
    jay.print();
    jay.sethealth(100);
    jay.setlevel('P');

    
    cout<<"Without using this keyword:-> health: "<<jay.health;
    cout<<" level: "<<jay.level;

    jay.thishealth(90);
    jay.thislevel('A');
    cout<<endl<<"using this keyword:-> health: "<<jay.health;
    cout<<" level: "<<jay.level;
}