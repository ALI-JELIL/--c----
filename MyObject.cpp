//2015/12/9 By ali
#include<iostream>
using namespace std;
int *p=NULL;
class MyObject{
	public:
		MyObject(){
			cout<<"Here is the constructure for MyObject"<<endl;
		}
    	~MyObject(){
			cout<<"Here is the destructure for MyObject"<<endl;
		}
}; 
void function1(){
	MyObject ob;
	*p=3;
}
void function2(){
try{
	function1();
}
catch(...){
	cout<<"Caught an exception in function2()"<<endl;
}
}
int main(){
	function2();
	return 0;
}
