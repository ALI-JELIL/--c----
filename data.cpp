#include <iostream>  
using namespace std;
class Base{  
public:    
 Base(){ cout<<"Constructing base class\n"; }   
 ~Base(){ cout<<"Destructing base class\n"; }  
};  
class Derive : public Base{
public:  
Derive(){ cout<<"Constructing derived class\n";};    
~Derive(){ cout<<"Destructing derived class\n";};  
private:
Base a;
};  
int main(){    
        Derive op;   
}

