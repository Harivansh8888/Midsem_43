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
};
int main()
{
	Student s1;
	s1.Name();
	return 0;
}

