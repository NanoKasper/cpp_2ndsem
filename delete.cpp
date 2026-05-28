// 1. Удаление дублей

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_set<int> used;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int x : a) {
        if (used.find(x) == used.end()) {
            cout << x << " ";
            used.insert(x);
        }
    }

    return 0;
}