/*
given an array of size N, implement the following functions in O(1) time:
1. Set(index, value)
2. Get(index);
3. SetAll(value);

algorithm: save indices of changed values in a "list" in C and save their spot in B
*/


#include <vector>
#include <iostream>
using namespace std;

class Solution{
    vector<int> A;
    vector<int> B;
    vector<int> C;
    int N;
    int top;
    int allVal;

    bool isValid(int i) const {
        return top == N || (B[i] < top && C[B[i]] == i);
    }
public:
    Solution(const vector<int>& arr) : A(arr), B(arr.size()), C(arr.size()), 
                                N(arr.size()), top(arr.size()) {}
    void setAll(int num) { 
        allVal = num;
        top = 0;
    }
    void set(int i, int num) {
        A[i] = num;
        if (isValid(i)) return;
        C[top] = i;
        B[i] = top;
        top++; 
    }
    int get(int i) const {
        if (isValid(i)) return A[i];
        else return allVal;
    }

    friend ostream& operator<<(ostream& os, const Solution& sol) {
        for (int i = 0; i < sol.N; i++) {
            os << sol.get(i) << " ";
        }
        return os;
    }
};

int main() {
    Solution test({0,1,2,3,4});
    cout << test << endl;
    
    test.set(1, 2);
    cout << test << endl;
    
    test.setAll(3);
    cout << test << endl;

    test.set(1, 2);
    test.set(3, 2);
    cout << test << endl;

    test.setAll(4);
    cout << test << endl;

    test.set(0,0);
    test.set(1,1);
    test.set(2,2);
    test.set(3,3);
    test.set(4,4);
    cout << test << endl;
    
    test.set(0,4);
    cout << test << endl;

    test.set(4,0);
    cout << test << endl;

    test.setAll(1);
    cout << test << endl;

    return 0;
}