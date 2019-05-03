#include<iostream>
#include"SortingFunctions.cpp"
#include<string>
using namespace std;

//A user-defined struct to work with
template<typename Tf, typename Ts>
struct Pair {
	Tf f;
	Ts s;
	Pair(Tf f_param, Ts s_param) : f(f_param) : s(s_param) {};
	bool operator <(const Pair<Ts, Tf>& other) {
		return this->f  < other->f;
	};
	bool operator >(const Pair<Ts, Tf>& other) {
		return this->f  > other->f;
	}
};


int main()
{
	int a[] = {1, 56, 98, 98, -124, 0};
	cout << "Initially : ";
	Print(a);

	cout << "Applying Selection Sort, Ascending\n";
	SelectionSort(a, 0);
	Print(a);

	cout << "Applying Selection Sort, Descending\n";
	SelectionSort(a, 1);
	Print(a);
	
	system("pause");
}