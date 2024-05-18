#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 lll;
using ull = unsigned long long;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
template<class T> using pqmin = priority_queue<T, vector<T>, greater<T>>;
template<class T> using pqmax = priority_queue<T>;
const ll inf=LLONG_MAX/3;
const ll dx[] = {0, 1, 0, -1, 1, -1, 1, -1};
const ll dy[] = {1, 0, -1, 0, 1, 1, -1, -1};
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define si(x) ll(x.size())
#define rep(i,n) for(ll i=0;i<n;i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define rng(i,l,r) for(ll i=l;i<r;i++)
#define gnr(i,l,r) for(ll i=r-1;i>=l;i--)
#define fore(i, a) for(auto &&i : a)
#define fore2(a, b, v) for(auto &&[a, b] : v)
#define fore3(a, b, c, v) for(auto &&[a, b, c] : v)
template<class T> bool chmin(T& a, const T& b){ if(a <= b) return 0; a = b; return 1; }
template<class T> bool chmax(T& a, const T& b){ if(a >= b) return 0; a = b; return 1; }
template<class T, class U> bool chmin(T& a, const U& b){ return chmin(a, (T)b); }
template<class T, class U> bool chmax(T& a, const U& b){ return chmax(a, (T)b); }
#define LL(...) ll __VA_ARGS__;in(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;in(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__;in(__VA_ARGS__)
#define vec(type,name,...) vector<type>name(__VA_ARGS__)
#define VEC(type,name,size) vector<type>name(size);in(name)
#define VLL(name,size) vector<ll>name(size);in(name)
#define vv(type,name,h,...) vector<vector<type>> name(h,vector<type>(__VA_ARGS__))
#define VV(type,name,h,w) vector<vector<type>> name(h,vector<type>(w));in(name)
#define vvv(type,name,h,w,...) vector<vector<vector<type>>> name(h,vector<vector<type>>(w,vector<type>(__VA_ARGS__)))
#define SUM(...) accumulate(all(__VA_ARGS__),0LL)
template<class T> auto min(const T& a){ return *min_element(all(a)); }
template<class T> auto max(const T& a){ return *max_element(all(a)); }
template<class T, class F = less<>> void sor(T& a, F b = F{}){ sort(all(a), b); }
template<class T> void uniq(T& a){ sor(a); a.erase(unique(all(a)), end(a)); }
void outb(bool x){cout<<(x?"Yes":"No")<<"\n";}
ll max(int x, ll y) { return max((ll)x, y); }
ll max(ll x, int y) { return max(x, (ll)y); }
int min(int x, ll y) { return min((ll)x, y); }
int min(ll x, int y) { return min(x, (ll)y); }
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define lbg(c, x) distance((c).begin(), lower_bound(all(c), (x), greater{}))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define ubg(c, x) distance((c).begin(), upper_bound(all(c), (x), greater{}))
ll gcd(ll a,ll b){return (b?gcd(b,a%b):a);}
vector<pll> factor(ull x){ vector<pll> ans; for(ull i = 2; i * i <= x; i++) if(x % i == 0){ ans.push_back({i, 1}); while((x /= i) % i == 0) ans.back().second++; } if(x != 1) ans.push_back({x, 1}); return ans; }
vector<ll> divisor(ull x){ vector<ll> ans; for(ull i = 1; i * i <= x; i++) if(x % i == 0) ans.push_back(i); per(i,ans.size() - (ans.back() * ans.back() == x)) ans.push_back(x / ans[i]); return ans; }
vll prime_table(ll n){vec(ll,isp,n+1,1);vll res;rng(i,2,n+1)if(isp[i]){res.pb(i);for(ll j=i*i;j<=n;j+=i)isp[j]=0;}return res;}
ll powmod(lll x,ll y,lll mod){lll res=1; while(y){ if(y&1)res=res*x%mod; x=x*x%mod; y>>=1;} return res; }
ll modinv(ll a,ll m){ll b=m,u=1,v=0;while(b){ll t=a/b;a-=t*b;swap(a,b);u-=t*v;swap(u,v);}u%=m;if(u<0)u+=m;return u;}

