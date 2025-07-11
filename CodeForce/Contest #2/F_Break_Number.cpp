#include <iostream>
using namespace std;

int countDivisionsByTwo(long long x) {
    int count = 0;
    while (x % 2 == 0) {
        x /= 2;
        count++;
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    long long maxCount = 0;

    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;
        maxCount = max(maxCount, (long long)countDivisionsByTwo(num));
    }

    cout << maxCount << endl;
    return 0;
}