#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  int canbuy = 0;
  int n;
  cin >> n;
  int shops[n];
  for (int i = 0; i < n; i++) {
    cin >> shops[i];
  }
  sort(shops, shops + n);
  int days;
  cin >> days;
  int coins[days];
  for (int i = 0; i < days; i++) {
    cin >> coins[i];
    for (int j = 0; j < n; j++) {
      if (coins[i] >= shops[j]) {
        canbuy += 1;
      } else {
        break;
      }
    }
    cout << canbuy << "\n";
    canbuy = 0;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  /* int tc = 1; */
  /* for (int t = 1; t <= tc; t++) { */
  /*   cout << "Case #" << t << ": "; */
  /* solve(); */
  /* } */
}
