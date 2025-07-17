#include<bits/stdc++.h>
using namespace std;

int ary[(int)1e6],seg[(int)4e6];

void build(int node,int L,int R){
    if(L==R)
        seg[node]=ary[L];
    else
        {
            int mid = (L+R)/2;
            build()
        }

}


int main(){

    int n,q;
    cin>>n>>q;
    for(int i = 0;i<n;i++)
        cin>>ary[i];
    for(int rp=0;rp<q;rp++)
        {

        }


return 0;    
}
