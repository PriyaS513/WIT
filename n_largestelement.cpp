To print the sorted array in ascending order using the bubble sort algorithm, you can modify your code as follows:

```cpp
#include <iostream>

using namespace std;

int main() {
    int arr[50];
    int n, m;
    cout << "Enter the number of elements in your array: ";
    cin >> n;
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Perform the bubble sort in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter which largest element you want: ";
    cin >> m;

    if (m >= 1 && m <= n) {
        cout << "The " << m << "th largest element is: " << arr[n - m] << endl;
    } else {
        cout << "The array does not have the " << m << "th largest element." << endl;
    }

    return 0;
}
```
