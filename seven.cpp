#include<iostream>
#include"hhh.h"
#include<string>

using namespace std;

const int MAX = 5;

void seven7_7()
{
	double properties[MAX];
	int size = fill_array(properties, MAX);
	show_array(properties, size);
	cout << "enter revaluation factor:";
	double factor;
	cin >> factor;
	revalue(factor, properties, size);
	show_array(properties, size);
	cout << "done\n";
	
}

int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "enter value #" << (i + 1) << ":";
		cin >> temp;
		if (!cin) 
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "bad input:input process terminated\n";
			break;
		}
		else if (temp < 0)
		{
			break;
		}
		ar[i] = temp;
	}
	return i;
}



void show_array(const double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "property #" << (i + 1) << ":S";
		cout << ar[i] << endl;

	}
}



void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] *= r;
	}
}

//const int SIZE = 5;
//
//void seven7_14()
//{
//	string list[SIZE];
//	cout << "enter your" << SIZE << "favoite astronomical sight\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << i + 1 << ":";
//		getline(cin, list[i]);
//	}
//	cout << "your list:";
//	display1(list, SIZE);
//
//
//}
//
//void display1(const string qw[],int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << i + 1 << ":" << qw[i] << endl;
//	}
//}
//
