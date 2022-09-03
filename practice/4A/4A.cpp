#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  int a;
  cin >> a;

  if ((a % 2) == 0 && a != 2) {
    cout << "YES";
  } else {
    cout << "NO";
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
