#include<iostream>
using namespace std;
class Test
{
	public:
		void details
		{
			int roll;
			string name,city;
			cout<<"Hello"<<endl;
			cout<<"Enter Your Name"<<endl;
			cin>>name;
			cout<<"Hii"<<" "<<name<,endl;//Printing a Greeting//
			cout<<"Enter Your City"<<endl;
			cin>>city;
			cout<<"Okay, So you live in"<<" "<<city<<endl;//Printing City//
			cout<<"Enter your Roll NO"<<endl;
			cin>>roll;
			cout<<"You are Roll No-"<<" "<<roll<<endl;//Printing Roll Number//
		}
};
int main()
{
	Test t1;
	t1.details();
	return 0;
}

