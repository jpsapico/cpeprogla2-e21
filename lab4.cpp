#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
int flag=0, len=0, x=0;
char str1[50], str2[50], str[50], *s1, *s2, ans;
void problem1();
void problem2();
void problem3();
int problem4(char*);
int choice(int x);
char again(char ans);
char problem5(char*str);
void problem1() {
cout<<"\nEnter first string:  ";
cin.ignore();
    cin>>(str1);
    cout<<"Enter second string: ";
    cin>>(str2);
for(int i=0;i<50;i++){
    s1=&str1[i];
    s2=&str2[i];
    *s1=*s2;
    cout<<str1[i];
}  
}
void problem2() {
cout<<"\nEnter first string:  ";
cin.ignore();
    cin>>(str1);
    cout<<"Enter second string: ";
    cin>>(str2);
for(int i=0;i<50;i++){
    s1=&str1[i];
    s2=&str2[i];
    (int) str1[i];
    (int) str2[i];
    if (*s1==*s2) flag+=0;
else if (*s2<*s1) flag+=1;
else if (*s2>*s1) flag-=1;
}
if (flag==0) cout<<"Equal";
else if (flag>0) cout<<"Positive";
else if (flag<0) cout<<"Negative";
}
void problem3() {
cout<<"\nEnter first string:  ";
cin.ignore();
    cin>>(str1);
    cout<<"Enter second string: ";
    cin>>(str2);
for(int i=0;i<strlen(str1);i++){
    s1=&str1[i];
    cout<<*s1;
}
for(int i=0;i<strlen(str2);i++){
    s2=&str2[i];
    cout<<*s2;
}
}
int problem4(char*s1){
cout<<"\nEnter a string:  ";
cin.ignore();
    cin>>(str1);
while(*s1!='\0') {
x++;
s1++;
}
cout<<"The length of the string is: "<<x;
return x;
}
char problem5(char*str) {
cout<<"\nEnter a string: ";
cin.ignore();
    cin>>(str);
    cout<<"The reverse is: ";
len=strlen(str);
for(int i=len-1;i>=0;i--) {
cout<<str[i];
}
}
int choice(int x) {
cout<<"Lab 4 Creating Programs with Pointers and Strings\n\n";
cout<<"1. Programmer defined function that will do same strcpy function\n\n";
cout<<"2. Programmer defined function that will do same strcmp function\n\n";
cout<<"3. Programmer defined function that will do same strcat function\n\n";
cout<<"4. Programmer defined function that will do same strlen function\n\n";
cout<<"5. A program that will return a reverse string using pointer\n\n";
cout<<"Choose a problem number [1-5]: ";
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
case 4:
problem4(str1);
again(ans);
break;
case 5:
problem5(str1);
again(ans);
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
main() {
choice(x);
}
