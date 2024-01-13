#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
    int health;
    string name;
    int power;
};
int main(){
    hero ramesh;
    ramesh.health = 80;
    ramesh.name = "Akash";
    ramesh.power = 90;
    cout<<"Ramesh health :"<<ramesh.health<<endl;
    cout<<"Ramesh name :"<<ramesh.name<<endl;
    cout<<"Ramesh power :"<<ramesh.power<<endl;
    return 0;
}