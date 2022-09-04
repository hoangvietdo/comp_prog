#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;

  if (m * a <= b) {
    cout << n * a;
  } else {
    cout << min((n % m) * a, b) + (n / m) * b;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  /* int tc = 1; */
  /* for (int t = 1; t <= tc; t++) { */
  /* cout << "Case #" << t << ": "; */
  solve();
  /* } */
}
