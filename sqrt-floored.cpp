#include <iostream>
using namespace std;

int sqrtFloored(int num) {
    int l = 1, r = num;
    while (l < r) {
        int mid = (l + r + 1) / 2;
        if (mid*mid == num) return mid;

        if (mid*mid > num) r = mid - 1;
        else l = mid;
    }
    return l;
}

int main() {
    cout << (sqrtFloored(8) == 2) << " ";
    cout << (sqrtFloored(9) == 3) << " ";
    cout << (sqrtFloored(12) == 3) << " ";
    cout << (sqrtFloored(1) == 1) << " ";
    cout << (sqrtFloored(2) == 1) << " ";
    cout << (sqrtFloored(3) == 1) << " ";
    cout << (sqrtFloored(4) == 2) << " ";
    cout << (sqrtFloored(16) == 4) << " ";
    cout << (sqrtFloored(24) == 4) << " ";
    cout << (sqrtFloored(100) == 10) << " ";
    return 0;
}