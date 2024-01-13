#include<bits/stdc++.h>
using namespace std;
class hero{
    public: 
    int health;
    char level;
    hero(){
        this->health = 80;
        this->level = 'A';
    }
    private:
    int power;
    public:
    void setPower(int x){
        this->power = x;
    }
    int getPower(){
        return this->power;
    }
};
int main(){
    hero ramesh;
    cout<<"Ramesh Health: "<<ramesh.health<<endl;
    cout<<"Ramesh Level: "<<ramesh.level<<endl;
    ramesh.setPower(90);
    cout<<"Ramesh Power: "<<ramesh.getPower()<<endl;
    return 0;
}