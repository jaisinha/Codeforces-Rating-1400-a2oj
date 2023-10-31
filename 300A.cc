#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define cint const int
#define fo(number1, number2, number3) for (int number1 = number2; number1 < number3; ++number1)
#define rfo(number1, number2, number3) for (int number1 = number2 - 1; number1 >= number3; --number1)
#define pi pair<int, int>
#define vLL vector<ll>
#define vi vector<int>
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define lbd lower_bound
#define ubd upper_bound
#define mp make_pair
#define cps CLOCKS_PER_SEC
#define decimal(k) fixed << setprecision(k)
#define PI 3.14159265359
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ff first
#define ss second
#define all(V) (V).begin(), (V).end()
#define alla(a, n) a, a + n
#define sz(v) (ll) v.size()
#define SORT(v) sort(all(v))
#define REV reverse
#define SUM(v) accumulate(v.begin(), v.end(), 0)
#define MAX max_element
#define MIN min_element
#define UNIQUE(v) \
    SORT(v);      \
    v.erase(unique(v.begin(), v.end()), v.end())
#define UNIQUEA(a, n) unique(a, a + n) - a
#define MAXA(a, n) max_element(a, a + n)
#define MINA(a, n) min_element(a, a + n)
#define SORTA(a, n) sort(alla(a, n))
#define REVA(a, n) reverse(alla(a, n))
#define mem1(a) memset(a, -1, sizeof(a));
#define mem0(a) memset(a, 0, sizeof(a));
#define mymax 1000000000000000100
#define mymin -1000000001
#define bitcount __builtin_popcount
#define gcd __gcd
#define MOD (ll)1000000007
#define TEST(t) \
    int tc;     \
    cin >> tc;  \
    fo(t, 1, tc)
#define VECT(v, n) \
    ll n;          \
    cin >> n;      \
    vLL v(n);      \
    fo(i, 0, n - 1) cin >> v[i];
#define NUM(n) \
    ll n;      \
    cin >> n;
#define STRING(s) \
    string s;     \
    cin >> s;
#define TS to_string
#define len(s) (s).length()
#define line cout << "\n";
#define el "\n"
#define vec vector<int>
#define clkstart auto start = high_resolution_clock::now();
#define clkend                                \
    auto stop = high_resolution_clock::now(); \
    auto duration = duration_cast<microseconds>(stop - start);
#define TIME \
    line;    \
    line;    \
    cout << "Time taken by function: " << duration.count() / 1e6 << " seconds" << endl;
#define open {
#define close }
#define goog(tno) cout << "Case #" << tno << ": "
#define deb(x) cout << #x << " = " << x << el;
#define deb2(x, y) cout << #x << " = " << x << " : " << #y << " = " << y << el;
// #ifndef SEGMENTTREE_H
#define SEGMENTTREE_H
#define left(i) (2 * i + 1)
#define right(i) (2 * i + 2)
#define parent(i) ((i - 1) / 2)
using namespace std;
// bool is_perfect_square(ll n) {
//     if (n < 0)
//         return false;
//     ll root(round(sqrt(n)));
//     return n == root * root;
// }
// bool isPrime(ll N) {                 // a good enough deterministic prime tester
//   if (N <= _sieve_size) return bs[N];                   // O(1) for small primes
//   for (int i = 0; i < (int)primes.size(); i++)
//     if (N % primes[i] == 0) return false;
//   return true;                    // it takes longer time if N is a large prime!
// }
int main()
{
    fastio int n;
    cin >> n;
    vec v(n);
    for (auto &i : v)
        cin >> i;
    int neg = 0, pos = 0, zeros = 0;
    SORT(v);
    vec v1;
    vec v2;
    vec v3;
    fo(i, 0, v.size())
    {
        if (v[i] < 0)
        {
            neg++;
            v3.pb(v[i]);
        }
        else if (v[i] > 0)
        {
            pos++;
            v2.pb(v[i]);
        }
        else
        {
            zeros++;
            v1.pb(v[i]);
        }
    }
    SORT(v);
    fo(i, 0, v.size()) if (v[i] == 0)
        v.erase(v.begin() + i);
    if (v3.size() % 2 != 0)
    {
        cout << "1"
             << " ";
        cout << v[0] << endl;
        cout << v3.size() - 1 + v2.size() << " ";
        fo(i, 0, v2.size())
                cout
            << v2[i] << " ";
        fo(i, 1, v3.size())
                cout
            << v3[i] << " ";
        line
                cout
            << v1.size() << " ";
        fo(i, 0, v1.size())
                cout
            << v1[i] << " ";
    }
    else
    {
        cout << "1"
             << " ";
        cout << v3[0];
        line
                cout
            << v2.size() + v3.size() - 2 << " ";
        fo(i, 0, v2.size())
                cout
            << v2[i] << " ";
        fo(i, 2, v3.size())
                cout
            << v3[i] << " ";
        line
                cout
            << v1.size() + 1 << " ";
        fo(i, 0, v1.size())
                cout
            << v1[i] << " ";
        cout << v3[1];
    }
}
