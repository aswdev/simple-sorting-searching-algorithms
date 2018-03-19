#include <iostream>

using namespace std;

void fillthearray(int * arr, int s);
void bubblesort(int * arr, int s);
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
    bubblesort(arr, s);
    printarray(arr, s);
    delete[] arr;
    return 0;
}
void fillthearray(int * arr, int s) {
    for (int i = 0; i < s; i++) {
        cout << "Array element[" << i << "]=";
        cin >> arr[i];
    }
}
void bubblesort(int * arr, int s) {
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

        }
    }
}
void printarray(int * arr, int s) {
    cout << endl << "Sorted array elements: " << endl;
    for (int i = 0; i < s; i++) {
        cout << "Array element[" << i << "]=" << arr[i] << endl;
    }
}
