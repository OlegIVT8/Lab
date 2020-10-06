#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

char* strncat_s(char* dest, const char* src, size_t maxlen)
{
	int pos_1 = 0;
	int pos_2 = 0;

	while (dest[pos_1] != 0) pos_1++;
	while (pos_2 != maxlen)
	{
		dest[pos_1] = src[pos_2];
		pos_1++;
		pos_2++;
	}
	dest[pos_1] = 0;
	return dest;
}

int main()
{
	char myArray[13] = { "Kidalinskiy" };
	char destArray[100000] = { "Some text" };


	cout << destArray << endl;
	cout << myArray << endl;

    char* result = strncat_s(destArray, myArray, 5);

	cout << destArray << endl;

	return 0;
}