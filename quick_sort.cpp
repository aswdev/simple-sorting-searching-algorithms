#include <iostream>
#include <cstdlib>
using namespace std;

void fillthearray(int * arr, int s);
void quicksort(int * arr, int left, int right);
void printarray(int * arr, int s);

int main() {
	int s;
	cout << "Hello! Let's make an array, after creating it, this program will sort your array elements" << endl;
	cout << "What's the size of the array?" << endl;
	cin >> s;
	while (s <= 0) {
		cout << "Array size has to be greater than 0! Try again: ";
		cin >> s;
	}
	int * arr = new int[s];
	fillthearray(arr, s);
	quicksort(arr, 0, s-1);
	printarray(arr, s);
	delete[] arr;
	system("pause");
}
void fillthearray(int * arr, int s) {
	for (int i = 0; i < s; i++) {
		cout << "Array element[" << i << "]=";
		cin >> arr[i];
	}
}
void quicksort(int * arr, int left, int right)
{
	int center, pivot, border;
	center = (left + right) / 2;
	pivot = arr[center];
	arr[center] = arr[right];
	border = left;
	for (int i = left; i<right; i++)
	{
		if (arr[i]<pivot)
		{
			swap(arr[border], arr[i]);
			border++;
		}

	}
	arr[right] = arr[border];
	arr[border] = pivot;
	if (left<border - 1)
	{
		quicksort(arr, left, border - 1);
	}
	if (border + 1<right)
	{
		quicksort(arr, border + 1, right);
	}
}

void printarray(int * arr, int s) {
	cout << endl << "Sorted array elements: " << endl;
	for (int i = 0; i < s; i++) {
		cout << "Array element[" << i << "]=" << arr[i] << endl;
	}
}
