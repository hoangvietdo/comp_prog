#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  int dp[5000];
  dp[0] = 0;

  for (int i = 1; i <= n; i++) {
    dp[i] = -1;

    if (i >= a) {
      if (dp[i - a] >= 0) {
        if (dp[i - a] >= dp[i]) {
          dp[i] = dp[i - a] + 1;
        }
      }
    }
    if (i >= b) {
      if (dp[i - b] >= 0) {
        if (dp[i - b] >= dp[i]) {
          dp[i] = dp[i - b] + 1;
        }
      }
    }
    if (i >= c) {
      if (dp[i - c] >= 0) {
        if (dp[i - c] >= dp[i]) {
          dp[i] = dp[i - c] + 1;
        }
      }
    }
  }
  cout << dp[n];
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int tc = 1;
  for (int t = 1; t <= tc; t++) {
    /* cout << "Case #" << t << ": "; */
    solve();
  }
}
