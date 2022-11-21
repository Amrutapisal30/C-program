#include<iostream>	
using namespace std;
class vehical
{
	protected:
		int mn;
		public:
			void accept()
			{
				cout<<"\n enter modelno==";
				cin>>mn;
			}
};
class car:public vehical
{
	public:
		string cname;
		float cprice;

		public:
			void get()
			{
				cout<<"\nenter the car name ";
				cin>>cname;
				cout<<"\nenter the car price";
				cin>>cprice;
				
			}
};
class bike:public car
{
	private:
		int bcc;
		string bname;
		public:
			void put()
			{
				cout<<"\n enter the bike name";
				cin>>bname;
				cout<<"\n enyer the bike cc";
				cin>>bcc;
			}
			void display()
			{
				cout<<"\nvehicle modelno"<<mn;
				cout<<"\ncar name"<<cname;
				cout<<"\ncar price"<<cprice;
				cout<<"\nbike name"<<bname;
				cout<<"\nbike cc"<<bcc;
			}
		
};
main()
{
	bike b;
	b.accept();
	b.get();
	b.put();
	b.display();
}
