#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <ctime>
#include <stdio.h>      /* printf */
#include <stdlib.h>
#include <queue>

#ifdef SHOW_DEBUG
#define dbg(a, ...) printf("DEBUG: " a "\n", ##__VA_ARGS__)
#else
#define dbg(...) ((void*)(0))
#endif

using namespace std;
typedef long long ll;
template<typename A, typename B>
using hmap = unordered_map<A, B>;
typedef tuple<int, int> ii;
typedef tuple<ll, ll> lii;
#define PI 3.14159265358979323846
#define inf 0x3f3f3f3f
#define infl 0x3f3f3f3f3f3f3f3fL

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    for (int t = 0; t < tt; t++) {
        int n;
        cin >> n;
        vector<ll> parities;
        for (int i = 0; i < n; i++) {
            ll a;
            cin >> a;
            parities.push_back(a);
        }
        
        ll parity = parities[0] % 2;
        ll min_ops = 0;
        for (int i = 1; i < n; i++) {
            if ( (parities[i] % 2) == parity ){
                min_ops++;
            } else {
                parity = parities[i] % 2;
            }
        }
        cout << min_ops << endl;
    }

    return 0;
}