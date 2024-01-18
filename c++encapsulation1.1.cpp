#include<iostream>
using namespace std;


class student{
	private:
	int id;
	char name[100];
    char age[100];
    char course[100];
    char email[100];
    char city[100];
    char college[100];

	
	

public:
	
	void setdata()
	{
		cout<<"Enter student id = ";
		cin>>id;
		cout<<"Enter student name = ";
		cin>>name;
		cout<<"Enter student age = ";
		cin>>age;
	    cout<<"Enter student course = ";
		cin>>course;
		cout<<"Enter student email = ";
		cin>>email;
		cout<<"Enter student city = ";
		cin>>city;
		cout<<"Enter student college = ";
		cin>>college;
		
		
		
	}
	void getdata()
	{
		cout<<"student id is = "<<id<<endl
		<<"student name is = "<<name<<endl
		<<"student age is = "<<age<<endl
		<<"student course is = "<<course<<endl
		<<"student email is = "<<email<<endl
		<<"student city is = "<<city<<endl
		<<"student college is = "<<college<<endl;
	

	}
	
	
};
main()
{
	student s1,s2,s3,s4,s5;
	
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s4.setdata();
    s5.setdata();
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();
	
	
}

