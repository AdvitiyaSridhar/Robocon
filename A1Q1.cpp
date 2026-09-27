#include <iostream>
using namespace std;
int main() {
    int arr[10], max, min, sum = 0;
    int below_20 = 0, above_100 = 0;
    cout << "Enter 10 readings: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    max = min = arr[0];
    for (int i = 0; i < 10; i++) {
        sum += arr[i];

        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];

        if (arr[i] < 20)
            below_20++;

        if (arr[i] > 100)
            above_100++;
    }
    cout << "\nMaximum: " << max << " cm";
    cout << "\nMinimum: " << min << " cm";
    cout << "\nAverage: " << sum / 10 << " cm";
    cout << "\nBelow 20 cm: " << below_20;
    cout << "\nAbove 100 cm: " << above_100;
    return 0;
}
