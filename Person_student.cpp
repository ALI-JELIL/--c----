#include <string>
#include <iostream>
using namespace std;
class Date{
	int year,month,day;
public:
	Date(int y=0,int m=0,int d=0):year(y),month(m),day(d){}
	void Input(){ cout<<"input date(year,month,day):"; cin>>year>>month>>day; }
	void Output() const{ cout<<"date(year,month,day):"<<year<<"-"<<month<<"-"<<day<<endl; }
};
class Person{
protected:
	string name;
	char sex;
	const Date birthday;
public:
	Person(string name,char sex,int y=0,int m=0,int d=0):birthday(y,m,d){ this->name=name; this->sex=sex; }
	void SetName(string name){this->name=name; }
	void SetSex(char sex){ this->sex=sex; }
	string GetName(){ return name; }
	char GetSex(){ return sex;  }
	void Display(){ cout<<"name="<<name<<" sex="<<sex<<endl; birthday.Output();}
};
class Student:public Person{
	int english,math,chinese;
	float ave;
public:
	Student(string name,char sex,int english,int math,int chinese,int y=0,int m=0,int d=0):Person(name,sex,y,m,d){ this->english=english; this->math=math;this->chinese=chinese;}
	void SetE(int english){ this->english=english; }
	void SetM(int math){ this->math=math; }
	void SetC(int chinese){ this->chinese=chinese; }
	int GetE(){ return english; }
	int GetM(){ return math; }
	int GetC(){ return chinese; }
	void Compute(){ ave=(english+math+chinese)/3.0; }
	void Display(){Person::Display(); cout<<"english="<<english<<" math="<<math<<" chinese="<<chinese<<" average="<<ave<<endl; }
};

int main(){
	Student s1("zhangsan",'F',90,70,80);
	s1.Compute();
	s1.Display();
    Student s2("zhangsan",'F',90,70,80,2001,4,9);
	s2.Compute();
	s2.Display();
	return 0;
}





		
		


