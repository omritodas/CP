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
int check_bit(int n,int k)
{
    return (n>>k)&1;
}
void on_bit_check(int n)
{
    for(int i=0;i<32;i++)
    {
        if(check_bit(n,i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
void off_bit_check(int n)
{
    for(int i=0;i<32;i++)
    {
        if(!check_bit(n,i))
        {
            cout<<i<<" ";
        }
    }
}
void solve()
{
    int n;
    cin>>n;
    on_bit_check(n);
    off_bit_check(n);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}