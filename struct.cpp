#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct studRecord{
	int id;
	char name[50];
	double grades[3];
};

void newLine();

void showStudRecord(studRecord stud);

int main (){
	
	studRecord s;
	cout<<"Enter Student Record: \n";
	cout<<"ID: ";
	cin>>s.id;
	newLine();
	cout<<"Name: ";
	cin.getline(s.name,49);
	for(int i=0; i<3; i++){
        cout << "Grade "<< i+1 << ": ";
        cin >> s.grades[i];        
    }
	showStudRecord(s);	
}

void showStudRecord(studRecord stud){
	int sum=0;
	int average=0;
	cout<<"\n\nStudent Record: \n";
	cout<<"ID: "<<stud.id<<endl;
	cout<<"Name: "<<stud.name<<endl;
	for(int i=0; i<3; i++){
        cout << "Grade "<< i+1 << ": " << stud.grades[i] << endl;  
		sum+=   stud.grades[i]; 
    }
    average=sum/3;
    cout<<"Grades: "<<average<<endl;
    if(average<75)
    cout<<"\nRemarks: FAILED";
    else
    cout<<"Remarks: PASSED";

}

void newLine(){
	char s;
	do{
		cin.get(s);
	}while(s!='\n');
}
