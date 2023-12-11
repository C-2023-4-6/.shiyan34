#include<iostream>
#include<iomanip>
#include<string>
#include<istream>
using namespace std;


int parseHex(const char* const hexString)
{
	int m = strlen(hexString);//m表示长度
	int shiliu = 1, n = 0;
	for (int i = m - 1; i >= 0; i--)
	{
		if (hexString[i] >= '0' && hexString[i] <= '9')
		{
			n += (hexString[i] - '0') * shiliu;
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F')
		{
			n += (hexString[i] - 'A' + 10) * shiliu;
		}
		else if (hexString[i] >= 'a' && hexString[i] <= 'f')
		{
			n += (hexString[i] - 'a' + 10) * shiliu;
		}
		shiliu *= 16;//16的次方，依次增加
	}
	return n;

}
/*int main()
{
	char v[25];
	cin >> v;
	int x = parseHex(v);
	cout << x << endl;


	system("pause");
	return 0;
}*/