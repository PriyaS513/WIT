# WIT
#include <iostream>

using namespace std;

int main() {
    int arr[] = {12, 45, 1, 9, 34, 53, 7, 17};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (n >= 5) {
        cout << "The 5th largest element is: " << arr[4] << endl;
    } else {
        cout << "The array does not have 5 elements." << endl;
    }

    return 0;
}
