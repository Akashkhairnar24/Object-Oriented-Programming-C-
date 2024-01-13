#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    void bark(){
        cout<<"Animal bark"<<endl;
    }
};
class Human{
    public:
    void speak(){
        cout<<"Human speak"<<endl;
    }
};
class Living: public Animal, public Human{
    
};
int main(){
    Living l1;
    l1.bark();
    l1.speak();

}