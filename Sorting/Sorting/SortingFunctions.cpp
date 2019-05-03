#include<iostream>
#include<iterator>

//Helping function to get the array size
//source: https://www.quora.com/What-is-the-equivalent-of-array-length-used-in-Java-in-C++
template<typename T, std::size_t N>
std::size_t sz(const T(&)[N]) { return N; }

//Helping funtion for fast printing, not complexity-wise but code-wise :D
template<typename T, std::size_t N>
void Print(const T (&arr)[N])
{
	for (int i = 0; i < sz(arr); ++i) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

template<typename T, std::size_t N>
void InsertionSort(T (&arr)[N])
{

}


template<typename T, std::size_t N>
void SelectionSort(T (&arr)[N])
{
	
}