#include<iostream>
using namespace std;
class Ditails
{
	public:
	int width;
	int length;
	int flor;
	int room;
	int r_width;
	int r_length;
	  
};
main()
{
	Ditails d;
	cout<<"Enter width of house=";
	cin>>d.width;
	cout<<"Enter length of house=";
	cin>>d.length;
	cout<<"Enter number of flor=";
	cin>>d.flor;
	cout<<"Enter number of room=";
	cin>>d.room;
	cout<<"Enter width of room=";
	cin>>d.r_width;
	cout<<"Enter length of room=";
	cin>>d.r_length;
	
	cout<<"-----------------------"<<endl;
	
	cout<<"Width of house="<<d.width<<endl
	<<"Length of house="<<d.length<<endl
	<<"Number id flor="<<d.flor<<endl
	<<"Number of rooms="<<d.room<<endl
	<<"Width of room="<<d.r_width<<endl
	<<"Length of room="<<d.r_length<<endl;
}
