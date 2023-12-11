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
			asc[i] = s[i] + 32;//将字符串转化为Ascall码(含处理大小写)
		counts[asc[i]]++;//表示字符出现的次数		
	}
	for (int j = 0; j < 130; j++)
	{
		if (counts[j] != 0)
			cout <<char(j)<<":" << counts[j] << "个" << endl;
	}

}

/*int main()
{
	char s[31];//输入字母（字符串)
	cin.getline(s, 31);
	count(s);
	return 0;
}*/