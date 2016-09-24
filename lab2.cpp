#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

double problem1(double b){
	cout<<"Enter number to round off: ";
	cin>>b;
	cout<<"Rounded value: "<<round(b)<<"\n\n";
	return round(b);
}

void problem2(){
	int uniques [10];
	int max = 20;
	int min = 1;
	int num1; 
	bool check = true; 
	srand(time(NULL)); 
	for (int i=0;i<10;i++){
    	
	do{
    	num1=rand()%max+min;
    	check = true;
   		 for (int j=0;j<i;j++)
   		     if (num1 == uniques[j]) {
           	 check = false; 
             break; 
        }
    } while (!check); 
	uniques[i]=num1;
	cout << num1 << " ";
	}
}

void factorial(){
	int n, result=1;
	cout<<"\n\nGet the factorial of the number: ";
	cin>>n;
	for(int i=1;i<n+1;i++) {
		if(n==0) cout<<" Result: 1\n";
		else result=result*i;
	}
	cout<<"Result: "<<result<<endl;
}

main(){
	double b;
	int result;
	problem1(b);
	problem2();
	factorial();
}
