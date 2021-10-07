#include<iostream>
#include"hhh.h"

using namespace std;



void eight8_1()
{
	int rats = 10;
	int& rod = rats;
	cout << "rats=" << rats << endl;
	cout << "rod=" << rod << endl;
	cout << "&rats=" << &rats << endl;
	cout << "&rod=" << &rod << endl;

	int bun = 50;
	rod = bun;
	cout << "bun=" << bun << endl;
	cout << "rats=" << rats << endl;
	cout << "rod=" << rod << endl;
	cout << "&bun=" << &bun << endl;
	cout << "&rats=" << &rats << endl;
	cout << "&rod=" << &rod << endl;
}

struct job 
{
	char name[40];
	double salary;
	int floor;
};


//template<class any>
//void swap(any& a, any& b);
void show(job& j);
//template<>void swap<job>(job& j1, job& j2);


void eight8_13()
{
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 1, j = 20;
	cout << "i,j=" << i << "," << j << ".\n";
	cout << "using compiler-gengerated int swapper:";
	swap(i,j);
	cout << "now i,j=" << i << "," << j << ".\n";


	job sue = { "susan yaffee",70030.33,7 };
	job sidney = { "sidney taffee",780.60,9 };
	cout << "before job swapping:\n";
	show(sue);
	show(sidney);
	swap(sue, sidney);
	cout << "after job swapping:\n";
	show(sue);
	show(sidney);



}


//
//template<class any>
//void swap(any& a, any& b)
//{
//	any temp;
//	temp = a;
//	a = b;
//	b = temp;
//
//}
//
//template<>void swap<job>(job& j1, job& j2)
//{
//	double t1;
//	int t2;
//	t1 = j1.salary;
//	j1.salary = j2.salary;
//	j2.salary = t1;
//	t2 = j1.floor;
//	j1.floor = j2.floor;
//	j2.floor = t2;
//
//}

void show(job& j)
{
	cout << j.name << ":$" << j.salary
		<< "on floor" << j.floor << endl;

}














