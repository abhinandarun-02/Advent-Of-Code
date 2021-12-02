#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define endl "\n"
#define el cout << "\n"
#define deb(x) cout << #x << " " << x << endl;
using namespace std;

/*---------------------------------------------------------------------------------------------------------------------------*/

void solve()
{

    string str;
    cin >> str;

    int floor = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
        {
            floor++;
        }
        else
        {
            floor--;
        }
    }

    cout << floor;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    tc = 1;
    //cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        //cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}