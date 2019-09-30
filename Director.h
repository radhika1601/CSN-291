#include<string>
#include<iostream>
#include"Administration.h"
#include"PatientDiagnosis.h"
#include"DoctorNurseCleaning.h"
using namespace std;
class Director:public Administration
{
	
		char post[20];
		char password[40];
		bool isLoggedIn;
	public:
		Director():Administration()
	{
		strcpy(password,"");
		isLoggedIn=false;
	}
		Director(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number,char Password[]):Administration(Name,Gender,Date_of_birth,Address,Contact_number)
	{
		strcpy(password,Password);
		isLoggedIn=false;
	}
		void login(char Password[])
	{
		if(strcmp(password,Password)==0)
			{
				isLoggedIn=true;
			}
	}

		template<class T>
		void change_salary(T t,int newSalary)
		{
			T.salary=newSalary;
		}
		template<class T>
		void remove_staff(T t,int Id)
		{
			T[Id].remove();
		}
		template<class T>
		void add_staff(T t, int n)
		{
			static int id;
			static double salary;
			static char name[30];
			static  char gender[10];
			static  char date_of_birth[10];
			static char address[100];
			static long contact_number;
			static char speciality[50];
			cout<<"Enter Name:"<<endl;
			cin>>name;
			cout<<"Enter Gender:"<<endl;
			cin>>gender;
			cout<<"Enter Date of birth"<<endl;
			cin>>date_of_birth;
			cout<<"Enter Address:"<<endl;
			cin>>address;
			cout<<"Enter Contact Number:"<<endl;
			cin>>contact_number;
			cout<<"Enter Salary:"<<endl;
			cin>>salary;
			static int id=findID(T);
			switch(n)
			{
				case 1:
				cout<<"Enter Speciality:"<<endl;
				cin>>speciality;
				T[id].setDoctorInfo();
				break;
				case 2:
				T[id].setNurseInfo();
				break;
				case 3:
				T[id].setCleaning_Staff();
				break;
				default();
			}


		}
};


