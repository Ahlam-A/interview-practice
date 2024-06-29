/*
בהינתן מערך ממוין של מספרים (יתכן כפילויות),
כתוב פונקציה שמקבלת מספר ותחזיר את האינדקס הראשון שהוא מופיע.
לדוגמא:
	arr = [1,2,2,2,3,3,3,4] val=3 ; ans = 4 
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int N, int val) {
    int l = 0, r = N - 1;
    while (l < r) {
        if (arr[l] == val) return l;
        
        int mid = (l + r) / 2;
        if (arr[mid] < val) l = mid + 1;
        else r = mid;
    }
    return arr[l] == val ? l : -1;
}

int main() {
    int arr[10] = {1,2,2,3,3,4};
    cout << (binarySearch(arr, 6, 0) == -1) << endl;
    cout << (binarySearch(arr, 6, 3) == 3) << endl;
    cout << (binarySearch(arr, 6, 4) == 5) << endl;
    cout << (binarySearch(arr, 6, 1) == 0) << endl;
    cout << (binarySearch(arr, 6, 5) == -1) << endl;

    return 0;
}