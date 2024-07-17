#include <bits/stdc++.h>
#define j "cc"
#define ll long long
using namespace std;

int sum(int n)
{
    int x = n;
    int a = 0;
    while(n!=0)
    {
        a+=n%10;
        n/=10;
    }
    return a+x;
}

int main ()
{
    ios::sync_with_stdio (false);
    cout.tie (0);
    cin.tie (0);
    freopen (j".inp", "r", stdin);
    freopen (j".out", "w", stdout);
    ll a, b;
    cin >> a >> b;
    b+=a;
    ll count = 0;
    for(int i = a; i<= b; i++)
    {
        for(int j = i; i<= b; j++)
        {
            if(sum(i)==j){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
