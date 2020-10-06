#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Initialization(float** firstArray, float* secondArray) {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 3; j++)
			firstArray[i][j] = sin(i - j) + cos(i + j);
}

void ProcessArray(float** firstArray, float* secondArray) {
	int k = 0;
	for (int i = 4; i >= 0; i--) {
		for (int j = 0; j < 3; j++) {
			secondArray[k] = firstArray[i][j];
			k++;
		}
	}
}

void ShowArray1(float** firstArray) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(14) << firstArray[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void ShowArray2(float* secondArray) {
	for (int i = 0; i < 15; i++)
		cout << setw(14) << secondArray[i] << endl;
	cout << endl;
}

int main()
{
	float** firstArray = new float* [5];
	for (int i = 0; i < 5; i++)
		firstArray[i] = new float[3];
	float* secondArray = new float[15];

	Initialization(firstArray, secondArray); // инициализируем массивы

	ShowArray1(firstArray); // выводим первый массив

	ProcessArray(firstArray, secondArray); // производим вычисления

	ShowArray2(secondArray); // выводим второй массив

	delete[] firstArray;
	for (int i = 0; i < 5; i++)
		delete[] firstArray[i];
	delete[] secondArray;

	return 0;
}