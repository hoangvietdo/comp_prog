#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  vi v = {a, b, c};
  int index = 0;
  sort(v.begin(), v.end());
  for (int i = 0; i < 3; i++) {
    if ((n % v[i]) == 0) {
      index = i;
      break;
    }
  }

  if (index < 2) {
    cout << n / v[index];
  } else if (index == 2) {
    cout << 2 * (n / (v[0] + v[1]));
  }
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
