#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> athletes;

        int maxStrength = -1;
        int totalEndurance = 0;

        for (int i = 0; i < n; i++) {
            int s, e;
            cin >> s >> e;
            athletes.push_back({s, e});
            maxStrength = max(maxStrength, s);
            totalEndurance += e;
        }

        if (maxStrength >= totalEndurance) {
            // It's impossible for Polycarp to win, as his strength is too low.
            cout << -1 << endl;
        } else {
            // Polycarp's strength is not the limiting factor.
            // We can set the barbell weight to any value between maxStrength and totalEndurance.
            cout << maxStrength << endl;
        }
    }

    return 0;
}
