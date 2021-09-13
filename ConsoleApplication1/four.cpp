#include<iostream>
#include"hhh.h"
#include<cstring>
#include<string>
using namespace std;


void four4_2()
{
	const int size = 15;
	char name1[size] = "c++hello";
	char name2[size];
	cout << "name1 is " << name1 << endl;
	cin >> name2;
	system("cls");
	cout << "name2 is " << name2 << endl;
	cout << "name2 number is" << strlen(name2) << endl;
	name1[3] = '\0';
	cout << "name1 now is " << name1 << endl;
}

void four4_9()
{
	char a1[20];
	char a2[20] = "jaguar";
	string s1;
	string s2 = "panther";

	s1 = s2;
	strcpy_s(a1, a2);//将a2赋值给a1

	s1 += "paste";
	strcat_s(a1, "paste");//在a1后面加上paste
	
	int len1 = s1.size();
	int len2 = strlen(a1);
	
	cout << "s1 long " << len1<<endl;
	cout << "a1 long " << len2 <<endl;



}