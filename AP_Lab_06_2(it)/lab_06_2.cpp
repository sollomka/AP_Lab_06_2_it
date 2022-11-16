#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

void create(int* a, const int n);
void print(int* a, const int n);
double calculate(int* a, const int n, const int i, double& avg,
	int& vsi_i_elementu, int& suma);

int main()
{
	srand(time(NULL));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	cout << "Введіть кількість елементів у масиві: " << endl;
	cout << "n = "; cin >> n;
	int* a = new int[n];
	create(a, n);
	print(a, n);
	double avg = 0;
	int suma = 0;
	int vsi_i_elementu = 0;
	cout << "Середнє арифметичне індексів непарних елементів масиву = "
		<< calculate(a, n, 0, avg, suma, n) << endl;
	delete[] a;
}
void create(int* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}
void print(int* a, const int n)
{
	cout << "a[] = { ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << " }" << endl;
}
double calculate(int* a, const int n, const int i, double& avg,
	int& vsi_i_elementu, int& suma)
{
	bool ymova = false;
	for (int i = 0; i < n;)
	{
		if (a[i] % 2 != 0)
		{
			ymova = true;
			vsi_i_elementu++;
			suma += i;
		}
		if (ymova)
		{
			avg = (1. * suma) / vsi_i_elementu;
		}
		i++;
	}
	return avg;
}