// ??n??????????????1??m????????????????????
/*????m + 1?????????n = k * (m + 1) + r,??????r????????????|| ??n = k * (m + 1),???????*/


#include <bits/stdc++.h>
using namespace std;

void BaShe() {
    int n, m;
    cin >> n >> m;
    if(n % (m + 1))
        cout << "first" << endl;
    else 
        cout << "second" << endl;
}