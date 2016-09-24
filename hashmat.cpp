#include<iostream>
#include<cmath>
using namespace std;
int j[3],e,y,p;
int main()
{
	for(e=0;e<3;e++)
	{
		cin>>y>>p;
		j[e]=abs(y-p);
	}
	cout<<endl<<j[0]<<endl<<j[1]<<endl<<j[2]<<endl;
	return 0;
}