template <class T, class S> pair<T, S> operator-(const pair<T, S> &x) { return pair<T, S>(-x.first, -x.second); }
template <class T, class S> pair<T, S> operator-(const pair<T, S> &x, const pair<T, S> &y) { return pair<T, S>(x.fi - y.fi, x.se - y.se); }
template <class T, class S> pair<T, S> operator+(const pair<T, S> &x, const pair<T, S> &y) { return pair<T, S>(x.fi + y.fi, x.se + y.se); }
template <class T> pair<T, T> operator&(const pair<T, T> &l, const pair<T, T> &r) { return pair<T, T>(max(l.fi, r.fi), min(l.se, r.se)); }
template <class T, class S> pair<T, S> operator+=(pair<T, S> &l, const pair<T, S> &r) { return l = l + r; }
template <class T, class S> pair<T, S> operator-=(pair<T, S> &l, const pair<T, S> &r) { return l = l - r; }
template <class T> bool intersect(const pair<T, T> &l, const pair<T, T> &r) { return (l.se < r.se ? r.fi < l.se : l.fi < r.se); }

template <class T> vector<T> &operator++(vector<T> &v) {
    fore(e, v) e++;
    return v;
}
template <class T> vector<T> operator++(vector<T> &v, int) {
    auto res = v;
    fore(e, v) e++;
    return res;
}
template <class T> vector<T> &operator--(vector<T> &v) {
    fore(e, v) e--;
    return v;
}
template <class T> vector<T> operator--(vector<T> &v, int) {
    auto res = v;
    fore(e, v) e--;
    return res;
}
template <class T> vector<T> &operator+=(vector<T> &l, const vector<T> &r) {
    fore(e, r) l.eb(e);
    return l;
}

template<class... Ts> void in(Ts&... t);
[[maybe_unused]] void print(){}
template<class T, class... Ts> void print(const T& t, const Ts&... ts);
template<class... Ts> void out(const Ts&... ts){ print(ts...); cout << '\n'; }
namespace IO{
#define VOID(a) decltype(void(a))
struct S{ S(){ cin.tie(nullptr)->sync_with_stdio(0); fixed(cout).precision(12); } }S;
template<int I> struct P : P<I-1>{};
template<> struct P<0>{};
template<class T> void i(T& t){ i(t, P<3>{}); }
void i(vector<bool>::reference t, P<3>){ int a; i(a); t = a; }
template<class T> auto i(T& t, P<2>) -> VOID(cin >> t){ cin >> t; }
template<class T> auto i(T& t, P<1>) -> VOID(begin(t)){ for(auto&& x : t) i(x); }
template<class T, size_t... idx> void ituple(T& t, index_sequence<idx...>){ in(get<idx>(t)...); }
template<class T> auto i(T& t, P<0>) -> VOID(tuple_size<T>{}){ ituple(t, make_index_sequence<tuple_size<T>::value>{}); }
template<class T> void o(const T& t){ o(t, P<4>{}); }
template<size_t N> void o(const char (&t)[N], P<4>){ cout << t; }
template<class T, size_t N> void o(const T (&t)[N], P<3>){ o(t[0]); for(size_t i = 1; i < N; i++){ o(' '); o(t[i]); } }
template<class T> auto o(const T& t, P<2>) -> VOID(cout << t){ cout << t; }
template<class T> auto o(const T& t, P<1>) -> VOID(begin(t)){ bool first = 1; for(auto&& x : t) { if(first) first = 0; else o(' '); o(x); } }
template<class T, size_t... idx> void otuple(const T& t, index_sequence<idx...>){ print(get<idx>(t)...); }
template<class T> auto o(T& t, P<0>) -> VOID(tuple_size<T>{}){ otuple(t, make_index_sequence<tuple_size<T>::value>{}); }
#undef VOID
}
#define unpack(a) (void)initializer_list<int>{(a, 0)...}
template<class... Ts> void in(Ts&... t){ unpack(IO::i(t)); }
template<class T, class... Ts> void print(const T& t, const Ts&... ts){ IO::o(t); unpack(IO::o((cout << ' ', ts))); }
#undef unpack

int main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
  ll n=6;
  ll base = 185;
  ll dist = 150;
  cout<<"[";
  rep(i,n){
    if(i)cout<<",";
    cout<<base+dist*i;
  }
  cout<<"]"<<endl;
}