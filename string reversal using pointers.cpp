#include <iostream>
using namespace std;

void reverseArray(int* arr, int size) {
    int* start = arr;           // Pointer to the first element
    int* end = arr + size - 1;  // Pointer to the last element

    while (start < end) {
        // Swap the values pointed by start and end
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers
        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, n); // Reverse the array using the function

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}