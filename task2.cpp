#include<iostream>
using namespace std;
class Student
{
	void Name//Made 1st Function to input and print the Name//
	{
		string name;
		cout<<"Enter Your First Name"<<endl;
		cin>>name;
	}
	void Age//Made 2nd Function to input and print the Age//
	{
		int age;
		cout<<"Enter Your Age"<<endl;
		cin>>age;
	}
	void Rollno
	{
		int roll_no;
		cout<<"Enter YOur Roll Number"<<endl;
		cin>>roll_no;
	}
};
int main()
{
	Student s1;
	s1.Name();
	s1.Age();
	s1.Rollno();
	return 0;
}

