#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

bool is_prime(int num)
{
	int i = 2;
	int c = 3;
	while (i <=num)
	{
			if(num%i!=0&&num%c!=0&&num%5!=0&&num%7!=0)
		cout << num << endl;
		else
			i++;
		return 0;
	}
}
/*int main()
{

	for (int num = 2; num<= 200; num++) 
	{
		if (num == 2 || num == 3 || num == 5 || num == 7) {
			cout << num <<" ";
		}
		else
			
			if (is_prime(num) != 0) {
				int n = 4; 
				n++;
				if (n % 10 == 0)
					cout << num <<endl;
				else
					cout << num<<" ";
			}
	}
	return 0;
}*/