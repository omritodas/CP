#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
void on(int n, int k, int z)
{
    if (n == k)
    {
        cout << z << endl;
    }
    else if (n == z)
    {
        cout << k << endl;
    }
    else
    {
        cout << n << endl;
    }
}
void solve()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, k, z;
        cin >> n >> k >> z;
        on(n, k, z);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}