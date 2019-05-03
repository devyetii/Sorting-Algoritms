#include<iostream>
#include<iterator>
#include<algorithm> //From which we use the method std::swap()

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


/*
** (Internal) : Selection Sort 
** params : arr->Array to be sorted, ord-> 0 for Asc., 1 for Desc.
** Complexity : O(n^2), n->amount of sorted data
** Order : Ascending
** Stability: Stable
** Find algorithm and explanation in the Reference Data Structures: A Pseudocode Approach Using C, 2nd ed.
** Section 12.2 - p: 537
*/
template<typename T, std::size_t N>
void SelectionSort(T (&arr)[N], bool ord)
{
	int swap_idx = 0; //represents the index of the smallest element in the unsorted list
	for (int i = 0; i < N-1; ++i) {
		swap_idx = i;
		for (int j = i+1; j < N; ++j) {
			if ((ord ? arr[j] > arr[swap_idx] : arr[j] <arr[swap_idx]))
				swap_idx = j;
		}
		std::swap(arr[i], arr[swap_idx]); 
	}
}


/*
** (Internal) : Insertion Sort 
** Order : Ascending
** Stability: Stable
** Find algorithm and explanation in the Reference Data Structures: A Pseudocode Approach Using C, 2nd ed.
** Page 
*/ 
template<typename T, std::size_t N>
void InsertionSort(T (&arr)[N])
{
	
}