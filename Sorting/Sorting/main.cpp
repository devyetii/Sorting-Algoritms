#include<iostream>
#include"SortingFunctions.cpp"
#include<string>
using namespace std;

int main()
{
	int a[] = {1, 56, 98, -124, 0};
	InsertionSort(a);
	Print(a);
	system("pause");
}