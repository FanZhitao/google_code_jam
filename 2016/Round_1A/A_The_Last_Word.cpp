#include <iostream>
using namespace std;
int main() {
    int T;
    long long N;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        string S;
        cin >> S;
        string res(1, S[0]);
        for (int j = 1; j < S.length(); j++) {
            if (res[0] <= S[j]) res = S[j] + res;
            else res += S[j];
        }
        cout << "Case #" << i << ": " << res << endl;
    }
    return 0;
}