//problem link:   https://leetcode.com/problems/binary-tree-inorder-traversal/
// lernig:  tree implementation.
// this is intital template
#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define ll long long
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back

#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))                                  // all is defined above
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++) //traversal
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  //Definition for a binary tree node.
  struct TreeNode
  {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  class Solution
  {
  public:
      void iot(TreeNode *root, vector<int> &ans)
      {

          if (!root)
              return;
          iot(root->left, ans);
          ans.push_back(root->val);
          iot(root->right, ans);
      }

      vector<int> inorderTraversal(TreeNode *root)
      {
          vector<int> v;
          iot(root, v);
          return v;
      }
  };

  return 0;
}

// //problem link:

// #include <bits/stdc++.h>
// using namespace std;
// //#define gc getchar_unlocked
// #define fo(i, n) for (i = 0; i < n; i++)
// //#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
// #define ll long long
// /*
// NO NEED OF THESE WILL GIVE SAME RESULT AS CIN AND COUT BECUASE WE ALREADY INCLUDED ...
// <    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);>

// #define si(x)	scanf("%d",&x)
// #define sl(x)	scanf("%lld",&x)
// #define ss(s)	scanf("%s",s)
// #define pi(x)	printf("%d\n",x)
// #define pl(x)	printf("%lld\n",x)
// #define ps(s)	printf("%s\n",s)
// */
// #define deb(x) cout << #x << "=" << x << endl // for debugging a value. passing x will print x="its value";

// //#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
// #define pb push_back
// //#define mp make_pair
// // #define F first
// // #define S second
// #define all(x) x.begin(), x.end()
// // #define clr(x) memset(x, 0, sizeof(x))
// #define sortall(x) sort(all(x)) // all is defined above
// #define tr(it, a) for (auto it = a.begin(); it != a.end(); it++) //traversal
// #define PI 3.1415926535897932384626
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pl;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef vector<pii> vpii;
// typedef vector<pl> vpl;
// typedef vector<vi> vvi;
// typedef vector<vl> vvl;
// //mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
// // int rng(int lim) {
// // 	uniform_int_distribution<int> uid(0,lim-1);
// // 	return uid(rang);
// // }
// // int mpow(int base, int exp);
// // void ipgraph(int n, int m);
// // void dfs(int u, int par);

// //const int mod = 1'000'000'007;
// //const int N = 3e5, M = N;
// //=======================

// // vi g[N];
// // int a[N];

// void solve()
// {
//   int i, j, m, n;
// }

// int main()
// {
//   //faster cin cout with scanf nd printf , keeping it.
//   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

//   //srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//   int t = 1;
//   cin >> t;
//   while (t--)
//   {
//     solve();
//   }

//   return 0;
// }
// /*

// int mpow(int base, int exp) {
//   base %= mod;
//   int result = 1;
//   while (exp > 0) {
//     if (exp & 1) result = ((ll)result * base) % mod;
//     base = ((ll)base * base) % mod;
//     exp >>= 1;
//   }
//   return result;
// }
// */
// //considering
// /*
// void ipgraph(int n, int m){
// 	int i, u, v;
// 	while(m--){
// 		cin>>u>>v;
//     u--, v--;
// 		g[u].pb(v);
// 		g[v].pb(u);
// 	}
// }
// */
// //considering
// /*void dfs(int u, int par){
// 	for(int v:g[u]){
// 		if (v == par) continue;
// 		dfs(v, u);
// 	}
// }
// *?

// /* stuff you should look for
//     * int overflow, array bounds
//     * special cases (n=1?), set tle
//     * do smth instead of nothing and stay organized
// */