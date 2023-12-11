#include<iostream>
using namespace std;
//#include "swap.h"


double celsius_to_fah(double cel)//摄氏到华氏
{
	double k = cel * 33.8;
	cout << "对应华氏温标为" << k << endl;
	return 0;
}

double fahrenheit_to_cels(double fah)//华氏到摄氏 
{
	double k = fah / 33.8;
	cout << "对应摄氏温标为" << k << endl;
	return 0;
}
