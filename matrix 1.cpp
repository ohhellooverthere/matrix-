/*Даны целые положительные числа M и N. Сформировать целочислен-
ную матрицу размера M × N, у которой все элементы I-й строки имеют зна-
чение 10·I (I = 1, ..., M).*/
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	const int M = 4;
	const int N = 8;
	int I;
	
	int arr[M][N];
	for (int i = 0; i < M; i++)
	{
		for ( I = 1; I <= i; I++);
				for (int  j = 0; j < N; j++)
			{
				arr[i][j] = 10 * I;
			}
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << arr[i][j]<< '\t';
		}
		cout << endl;
	}
}
