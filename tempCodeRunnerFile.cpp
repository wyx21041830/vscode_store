#include <bits/stdc++.h>
//# pragma GCC optimize(3)
#define int long long
#define endl "\n"
using namespace std;

const int N = 2e5 + 5;
int T, n, a[N];
void solve(){
    int x;
    cin>>x;
    for(int i=1;i<=3;i++){
        cin>>a[i];
    }
    int flag=0;
    if(a[x]!=0&&a[a[x]]!=0)flag=1;
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;





}
signed main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  cin >> T;
  while (T--) {
      solve();
  }
  return 0;
}
