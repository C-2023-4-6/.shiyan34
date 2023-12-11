#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int max(int x, int y) {
	int z;
	z = (x > y) ? x : y;
	return z;
}
int min(int x, int y) {
	int z;
	z = (x < y) ? x : y;
	return z;
}
int gys(int a, int b) 
{
	int i = max(a, b);
	int ma = max(a, b);
	int mi = min(a, b);


	while (ma >= 1) {
		if (a % ma == 0 && b % ma == 0)
		{
			cout << "最大公因数为:" << ma;
			break;
		}
		else
			ma--;
	}
	int z = max(a, b);
	while (z >= 1) {
		if (a % z == 0 && b % z == 0)
		{
			cout << "最小公倍数是" << a * b / z;
			break;
		}
		else
			z--;
	}
	cout << "完成" << endl;
	return 0;
}
/*int main()
{
	int m, n;
	cin >> m;
	cin >> n;
	cout << gys(m, n) << endl;

	return 0;
}*/