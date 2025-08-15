// EXPERIMENT-10
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
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

/*Output :
Enter the number of elements: 5
Enter 5 elements: 1 2 3 4 5
Reversed array: 5 4 3 2 1 
*/
