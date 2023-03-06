#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long calculateMiles(vector<int>& c) {
    sort(c.rbegin(), c.rend()); // sort in descending order
    long long miles = 0;
    for (int i = 0; i < c.size(); i++) {
        miles += (1LL << i) * c[i]; // 1LL to avoid integer overflow
    }
    return miles;
}

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    long long miles = calculateMiles(c);
    cout << miles << endl;
    return 0;
}
