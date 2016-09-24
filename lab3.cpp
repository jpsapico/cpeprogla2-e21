#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
char str1[100], str2[200], word[100], ans;
int n, flag, x;
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
int choice(int x);
char again(char ans);
void problem1() {
int result;
cin.ignore();
cout<<"Enter a first word (str1): ";
cin>>(str1);
cout<<"Enter second word  (str2): ";
cin>>(str2);
result = strcmp(str1, str2);
  if(result==-1){
  	cout<<"negative";
  }
  if(result==1){
  	cout<<"positive";
  }
  if(result==0){
  	cout<<"equal";
  }
}
void problem2() {
cin.ignore();
cout<<"Enter a first word (str1): ";
cin>>(str1);
cout<<"Enter second word  (str2): ";
cin>>(str2);
cout<<"New string value for str1: "<<strcpy(str1, str2);
}
void problem3() {
cin.ignore();
cout<<"Enter a first word (str1): ";
cin>>(str1);
cout<<"Enter second word (str2): ";
cin>>(str2);
cout<<"New string value for str1: "<<strcat(str1, str2);
}
void problem4() {
cin.ignore();
cout<<"Enter a word: ";
cin>>(word);
n=strlen(word);
for(int i=0;i<n;i++) {
if(word[i]!=word[n-(i+1)]) flag=0;
else flag=1;
    }
    if (flag==1) cout<<"The word "<<word<<" is a palindrome.";
    else if (flag==0) cout<<"The word "<<word<<" is not a palindrome.";
}
void problem5() {
cin.ignore();
cout<<"Enter some string: ";
cin>>(word);
strlwr(word);
word[0]-=32;
for(int i=0;i<strlen(word);i++) {
if(word[i]==32) word[i+1]-=32;
}
cout<<word<<endl;
}
void problem6() {
cin.ignore();
cout<<"Enter a string: ";
cin>>(word);
n=strlen(word);
for(int i=n;i>=0;i--) {
if (word[i]==32) {
int j=i+1;
while(word[j]!=32&&j<n) {
cout<<word[j];
j++;
}
cout<<endl;
}
}
int k=0;
while(word[k]!=32) {
cout<<word[k];
k++;
}
}
int choice(int x) {
cout<<"Lab 3 String Manipulation\n\n";
cout<<"1. String Compare\n\n";
cout<<"2. String Copy\n\n";
cout<<"3. String Concatenation\n\n";
cout<<"4. Palindrome\n\n";
cout<<"5. A program that will capitalize each word from the string input\n\n";
cout<<"6. A program that will split the string in to word and display in reverse vertical order\n\n";
cout<<"Choose a problem number [1-6]: ";
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
problem4();
again(ans);
break;
case 5:
problem5();
again(ans);
break;
case 6:
problem6();
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
