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
// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     a %= b;
//     return gcd(b, a);
// }
// int main()
// {
//     ll n;
//     cin>>n;
//         ll count=0;
//         vector<int> v;
//         vector<int> v1;
//         vector<int> v2;
//         vector<int> v3;
//         for(int i=0;i<n;i++)
//         {
//             ll ele,ele1;
//             cin>>ele>>ele1;
//             v.pb(ele);
//             v1.pb(ele1);
//         }
//         map<int,int> m;
//         map<int,int> m1;
//         ll count1=0,sum=0;
//         fo(i,0,v.size())
//             ++m[v[i]];
//         fo(i,0,v1.size())
//             ++m1[v1[i]];
//         fo(i,0,.size())
//         {
//             v2.pb(m[v[i]]);
//             v3.pb(m1[v1[i]]);
//         }
//         for(int i=0;i<m.size();i++)
//         sum+=max(v2[i],v3[i]);
//         cout<<sum<<endl;
// }
// int main()
// {
// int a,b,c;
// cin>>a>>b>>c;
// // cout<<max(a+b+c,(max(a*b*c,max((a+b)*c,max((b+c)*a,a+(c*b))))));
// int z=max((a+b)*c,(b+c)*a);
// int d=max(a+b+c,max(a*b*c,z));
// int e=max((a*b)+c,max(d,(b*c)+a));
// cout<<e;
// string s;
// getline(cin,s);
// set<char> s1;
// for (int i = 0; i < s.length(); i++)
// {
//     if (s[i] != '{' && s[i] != '}' && s[i] != ',' && s[i] != ' ')
//         s1.insert(s[i]);
// }
// cout<<s1.size();
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     vLL v;
//     vLL v1;
//     vLL v2;
//     vLL v3;
//     for (int i = 0; i < n; i++)
//         v.pb(i + 1);
//     ll n1;
//     cin >> n1;
//     for (int i = 0; i < n1; i++)
//     {
//         ll ele;
//         cin >> ele;
//         v1.pb(ele);
//         v3.pb(ele);
//     }
//     ll n2;
//     cin >> n2;
//     for (int i = 0; i < n2; i++)
//     {
//         ll ele;
//         cin >> ele;
//         v2.pb(ele);
//         v3.pb(ele);
//     }
//     ll flag = 1;
//     for (int i = 0; i < v.size(); i++)
//     {
//         flag = 1;
//         for (int j = 0; j < v3.size(); j++)
//         {
//             if (v[i] == v3[j])
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag == 1)
//         {
//             cout << "Oh, my keyboard!";
//             break;
//         }
//         else if (flag == 0 && i == v.size() - 1)
//         {
//             cout << "I become the guy.";
//             break;
//         }
//     }
// }
// int main()
// {
//     ll n;
//     cin>>n;
//     while(n--){
//         ll a,b,c=1;
//         cin>>a>>b;
//         string s=to_string(a);
//         while (b--)
//         {
//             int d=(int)s[c];
//             d+=1;
//             (int)s[c]=d;
//             c++;
//             if(c==s.length()-1)
//             c=1;
//         }
//         ll sum=0;
//         for(int i=0;i<s.length();i++)
//         sum+=(int)s[i];
//         cout<<sum<<endl;
//     }
// }
int main()
{
    int n;
    cin >> n;
    int count = 0;
    if (n >= 0)
        cout << n;
    else
    {
        int digit1=n%10;
        int digit = n / 10;
        while (count != 2)
        {
            n /= 10;
            count++;
        }
        cout << max((n*10)+digit1, digit);
    }
}
