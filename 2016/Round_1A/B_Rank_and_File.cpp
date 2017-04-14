#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int T;
    long long N;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        cin >> N;
        unordered_map<int, int> count;
        for (int j = 0; j < 2 * N - 1; j++) {
            for (int k = 0; k < N; k++) {
                int num;
                cin >> num;
                count[num]++;
            }
        }
        vector<int> res;
        for (auto it : count) {
            if (it.second % 2 == 1) res.push_back(it.first);
        }
        sort(res.begin(), res.end());
        cout << "Case #" << i << ": ";
        for (auto n : res) cout << n << " ";
        cout << endl;
    }
    return 0;
}