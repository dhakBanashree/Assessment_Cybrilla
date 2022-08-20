#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    int count = 0, ans = 0;

    for (auto i = m.rbegin(); i != m.rend(); ++i)
    {
        if (count >= k)
            break;
        ans += ((i->first) * (i->second));
        count += 1;
    }
    cout << ans << endl;
    return 0;
}