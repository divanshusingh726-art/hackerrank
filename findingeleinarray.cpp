#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> arr(n);

    // Read all arrays
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;

        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            arr[i].push_back(x);
        }
    }

    // Answer queries
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;

        cout << arr[x][y] << endl;
    }

    return 0;
}