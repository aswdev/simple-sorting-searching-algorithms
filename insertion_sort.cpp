#include <iostream>
#include <cstdlib>
using namespace std;

void fillthearray(int * arr, int s);
void insertsort(int * arr, int s);
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
	insertsort(arr, s);
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

void insertsort(int * arr, int s) {
    int temp;
    for (int i = s - 2; i >= 0; i--) {
        int j = i;
        int temp = arr[i];
        while ((j < s - 1) && (arr[j + 1] < temp)) {
            arr[j] = arr[j + 1];
            j++;
        }
        arr[j] = temp;
    }
}

void printarray(int * arr, int s) {
	cout << endl << "Sorted array elements: " << endl;
	for (int i = 0; i < s; i++) {
		cout << "Array element[" << i << "]=" << arr[i] << endl;
	}
}
