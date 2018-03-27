#include <iostream>
#include <cstdlib>
using namespace std;

void fillthearray(int * arr, int s);
void flagsort012(int * arr, int s);
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
	flagsort012(arr, s);
	printarray(arr, s);
	delete[] arr;
	system("pause");
}
void fillthearray(int * arr, int s) {
	cout << "Enter the elements, but remember that every element has to be 2 or 1 or 0 only!" << endl;
	for (int i = 0; i < s; i++) {
		cout << "Array element[" << i << "]=";
		cin >> arr[i];
		while (arr[i] != 0 && arr[i] != 1 && arr[i] != 2)
		{
			cout << "Entered value has to be 2 or 1 or 0! Enter again: " << endl;
			cin >> arr[i];

		}
	}
}
void flagsort012(int * arr, int s)
{
	int left = 0;
	int middle = 0;
	int right = s - 1;
	while (middle <= right) {
		if (arr[middle] == 0 ) {
			swap(arr[left], arr[middle]);
			left++;
			middle++;
		}
		else if (arr[middle] == 1) {
			middle++;
		}
		else {
			swap(arr[middle], arr[right]);
			right--;

		}
	}
}

void printarray(int * arr, int s) {
	cout << endl << "Sorted array elements: " << endl;
	for (int i = 0; i < s; i++) {
		cout << "Array element[" << i << "]=" << arr[i] << endl;
	}
}
