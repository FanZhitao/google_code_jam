#include <iostream>  // includes cin to read from stdin and cout to write to stdout
using namespace std;  // since cin and cout are both in namespace std, this saves some text
int main() {
    int T;
    long long N;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        cin >> N;
        if (N == 0) cout << "Case #" << i << ": " << "INSOMNIA" << endl;
        else {
            int count = 0, j = 1;
            bool digits[10] = {false};
            while (count < 10) {
                long long temp = N * j;
                if (temp % 10 == 0) {
                    if (!digits[0]) {
                        digits[0] = true;
                        if (++count == 10) {
                            cout << "Case #" << i << ": " << N * j << endl;
                            break;
                        }
                    }
                }
                while (temp) {
                    if (!digits[temp % 10]) {
                        digits[temp % 10] = true;
                        if (++count == 10) {
                            cout << "Case #" << i << ": " << N * j << endl;
                            break;
                        }
                    }
                    temp /= 10;
                }
                j++;
            }
        }
    }
    return 0;
}