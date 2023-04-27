#include<iostream>

using namespace std;
class Distance
{
	public:
	float feet;
	float inch;
};
main()
{
	Distance d1,d2,d3;
	
	cout<<"Enter value of feet=";
	cin>>d1.feet;
	cout<<"Enter value of inch=";
	cin>>d1.inch;
	
	cout<<"Enter value of onther feet=";
	cin>>d2.feet;
	cout<<"Enter value of onther inch=";
	cin>>d2.inch;
	
	d3.feet=d1.feet+d2.feet;
	d3.inch=d1.inch+d1.inch;
	
	while((d3.inch)>=12)
	{
		d3.inch=d3.inch-12;
		d3.feet++;
	}
	cout<<"Distance in feet & inch ="<<d3.feet<<"."<<d3.inch;
//	cout<<"Distance in inch="<<d3.inch;
}
