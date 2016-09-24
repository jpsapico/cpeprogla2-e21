#include <iostream>
#include <iomanip>
#include<stdlib.h>
using namespace std;
int x, i, j, tPrice;
char ans, p;
float grade;
void problem1();
void problem2();
void problem3();
int choice(int x);
char again(char ans);

void problem1(){
struct Name{
       char fullName[100];
};

struct Student{
       int id;
       Name name;
       double quiz[3]; 
       double sum;
	   double average;      
};

void newLine();

    Student stud;
    cout << "Enter Student Record: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "Name: ";
    cin.getline(stud.name.fullName, 99);
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> stud.quiz[i];        
    }
    
    cout << "\n\n";
    cout << "Student Record\n";
    cout << "ID: " << stud.id << endl;
    cout << "Name: " << stud.name.fullName << endl;
    for(int i=0; i<3; i++){
            stud.sum+=stud.quiz[i];
            stud.average=stud.sum/3;
    }
    cout<< "Grades: " << stud.average;
    
    if (stud.average>=75)
    {
    	cout << " \nRemarks: Passed";
	}
	else
	{
		cout << " \nRemarks: Failed";
	}

}

void problem2(){
	struct Srecord{
	int id;
	char name[30];
	struct Quizzes{
		float quiz;
	};
 Quizzes quizzes[3];
};

void newLine();

	Srecord ci[5];
	cout<<"Enter 5 Student<s> Record"<<endl;
	for (i=0; i<5; i++){
		cout<<"\nStudent "<<(i+1)<<endl;
		cout<<"ID: ";
		cin>>ci[i].id;
		newLine();
		cout<<"Name: ";
		cin.getline(ci[i].name, 49);
		cout<<"Enter 3 quizze(s): ";
		for(j=0;j<3;j++){	
			cin>>ci[i].quizzes[j].quiz;	
		}
}
	cout << setw(5) << "No."
	<< setw(15)<<"Student No"
	<< setw(20)<<"Name"
	<< setw(10)<<"Grade"
	<< setw(12)<<"Remark";
	

	
	for(int i=0; i<5; i++){
		grade=0;
		for(j=0;j<3;j++){
		grade+=ci[i].quizzes[j].quiz;
		}
		cout<<endl;
		cout<<setw(5)<<i+1
		<<setw(15)<<ci[i].id
		<<setw(20)<<ci[i].name;
		cout<<setw(10)<<setprecision(4)<<grade/3<<setw(12);
		if( grade/3>=75 ){
			cout<<"Passed";
			}
			else{
			cout<<"Failed";
			}
		}
		cout<<endl;
}

void problem3(){ 
	struct Customer{
	struct Name{
		char firstName[20];
		char lastName[20];
	}name;
	
	struct Order{
		int day;
		int month;
		int year;
		int quan;
		struct Item{
			int ID;
			char itemName[20];
			int Price;
		};
	Item item[3];
	}order;
	
	double contNo;
};

void newLine();

	Customer c[3];
	for (i=0;i<3;i++){
		cout<<"NOTE: For the 2nd and 3rd customer information just press enter first to input \nthe details.\n\n";
		cout<<"CUSTOMER INFORMATION "<<i+1<<endl;
		cin.ignore();
		cout<<"First Name: ";
		cin.getline(c[i].name.firstName,20);
		cout<<"Last Name: ";
		cin.getline(c[i].name.lastName,20);
		cout<<"Contact No: ";
		cin>>(c[i].contNo);
		cout<<"ORDER DATE: "<<endl;
		cout<<"Day: ";
		cin>>c[i].order.day;
		cout<<"Month: ";
		cin>>c[i].order.month;
		cout<<"Year: ";
		cin>>c[i].order.year;
		cout<<"\nENTER 3 ITEMS: "<<endl;
		for (j=0;j<3;j++){
		    cout<<"ID: ";
		    cin>>c[i].order.item[j].ID;
		    newLine();
    	    cout<<"Name: ";
    		cin.getline(c[i].order.item[j].itemName,29);
    		cout<<"Price: ";
    		cin>>c[i].order.item[j].Price;
    		cout<<"Quantity: ";
    		cin>>c[i].order.quan;
    		cout<<endl;
		}
		newLine();
}
	j=0;
	cout<<"SUMMARY REPORT"<<endl;
	cout<<" #"<<setw(30)<<"Customer Name"
	<<setw(20)<<"Order Date"
	<<setw(15)<<"Items"
	<<setw(15)<<"Price"
	<<setw(15)<<"Quantity"<<endl;
	
	for (i=0;i<3;i++){
		tPrice=0;
		cout<<" "<<i+1
		<<setw(23)<<c[i].name.lastName<<","
		<<setw(6)<<c[i].name.firstName
		<<setw(11)<<c[i].order.day<<"/"<<c[i].order.month<<"/"<<c[i].order.year<<endl;
		
    	for (j=0;j<3;j++){
    		cout<<setw(67)<<c[i].order.item[j].itemName
			<<setw(15)<<c[i].order.item[j].Price
			<<setw(15)<<c[i].order.quan<<endl;
    		tPrice += c[i].order.item[j].Price;
		}
		tPrice=tPrice*c[i].order.quan;
		cout<<setw(96)<<"TOTAL PRICE: "<<tPrice<<endl;
	}
}

void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}

int choice(int x) {
cout<<"Lab 5 Writing a Programs that uses Structures\n\n";
cout<<"1. Program that will display the student record  with the average of 3 quizzes and diplay the remark of the student\n\n";
cout<<"2. Program that will display all the student records  with their grades and remarks\n\n";
cout<<"3. Program that will ask to input 3 customers information. Each customer have 3 items purchased.\n\n";
cout<<"Choose a problem number [1-3]: ";
cin>>x;
cout<<endl;
switch(x) {
case 1:
problem1();
again(ans);
break;
case 2:
problem2();
again(ans);
break;
case 3:
problem3();
again(ans);
break;
break;
default: cout <<"\nWrong choice of problem number!\n";
again(ans);
break;
}
return x;
}
char again(char ans) {
cout<<"\n\nDo you want to solve another problem? [y/n] ";
cin>>ans;
if (ans=='Y' || ans=='y') {
system("cls");
choice(x);
}
else if (ans=='n'|| ans=='N') {
cout<<"\nSayonara!!!";
}
else {
again(ans);
}
return ans;
}
main()
{
	choice(x);
}
