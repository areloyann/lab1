#include <iostream>
#include <cmath> 
using namespace std;
int gcd(int a, int b) {
    a = abs(a); 
    b = abs(b); 
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1, num2;
    cout << "Nermuceq tvery: ";
    cin >> num1 >> num2;
    int result = gcd(num1, num2);
    cout << "Amenamec yndhanur bajanarary: " << result << endl;
    return 0;
}

