#include<iostream>
#include<iomanip>
#include<string>
#include<istream>
//#undef UNICODE
//#undef  _UNICODE
using namespace std;

void count(char s[])
{
	char asc[31];
	int counts[130] = { 0 };
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			asc[i] = s[i];
		else
			asc[i] = s[i] + 32;//���ַ���ת��ΪAscall��(�������Сд)
		counts[asc[i]]++;//��ʾ�ַ����ֵĴ���		
	}
	for (int j = 0; j < 130; j++)
	{
		if (counts[j] != 0)
			cout <<char(j)<<":" << counts[j] << "��" << endl;
	}

}

/*int main()
{
	char s[31];//������ĸ���ַ���)
	cin.getline(s, 31);
	count(s);
	return 0;
}*/