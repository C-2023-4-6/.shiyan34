#include<iostream>
#include<iomanip>
#include<string>
#include<istream>
using namespace std;
int main() 
{
	int n;
	cout << "the length is:";
	cin >> n;

	int* vary;
	vary = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> vary[i];

		//int* p_vary[] = vary[i];
	}

	
	cout<<"the num you type is:"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout <<vary[i] <<" ";
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (vary[j] > vary[j + 1])
			{
				int temp = vary[j];
				vary[j] = vary[j+1];
				vary[j+1] = temp;
			}
		}
	}

	cout << endl;
	cout << "ÅÅÐòÊÇ£º" << endl;
	for (int i = 1; i <=n ; i++)
	{
		cout << vary[i] << endl;
	}

	return 0;
}