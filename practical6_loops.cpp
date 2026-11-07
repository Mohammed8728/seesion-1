
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number (1-12) for the multiplication table: ";
    cin >> n;

    
    cout << "\nMultiplication table of " << n << " (for loop):\n";
    for (int i = 1; i <= 12; i++)
        cout << n << " x " << i << " = " << n * i << endl;

    
    cout << "\nMultiplication table of " << n << " (while loop):\n";
    int i = 1;
    while (i <= 12) {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }


    int sum = 0;
    for (int k = 1; k <= n; k++)
        sum += k;
    cout << "\nSum of 1 to " << n << " = " << sum << endl;   

    
    cout << "\n1-30 without multiples of 3:\n";
    for (int k = 1; k <= 30; k++) {
        if (k % 3 == 0) continue;
        cout << k << " ";
    }
    cout << endl;

    
    for (int k = 1; k <= 100; k++) {
        if (k % 5 == 0 && k % 7 == 0) {
            cout << "\nFirst common multiple of 5 and 7: " << k << endl;  
            break;
        }
    }

    return 0;
}
