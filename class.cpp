#include<iostream>
using namespace std;
class Student{
	string rollno,name;
	int phno;
	public:
		Student(string n,string r,int p)
		{
			this->name=n;
			this->rollno=r;
			this->phno=p;
		}
		void display()
		{
			cout<<" "<<name<<" "<<rollno<<" "<<phno<<endl;
		}
};
int main()
{
	Student s1("venkat","22A91A0579",83478);
	s1.display();
	string *rollno=(string*)&s1;
	*rollno="22A91A0584";
	s1.display();
}
