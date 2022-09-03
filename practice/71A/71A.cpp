#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    string b;
    cin >> b;
    if (b.size() <= 10) {
      cout << b << "\n";
    } else {
      cout << b[0] << b.size() - 2 << b.back() << "\n";
    }
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
