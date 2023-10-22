#include <math.h>
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20;
		for (int k = 0; k < i; k++)
		{
			if (arr[i] == arr[k])
			{
				arr[i] = rand() % 20;
			}
		}
		cout << arr[i] << endl;
	}
}
