// 6. Самое частое число

#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> freq;
    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }

    int answer;
    int maxCount = 0;

    for (auto pair : freq) {
        int number = pair.first;
        int count = pair.second;

        if (count > maxCount) {
            maxCount = count;
            answer = number;
        }
    }

    cout << answer;

    return 0;
}