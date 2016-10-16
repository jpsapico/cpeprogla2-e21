#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream f("input.txt");
	int a;
	while(f>>a){
		if(a%3==0&&a%5==0)
		cout<< "FizzBuzz" <<endl;
		else if(a%3==0)
		cout<< "Fizz" <<endl;
	 	else if(a%5==0)
		cout<< "Buzz" <<endl;
		else 
		cout<< a<<endl;
	}
	return 0;
}
