#include <iostream>
using namespace std;


int main()
{
	//array declaration
	int arr[10];
	int temp;

	for (int i = 0;i < 10;i++)
	{
		cin >> arr[i];
	}
	//sorting - ASCENDING ORDER
	for (int i = 0;i < 10;i++)
	{
		for (int j = i + 1;j < 10;j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	//print sorted array 
	cout << "Sorted Array (Ascending Order):" << endl;
	for (int i = 0;i < 9;i++)
		cout << arr[i] << "\t";
	cout << endl;

	//sorting - Descending ORDER
	for (int i = 0;i < 10;i++)
	{
		for (int j = i + 1;j < 10;j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	//print sorted array 
	cout << "Sorted Array (Descending Order) :" << endl;
	for (int i = 0;i < 10;i++)
		cout << arr[i] << "\t";

	cout << endl;

	return 0;

}
