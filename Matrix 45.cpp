/*Дана матрица размера M × N. Найти максимальный среди элементов

тех столбцов, которые упорядочены либо по возрастанию, либо по убыва-
нию. Если упорядоченные столбцы в матрице отсутствуют, то вывести 0.*/

#include "pch.h"
#include <iostream>
using namespace std;
#include<ctime>

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int M, N;
	cout << "M=";
	cin >> M;
	cout << "N=";
	cin >> N;
	int rows = M;
	int cols = N;
	int**arr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	/////////////////
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j]=rand()%20+1;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j]<<"\t";
		}
		cout << endl;
	}
	////////////////////
	int up = 1;//показывает упорядоченый по возростанию или нет, если к=0 - не упорядоченыый, если к=1 то упорядоченный 
	int down = 1;//показывает упорядоченый по возростанию или нет, если к=0 - не упорядоченыый, если к=1 то упорядоченный
	int max1 = 0;
	int max2 = 0;
	int *pmax1 =&max1 ;
	int *pmax2 = &max2;
	int *pdown = &down;
	int *pup = &up;
	for (int j = 0; j < cols; j++)
	{
		for (int i = 1; i < rows; i++)
		{
			

			if (arr[i][j] < arr[i-1][j])// для down
			{
				*pmax2 = arr[i-1][j];
			}
			else
			{
				*pdown = 0;
			}
			if (arr[i][j] > arr[i-1][j])//для up
			{
				*pmax1 = arr[i][j];
			}
			else 
			{
				*pup = 0;
			}
		}
		/////// проверили 
		if ((up == 1) || (down == 1))
		{
			if (up == 1)
			{
				cout << "максимальный элемент: ";
				cout << max1<<"\t";
			}
			if (down == 1)
			{
				cout << "максимальный элемент: ";
				cout << max2 << "\t";
			}
		}
		else
		{
			cout << endl;
			cout << "\t" << 0;
		}
	}
	
	///////////////////
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete arr;
}

