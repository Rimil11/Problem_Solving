#include <iostream>
using namespace std;

int main() {
    int n, j;
    cout << "Enter value for me: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        j = 1;
        while (j <= n - i) {
            cout << "_ ";
            j++;
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    
    
    return 0;
}
