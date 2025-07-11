#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> v;

    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            long long res = n / i;
            v.push_back(i);
            if (i != res) {
                v.push_back(res);
            }
        }
    }

    sort(v.begin(), v.end());

    for (long long a : v) {
        cout << a << endl;
    }

    return 0;
}