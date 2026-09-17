#include <iostream>


void ShowArrayInt(int* arr, int size)
{
	std::cout << "Int Array!\n";
	for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
	std::cout << "\n";
}

void ShowArrayDouble(double* arr, int size)
{
	std::cout << "Double Array!\n";
	for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
	std::cout << "\n";
}

void ShowArrayChar(char* arr, int size)
{
	std::cout << "Char Array!\n";
	for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
	std::cout << "\n";
}


// c) поиск минимума
int FindMinInt(int* arr, int size)
{
	int min = arr[0];
	for (int i = 1; i < size; i++)
		if (arr[i] < min) min = arr[i];
	return min;
}

double FindMinDouble(double* arr, int size)
{
	double min = arr[0];
	for (int i = 1; i < size; i++)
		if (arr[i] < min) min = arr[i];
	return min;
}

char FindMinChar(char* arr, int size)
{
	char min = arr[0];
	for (int i = 1; i < size; i++)
		if (arr[i] < min) min = arr[i];
	return min;
}


// d) поиск максимума
int FindMaxInt(int* arr, int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}

double FindMaxDouble(double* arr, int size)
{
	double max = arr[0];
	for (int i = 1; i < size; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}

char FindMaxChar(char* arr, int size)
{
	char max = arr[0];
	for (int i = 1; i < size; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}