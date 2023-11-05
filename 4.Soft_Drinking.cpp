#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_slices = c * d;
    
    int max_toast_drink_per_friend = floor((floor((k*l) / nl)) / n);
    int max_toast_salt_per_friend = floor((floor(p/np)) / n);
    int max_toast_slices_per_friend = floor((c*d) / n);

    cout << min(min(max_toast_drink_per_friend,max_toast_salt_per_friend),max_toast_slices_per_friend) << endl;

    return 0;
}