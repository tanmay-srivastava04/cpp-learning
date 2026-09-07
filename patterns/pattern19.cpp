#include <iostream>
using namespace std;

void pattern19(int n) {
    int inIs = 0;
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
    
        for (int j = 0; j < inIs; j++) {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        inIs += 2;
        cout << endl;
    }
    
    inIs = 2 * n - 2;
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        
        for (int j = 0; j < inIs; j++) {
            cout << " ";
        }
        
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        inIs -= 2;
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern19(n);
}
