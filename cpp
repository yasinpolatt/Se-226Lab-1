#include <iostream>
#include <string>
using namespace std;


int main() {


string name;
string id;
cout << "What is your name ? ";
cin >> name;
cout << "Hello " << name<<endl;
cout << "What is your studnet id ? ";
cin >> id;
cout << "Your ID is : " <<id<< endl;

//second  task

int var1;
int var2;

cout<< "Enter first value : ";
cin >> var1;
cout<< "Enter second value : ";
cin >> var2;

int sum;
int diff;
int prod;

sum = var1 + var2;
diff = var1 - var2;
prod = var1 * var2;

cout<< "Sum : " << sum<<endl;
cout<< "Diff : " << diff<<endl;
cout<< "Prod : " << prod<<endl;

//third task

string name2;
int lab;
int mid;
int final;

cout<< "Enter your name : ";
cin>>name2;
cout<< "Enter your lab score : ";
cin>>lab;
cout<<"Enter your midterm score : ";
cin>>mid;
cout<<"Enter your final score : ";
cin>>final;

int lastScore = (lab * 0.25) + (mid * 0.35) + (final * 0.40);

cout<<"Last score is : " << lastScore << endl;

//fourth task

cout<< "*" << endl << "**" << endl << "***" << endl << "**"  << endl <<"*";




return 0;





   
}
