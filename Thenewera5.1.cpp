#include<iostream>
using namespace std;
class Modifier
{
   public:
   char name[100];
   char surname[100];	
};
main()
{
	Modifier m1;
	
	cout<<"Enter name=";
	cin>>m1.name;
	cout<<"Enter surname=";
	cin>>m1.surname;
	
	cout<<"Name and surname="<<m1.name <<m1.surname;
	
}
