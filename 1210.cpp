//ͨ��ָ������麯��  2015/12/10 By ali 
#include<iostream>
using namespace std;
class A{
	public:
		virtual void show(){
			cout<<"AAA"<<endl;
		}
}; 

class B:public A{
	public:
		void show(){
			cout<<"BBB"<<endl;
		}
};
void display(A*a){
	a->show();
}

int main(){
A *pa=new A;
B *pb=new B;
display(pa);   //A *a=pa
display(pb);   //A *a=pb   ���Ƽ����� 
delete pa;
pa=NULL;
delete pb;
pb=NULL;
return 0; 

} 
