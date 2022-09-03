#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  string a;
  cin >> a;

  int any = 0;
  int count = 0;
  for (int i = 0; i < int(a.size()) - 1; i++) {
    if (a[i] == a[i + 1]) {
      count += 1;
      if (count + 1 >= 7) {
        any = 1;
      }
    } else {
      count = 0;
    }
  }
  if (any == 1) {
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
