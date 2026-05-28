//2. Подсчёт частот слов

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> freq;
    string word;

    for (int i = 0; i < n; i++) {
        cin >> word;
        freq[word]++;
    }

    for (auto pair : freq) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}