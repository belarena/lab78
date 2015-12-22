#pragma once
#include <iostream>
#include <ctime>
using namespace std;
class Auto
{
private:
	char *name;
public:
	Auto(char *n)
	{
		name = n;
	}
	void show()
	{
		cout << name << endl;
	}
	friend bool operator ==(Auto a1, Auto a2)
	{
		return a1.name == a2.name;
	}
	friend ostream& operator << (ostream& out ,Auto a1)
	{
		return out << a1.name;
	}
};
template <class T>
class Set
{

	T **mdann;
	static const int maxsize = 20;


public:
	int sizesize;
	void random()
	{
		setlocale(LC_ALL, "Russian");
		T value;
		srand(time(NULL));

		for (int q = 0; q < sizesize; q++)
		{
		dread:
			value = rand() % 20 - 5.3;
			{
				for (int w = 0; w < q; w++)
				{
					if (**(mdann + w) == value)
					{
						q--; goto dread;
					}
				}
				*(mdann + q) = new T(value);
			}
		
		}

	}
	Set()
	{
		bool ext = false;
		int size;
		srand(time(NULL));


		while (!ext)
		{
			cout << "\nVVedite razmer mnozhestva :";
			cin >> size;
			sizesize = size;
			if (sizesize <= maxsize)
			{
				mdann = new T*[maxsize];
				this->random();
				ext = true;
			}
			else
			{
				cout << "Previshen dopystimiy razmer(max 20 el) ";
				ext = false;
			}
		}
	}

	void delel(T element)
	{
		for (int q = 0; q < sizesize; q++)
		{
			if (element == **(mdann + q))
			{
				sizesize--;
				**(mdann + q) = **(mdann + sizesize);
				delete mdann[sizesize];
			}
		}
	}

	T getVal(int i)
	{
		return **(mdann + i);
	}
	void print()
	{
		for (int q = 0; q < sizesize; q++)
		{
			cout << **(mdann + q) << " ";
		}
		cout << endl;
	}

	int print_size()
	{
		int valiek = sizesize;
		cout << "Kol-vo elementov v mnozhestve = " << valiek;
		return valiek;
	}

	Set(Set &q)
	{
		sizesize = q.sizesize;
		mdann = new T*[maxsize];
		for (int t = 0; t < sizesize; t++)
			mdann[t] = q.mdann[t];
	}



	Set(int q)
	{
		this->sizesize = q;
		mdann = new T*[maxsize];
		//this->random();
	};

	int operator()() //return mownost
	{
		return this->sizesize;
	}



	friend bool operator +(Set<T> &zer, T elik)
	{

		for (int q = 0; q < zer.sizesize; q++)
		{
			if (**(zer.mdann + q) == elik)
			{
				return 0;
			}
		}

		if (zer.sizesize == zer.maxsize)
		{
			cout << "Previshen dopystimiy razmer mnozhestva. " << endl;
			return 0;
		}
		else
		{
			*(zer.mdann + zer.sizesize) = new T(elik);
			zer.sizesize++;
			return 1;
		}

	}

	friend Set operator + (Set& zer1, Set& zer2)
	{
		int raz, dva;
		int sch;
		Set zer3(0);
		zer3 = zer2;
		for (raz = 0; raz < zer1.sizesize; raz++)
		{
			sch = 0;
			for (dva = 0; dva < zer3.sizesize; dva++)
			{
				zer3 + *zer1.mdann[raz];
			}
		}
		return zer3;
	}

	friend Set operator * (Set&zer1, Set&zer2)
	{
		int raz, dva;
		Set zer3(0);
		int elik;
		for (raz = 0; raz < zer1.sizesize; raz++)
		{
			for (dva = 0; dva < zer2.sizesize; dva++)
				if (*zer1.mdann[raz] == *zer2.mdann[dva])
				{
					zer3 + *zer1.mdann[raz];
				}
		}
		return zer3;
	}
	void addElem()
	{

	}
};
