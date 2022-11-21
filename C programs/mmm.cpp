#include<iostream>
using namespace std;
class employee
{
	protected:
		int id;
		string name;
           int bs;
		public:
			void get_emp()
			{
				cout<<"\n enter the employee id";
				cin>>id;
					cout<<"\n enter the employee name ";
					cin>>name;
						cout<<"\n enter the employee basic salary";
						cin>>bs;
						
			}
			void disp_emp()
			{
				cout<<"\nempolyee id"<<id;
				cout<<"\nempolyee name"<<name;
				cout<<"\nempolyee basic salary"<<bs;
			}
};
class admin:public employee
{
	private:
		int incentive,gross;
		public:
			void get_admin()
		{
			cout<<"\nenter the incentive";
			cin>>incentive;
			
			gross=bs+incentive;
			
		}
		void disp_admin()
		{
			cout<<"\nincentive"<<incentive;
			cout<<"\ngross"<<gross;
		}
};
class date:public employee
{
	private:
		string dmy;
		public:
			void  get_date()
			{
				cout<<"\nenter the DATE(dd/mm/yyyy)";
				cin>>dmy;
			}
			void disp_date()
			{
				cout<<"\nDATE"<<dmy;
			}
};
main()
{
	admin a;
		a.get_emp();

	a.get_admin();
		a.disp_emp();
	a.disp_admin();
    date d;
    d.get_emp();
    
    d.get_date();
    d.disp_emp();
    d.disp_date();
}
