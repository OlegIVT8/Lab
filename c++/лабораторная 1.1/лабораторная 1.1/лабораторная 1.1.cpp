#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void process_array(int* Array, int len){
	srand(time(NULL));
	int const CNT = 10;
	for (int i = 0; i < len; i++)
	{
		Array[i] = 1 + rand() % CNT;
		cout << " " << Array[i];
	}
	cout << endl;
	//Подсчёт количества каждого числа
	int tmp[CNT] = { 0 };
	for (int i = 0; i < CNT; i++) {
		for (int j = 0; j < 20; j++) {
			if (i == Array[j]) {
				tmp[i]++;
			}
		}
	}
	//Поиск максимального
	int max = tmp[0];
	int max_index = 0;
	for (int i = 1; i < CNT; i++)
	{
		if (max < tmp[i]) {
			max = tmp[i];
			max_index = i;
		}
	}
	cout << "Max count " << max << endl;
	cout << "Max number " << max_index << endl;
	int min = 9;
	for (int i = 0; i < CNT; i++)
	{
		if (tmp[i] == max) {
			if (min > i) {
				min = i;
			}
		}
	}
	cout << "Min: " << min << endl;
	//Вывод больше двух
	for (int i = 0; i < CNT; i++)
	{
		if (tmp[i] >= 2) {
			cout << " " << i;
		}
		//cout << " " << tmp[i];
	}


}

int main()
{	
	int const SIZE = 20;
	int randomDigits[SIZE] = {0};

	for (int i = 0; i < SIZE; i++)
	{
		//cout << randomDigits[i] << setw(3);
		printf("%d  ", randomDigits[i]);
	}
	cout << endl;
	process_array(randomDigits, 20);
	
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << randomDigits[i] << setw(3);
	}

	return(0);
}
