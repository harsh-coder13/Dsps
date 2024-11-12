#include <iostream>
using namespace std;

void Linearsearch(int key, int a[], int size) {
    int flag = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] == key) {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout <<key << "is present in the array." << endl;
    else
        cout <<key << "is not present in the array." << endl;
}

void binarysearch(int key, int a[], int size) {
    int low = 0, high = size - 1;
    int mid = (low + high) / 2;
    
    while (low <= high) {
        if (a[mid] == key) {
            cout <<key << "is present in the array." << endl;
            break;
        } else if (key < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }

    if (low > high)
        cout <<key << "is not present in the array." << endl;
}

int main() {
    int a[100], size, key, temp, ch;

    cout << "Enter the size of array: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        cout << "Enter the number " << i + 1 << ": ";
        cin >> a[i];
    }

    do {
        cout << "Enter the searching key: ";
        cin >> key;
        
        cout << "1: Linear search  2: Binary search 0-Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        
        switch (ch) {
            case 1:
                Linearsearch(key, a, size);
                break;
                
            case 2:
                for (int i = 0; i < size; i++) {
                    for (int j = i + 1; j < size; j++) {
                        if (a[i] > a[j]) {
                            temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                        }
                    }
                }
                
                cout << "The sorted array is: ";
                for (int i = 0; i < size; i++) {
                    cout << a[i] << " ";
                }
                cout << endl;
                
                binarysearch(key, a, size);
                break;
                
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    } while (ch!=0);

    return 0;
}
