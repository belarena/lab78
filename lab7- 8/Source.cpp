#include "iostream"
#include "Header.h"
using namespace std;
template <class T>
void rezSum(Set<T> mas)
{
	T sum = NULL;
	for (int i = 0; i < mas.sizesize; i++)
	{
		sum = sum + mas.getVal(i);
	}
	cout << sum;
}

int main()
{


	int warn;
	Set<double> *one = new Set<double>[2];
	Set<double> U(0);
	Set<double> U_(0);
	cout << "Work with double:" << endl;
	one[0]();
	cout << "1oe mnozhestvo: ";
	one[0].print();
	cout << "Razmer 1ogo mnozhestva: ";
	cout << one[0]() << endl;
	one[0] + 1.2;
	one[0] + 12.5;
	one[0] + 13.7;
	cout << "dobavili k 1omy mnozhestvy elementi \nVivodim elementi etogo mnozhestva: ";
	one[0].print();
	cout << "	Vivodim elementi 2ogo mnozhestva: ";

	one[1].print();
	U = one[0] + one[1];
	cout << "	Ob'edinenie 2yx mnozhestv (1 and 2 ): ";

	U.print();
	U_ = one[0] * one[1];
	cout << "Perese4enie 2yx mnozhestv (1 and 2 ): ";
	U_.print();

	cout << "Work with int:" << endl;
	Set<int>*one1 = new Set<int>[2];
	Set<int> U1(0);
	Set<int> U_1(0);
	one1[0]();
	cout << "1oe mnozhestvo: ";
	one1[0].print();
	cout << "Razmer 1ogo mnozhestva: ";
	cout << one1[0]() << endl;
	one1[0] + 1;
	one1[0] + 12;
	one1[0] + 13;
	cout << "dobavili k 1omy mnozhestvy elementi \nVivodim elementi etogo mnozhestva: ";
	one1[0].print();
	cout << "	Vivodim elementi 2ogo mnozhestva: ";

	one1[1].print();
	U1 = one1[0] + one1[1];
	cout << "	Ob'edinenie 2yx mnozhestv (1 and 2 ): ";

	U1.print();
	U_1 = one1[0] * one1[1];
	cout << "Perese4enie 2yx mnozhestv (1 and 2 ): ";
	U_1.print();
	cout << endl;
	cout << endl;
	cout << "Sum of U_1: ";
	rezSum(U_1);

	system("Pause");
}
