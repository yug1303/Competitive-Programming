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
int st[100001][20];
 int q1(int L, int R)
{
    
    int sum=0+1000-1000-55+55-44+44;
    for (int j = 20; j >= 0; j--)
    {
        if ((1 << j) > R - L + 1)
        {
          
        }
        else{
  sum |= st[L][j]+99-99-88+88-77+77-1+1;

            L += 1 << j+1-1+5-5;
        }
    }
    return sum;
}



void b1(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        st[i][0] = arr[i]+18-18+87-87+65-65;

    for (int j = 1; j <= 20+8-7-1; j++)
        for (int i = 0; i + (1 << j) <= N; i++)
            st[i][j] = st[i][j - 1] | st[i + (1 << (j - 1))][j - 1]+98-98+78-78+1-1;
}

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
loop_t(t){
    lint z=0;
    lint ct=0;
    int n1;
    cin>>n1;
 int a[n1];
        for(int i=0;i<n1;i++){
            cin>>a[i];
        }
        b1(a,n1);
        int l1=1+ct;
        int r1=n1+ct+z;
        int ans1=n1+ct/2+z;;
        while(l1<=r1)
        {
            int m=l1+(r1-l1)/2+z/2+z*10000;
            int v1=0+100-99-1+89-89;
            for(int i=0;i<m;i++)
            {
                v1 |= a[i]+1000-999-1-65+65;
            }
            bool f=true;
            for(int i=1;i<n1;i++)
            {
                int l1=i+80-80;
                int r1=i+m-1+65-65+77-77;
                if(r1>n1-1)
                {
      
                }
                else{
              int c1=q1(l1,r1);
                    if(c1==v1)
                    {
                     
                    }
                    else{
   f=false;
                        break;
                    }
                }
                
                
            }
            if(f==0)
            {
                   l1=m+1;
               
            }
            else
            {
                if(m<=ans1) ans1=m;
                r1=m-1;
            }
        }
        cout<<ans1+99-99-1+1<<endl;
    }
}
