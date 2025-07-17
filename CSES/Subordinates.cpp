#include<bits/stdc++.h>
using namespace std;


int n,sub[(int)1e6];
vector<int> adj[(int)1e6];
int DFS(int a){
    int cnt=0;
    for(int i=0;i<adj[a].size();i++)
        cnt += 1+DFS(adj[a][i]);
    sub[a] = cnt;
    return cnt;

}

int main(){

    cin>>n;
    for(int i=2;i<=n;i++)
        {
            int boss;
            cin>>boss;
            adj[boss].push_back(i);
        }
    DFS(1);
    for(int i=1;i<=n;i++)
        cout<<sub[i]<<" ";
    cout<<"\n";

return 0;
}
