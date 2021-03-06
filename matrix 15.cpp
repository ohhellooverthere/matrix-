/*Дана квадратная матрица A порядка M (M — нечетное число). Начи-
ная с элемента A1,1 и перемещаясь по часовой стрелке, вывести все ее эле-
менты по спирали: первая строка, последний столбец, последняя строка в
обратном порядке, первый столбец в обратном порядке, оставшиеся эле-
менты второй строки и т. д.; последним выводится центральный элемент
матрицы.*/

#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int M;
	cout << "M=";
	cin >> M;
	int rows = M;
	int cols = M;
	int **arr = new int*[rows];
	for (int i = 0; i < M; i++)
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

	// Вывод значений матрицы по спирали
	cout << "вывод значений по спирали:\n";
	int rowBeg = 0;
	int rowEnd = rows - 1;
	int colBeg = 0;
	int colEnd = cols - 1;
	int count = rows * cols;
	while (count)
	{
		for (int i = colBeg; i <= colEnd && count; i++, count--)
		{
			cout << arr[rowBeg][i] << "\t";
		}
		rowBeg++;
		for (int i = rowBeg; i <= rowEnd && count; i++, count--)
		{
			cout << arr[i][colEnd] << "\t";
		}
		colEnd--;
		for (int i = colEnd; i >= colBeg && count; i--, count--)
		{
			cout << arr[rowEnd][i] << "\t";
		}

		rowEnd--;
		for (int i = rowEnd; i >= rowBeg && count; i--, count--)
		{
			cout << arr[i][colBeg] << "\t";
		}
		colBeg++;
	}


	//////////////////////////
	for (int i = 0; i < M; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;






}

