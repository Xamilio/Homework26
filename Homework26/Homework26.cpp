#include <iostream>
#include<stdlib.h>
using namespace std;

//1
// 
//int main()
//{
//
//	int size = 10;
//	int sizep;
//	int* array = new int[size] {1,2,3,4,5,6,7,8,9,10};
//	cout << "Введите количевство элементов которое хотите добавить: \n";
//	cin >> sizep;
//	int* temp = new int[size + sizep];
//	for (int i = 0; i < size; i++)
//	{
//		temp[i] = array[i];
//	}
//	for (int i = 0; i < sizep; i++)
//	{
//		int l = rand() % 50;
//		temp[size + i] = l;
//	}
//	delete[] array;
//	array = temp;
//	for (int i = 0; i < size + sizep; i++)
//	{
//		cout << array[i] << " ";
//	}
//	delete[] array;
//}
// 
//2
// 
//int* add(int* array, int size, int sizep)
//{
//
//	int* temp = new int[size + sizep];
//	for (int i = 0; i < size; i++)
//	{
//		temp[i] = array[i];
//	}
//	for (int i = 0; i < sizep; i++)
//	{
//		int l = rand() % 50;
//		temp[size + i] = l;
//	}
//	delete array;
//	return temp;
//}
//int main()
//{
//
//	int size = 10;
//	int sizep;
//	int* array = new int[size] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	cout << "Введите количевство элементов которое хотите добавить: \n";
//	cin >> sizep;
//	array = add(array, size, sizep);
//	for (int i = 0; i < size + sizep; i++)
//	{
//		cout << array[i] << " ";
//	}
//}

//3
int main()
{
	int sizea;
	int sizeb;
	cout << "Введите длину массива а: ";
	cin >> sizea;
	cout << "Введите длину массива b: ";
	cin >> sizeb;
	int* ma = new int[sizea];
	int* mb = new int[sizeb];
	for (int i = 0; i < sizea; i++)
	{
		ma[i] = rand() % 20;
	}
	for (int i = 0; i < sizeb; i++)
	{
		mb[i] = rand() % 20;
	}
	int sizec = sizeb;
	if(sizec > sizea)
	{
		sizec = sizea;
	}	
	int last = 0;
	int* temp = new int[sizec];
	for (int i = 0; i < sizea; i++)
	{
		int a = ma[i];
		for (int j = 0; j < sizeb; j++)
		{
			if (a != mb[j]) continue;
			bool find = false;
			for (int k = 0; k < last; k++)
			{
				if (temp[k] != a) continue;
				find = true;
				break;				
			}
			if (!find)
			{
				temp[last] = a;
				last++;
			}
			break;
		}
	}
	int* md = new int[last];
	for (int i = 0; i < last; i++)
	{
		md[i] = temp[i];
	}
	delete temp;
	for (int i = 0; i < sizea; i++)
	{
		cout << ma[i] << " ";
	}
	cout << " \n";
	for (int i = 0; i < sizeb; i++)
	{
		cout << mb[i] << " ";
	}
	cout << " \n";

	for (int i = 0; i < last; i++)
	{
		cout << md[i] << " ";
	}
	cout << " \n";
}