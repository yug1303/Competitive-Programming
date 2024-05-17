
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
const int M = 300005;

int n1, m1, k1;
int a[M];
int b[M];
int f[35][35][35];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("debug.txt","w",stderr);
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
 int t;
cin>>t;
  memset(f, -1, sizeof f);
    f[0][0][0] = 0;
    for(int i=0; i<=30; i++){
        for(int j=0; j<=30; j++){
            for(int k=0; k<=30; k++){
                if(i>=2  ){
                    if(f[i-2][j][k] != -1){
f[i][j][k] = max(f[i][j][k], f[i-2][j][k]);
                    }
                } 
                if(j>=2  ){
                    if(f[i][j-2][k] != -1){
f[i][j][k] = max(f[i][j][k], f[i][j-2][k]);
                    }
                    
                }

                if(k>=2  ){
                    if(f[i][j][k-2] != -1){
f[i][j][k] = max(f[i][j][k], f[i][j][k-2]);
                    }
                
                }
                
                if(i && j && f[i-1][j-1][k] != -1){
f[i][j][k] = max(f[i][j][k], f[i-1][j-1][k] + 1);
                } 
                if(i && k  ){
                    if(f[i-1][j][k-1] != -1){
f[i][j][k] = max(f[i][j][k], f[i-1][j][k-1] + 1);
                    }
                } 
                if(k && j && f[i][j-1][k-1] != -1) f[i][j][k] = max(f[i][j][k], f[i][j-1][k-1] + 1);
            }
        }
    }
loop_t(t){
cin >> n1 >> m1 >> k1;
    cout << f[n1][m1][k1] << "\n";
 
}
 
    return 0;
}