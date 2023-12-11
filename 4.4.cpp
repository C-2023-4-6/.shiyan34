#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int merge(int list1[],int size1,  int list2[], int size2,int list3[])
{
	cout << "enter list1:";
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "enter list2:";
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}

	int i = 0;
	int q = 0;
	while (i < size1)
	{
		list3[i] = list1[q];
		i++;
		q++;
	}
	i = size1;
	int j = 0;
	while (i < size1+size2)
	{
		list3[i] = list2[j];
		i++;
		j++;
	}
	return 0;
}

int print(int list[],int size) 
{
	for (int i = 0; i < size; i++) {
		cout << list[i]<<" ";
}
	return 0;
}
/*int main()
{
	 int list1[80];
	 int list2[80];
	 int list3[80];
	int size1, size2;
	cin >> size1;
	cin >> size2;
	merge(list1, size1, list2, size2,list3);

	cout << endl;

	cout << "the list1 is:";
	cout << print(list1, size1);
	cout << endl;
	cout << "the list2 is:";
	cout << print(list2, size2);

		for (int i = 0; i < size1+size2-1; i++) 
		{
			for (int j = 0; j < size1 + size2 - 1 - i; j++) {
				if (list3[j] > list3[j + 1]) {
					int temp = list3[j];
					list3[j] = list3[j + 1];
					list3[j + 1] = temp;
				}
			}
		}

		cout << "the result is:" << endl;
		for (int i = 0; i < size1+size2; i++) {
			cout << list3[i] << " ";
		}
	return 0;
}*/