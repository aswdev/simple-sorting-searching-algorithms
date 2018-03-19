#include <iostream>

using namespace std;

void fillthearray(int * arr, int s);
int binarysearch(int * arr, int s);
int main() {
    int s;
    cout << "Hello! Let's make an array, but remember that it has to bo sorted!!! You can use one of my others algorithms :P" << endl;
    cout << "What's the size of the array?" << endl;
    cin >> s;
    while (s <= 0) {
        cout << "Array size has to be greater than 0! Try again: ";
        cin >> s;
    }
    int * arr = new int[s];
    fillthearray(arr, s);
    binarysearch(arr, s);
    delete[] arr;
    return 0;
}
void fillthearray(int * arr, int s) {
    for (int i = 0; i < s; i++) {
        cout << "T[" << i << "]=";
        cin >> arr[i];
    }
}
int binarysearch(int * arr, int s) {
    int b_index = 0;
    int f_index = s - 1;
    int m, x;
    cout << "What are you looking for? Enter the number: ";
    cin >> x;
    while (b_index <= f_index) {
        m = (b_index + f_index) / 2;
        if (arr[m] == x) {
            cout << "Found on position " << m << endl;
            return 0;
        }
        if (arr[m] < x) {
            b_index = m + 1;
        } else {
            f_index = m - 1;
        }
    }
    cout << "The number you are looking for does not exist. ";
    return 1;
}
