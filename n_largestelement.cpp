#include <iostream>

using namespace std;

int main() {
    int arr[];
    int n,m;
    cout<<"enter the number of element in your array";
    cin>>n;
    cout<<"enter the element\n";
    for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
    
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
 cout<<"enter the which largest element you want\n";
    cin>>m;
    
    if (n >= m) {
        cout << "The " , m ," largest element is: " << arr[m-1] << endl;
    } else {
        cout << "The array does not have ", m ," elements." << endl;
    }

    return 0;
}
