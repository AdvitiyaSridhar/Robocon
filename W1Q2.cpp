#include <iostream>
using namespace std;

int main() {
    long long n;
    int count[10] = {0};

    cout << "Enter a number: ";
    cin >> n;

    if (n == 0)
        count[0] = 1;
    else {
        while (n > 0) {
            int digit = n % 10;
            count[digit]++;
            n = n / 10;
        }
    }

    cout << "Digit counts:\n";

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0)
            cout << i << " : " << count[i] << "\n";
    }

    return 0;
}
