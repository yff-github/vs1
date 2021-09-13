#include<iostream>
#include"hhh.h"
#include<ctime>
using namespace std;


void five5_14()
{
	cout << "enter the delay time:";
	float sece;
	cin >> sece;
	clock_t delay = sece * CLOCKS_PER_SEC;
	cout << "loading" << endl;
	clock_t start = clock();
	while (clock() - start < delay);
	cout << "done\a\n";

}