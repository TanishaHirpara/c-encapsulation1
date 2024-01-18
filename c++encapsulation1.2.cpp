#include<iostream>
using namespace std;


class customer{
	private:
	int id;
	char name[100];
    char age[100];
    char city[100];
    char mobileno[10];
    char simcardvalidity[100];
    char telecomname[100];
 

	
	

public:
	
	void setdata()
	{
		cout<<"Enter customer id = ";
		cin>>id;
		cout<<"Enter customer name = ";
		cin>>name;
		cout<<"Enter customer age = ";
		cin>>age;
		cout<<"Enter customer city = ";
		cin>>city;
		cout<<"Enter customer mobile no. = ";
		cin>>mobileno;
		cout<<"Enter customer simcard validity = ";
		cin>>simcardvalidity;
		cout<<"Enter customer telecom name = ";
		cin>>telecomname;
	
		
		
		
	}
	void getdata()
	{
		cout<<"customer id is = "<<id<<endl
		<<"customer name is = "<<name<<endl
		<<"customer age is = "<<age<<endl
		<<"customer city is = "<<city<<endl
		<<"customer mobile no. is = "<<mobileno<<endl
		<<"customer simcard validity is = "<<simcardvalidity<<endl
		<<"customer telecome name is = "<<telecomname<<endl;
		
	

	}
	
	
};
main()
{
	customer c1,c2,c3,c4,c5;
	
	c1.setdata();
	c2.setdata();
	c3.setdata();
	c4.setdata();
    c5.setdata();
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	c5.getdata();
	
	
}

