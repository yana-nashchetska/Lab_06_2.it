#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

void Create(int* a, int size, int i)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = "; cin >> a[i];
		cout << endl;
	}
}

int Min(int* a, int size)
{
	int min;
	int imin = -1;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 0)
		{
			min = a[i];
			imin = i;
			break;
		}
	if (imin == -1)
	{
		cerr << "Немає елементів, котрі задовольняють умову" << endl;
		return 0;
	}
	for (int i = imin + 1; i < size; i++)
		if (a[i] < min && a[i] % 2 == 0)
			min = a[i];
	return min;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	cout << "Введіть кількість елементів масиву:" << endl;
	cin >> size;

	int* a = new int[size];
	cout << "Введіть елементи масиву:" << endl;
	Create(a, size, 0);
	cout << endl;
	cout << "Найменший парний елемент масиву: " << Min(a, size) << endl;

	delete[] a;
	return 0;
}