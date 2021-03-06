/*Дана квадратная матрица A порядка M.Найти сумму элементов ее
главной диагонали, то есть диагонали, содержащей следующие элементы :

A1,1, A2,2, A3,3, ..., AM,M.*/

#include "pch.h"
#include <iostream>
using namespace std;
#include<ctime>
void fillarray(int**const arr, const int row, const int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}
void showarray(int **const arr, const int row, const int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}
int sumdiag(int **const arr, const int row, const int col)
{
	int sum = 0;
	int i;
	int j;
	for (  i = 0,  j = 0; i < row, j < col; i++, j++)
	{
		sum = sum + arr[i][j];
	}
	return sum;
}
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
	int **arr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	///////////////////////////
	fillarray(arr, rows, cols);

	showarray(arr, rows, cols);
	/////////////////////////////////
	cout<<sumdiag(arr, rows, cols);
}