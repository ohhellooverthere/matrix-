/*Дана матрица размера M × N. В каждом ее столбце найти количество
элементов, больших среднего арифметического всех элементов этого
столбца.*/
#include "pch.h"
#include <iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int M,N;
	cout << "M=";
	cin >> M;
	cout << "N=";
	cin >> N;
	int rows = M;
	int cols = N;
	int **arr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	///////////////////////////
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	/////////////////////////////////
	int i,j;
	double sum = 0; double num = 0;
	double *psum = &sum;
	double *pnum = &num;
	for (j = 0; j < cols; j++)
	{
		double bolsche = 0;
		double seraref;
		double *pseraref = &seraref;
		for (i = 0; i < rows; i++)
		{
			(*psum) = (*psum) + arr[i][j];
			(*pnum)++;
			 (*pseraref) = sum / num;
		}
		for (i = 0; i < rows; i++)
		{
			double *pbolsche = &bolsche;
			if(arr[i][j]>seraref)
			{
				(*pbolsche)++;
			}
			
		}
		cout << "чисел в столбике " << j << " больше чем среднее арифметическое столбика : "<< bolsche <<endl;
		seraref = 0;
		bolsche = 0;
	}

	//////////////////////////
	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;

}
