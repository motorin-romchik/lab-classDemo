#include<iostream>
using namespace std;
#include"Header.h";
void money::In(void) 
{
	cout << "\n¬ведите сколько рублей и копеек:";
	cout << "\nруб:"; cin >> x;
	cout << "коп:";
	cin >> y;
	if (y > 99) {
		cout << "ќшибка.¬веденное количество копеек - ошибочно";
		exit(0);
	}
	if (y < 10) {
		y*= 10;
	}
		
}
void money::Out(void)const
{
	cout << "|" << x << "."<<y<<"|" ;
}
int money::cop()
{
	int c = 0;
	c = ((x * 100) + y);
	return c;

}