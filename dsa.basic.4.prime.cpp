#include <bits/stdc++.h>
using namespace std;
#define loop(n) for (int i = 0; i < n; i++)
#define loop_t(t) while(t--)
#define pb push_back
#define pob pop_back
#define f first
#define sec second
using lint = long long int;
// gcd algo
// gcd of a and b
int gcd(int a,int  b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
 
 
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
 
// here b >a
 
//errors to note 
/*1-operation preference
2-range so always use lint
3-special cases ::
4-zeros vale*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("debug.txt","w",stderr);
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
 int t;
t=1;
loop_t(t){
lint n;
cin>>n;
//divisors ke liye root n approach
for(int i=1;i*i<=n;i++){
    if(n%i==0){
   cout<<i<<" ";
    }
    if(n/i!=i){
        cout<<n/i<<" ";
    }
}
 
}
 
    return 0;
}