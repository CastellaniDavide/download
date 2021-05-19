#include <bits/stdc++.h>
#define DEBUG
using namespace std;

int T, N, F, C, f, c;

int main() {
    freopen("download_input_1.txt", "r", stdin);
    freopen("download_output_1.txt", "w", stdout);

    cin >> T;
    for (size_t t = 0; t < T; ++t) {
        cin >> N >> F >> C;

        f = N / F;
        N %= F;
        c = N / C;

        cout << "Case #" << t + 1 << ": " << f << " " << c << endl;
    }
}
