#include<iostream>
#include<string.h>
using namespace std;

class Distance
{
	public:
	int d;
	void set(int d)
	{
		this->d = d;
	}
	void get()
	{
		cout<<"Distance = "<< d <<endl;
	}
	
	Distance operator+(Distance x)
	{
		Distance t;
		t.d = this->d+x.d;
		return t;
	}
	
};
int main()
{
	Distance d,d1,d2;
	
	cout<<"------------------------"<<endl;
	d.set(10);
	d.get();
	cout<<endl;
	
	cout<<"------------------------"<<endl;
	d1.set(42);
	d1.get();
	cout<<endl;
	
	cout<<"------------------------"<<endl;
	d2=d+d1;
	d2.get();
	return 0;
}
