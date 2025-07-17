#include<bits/stdc++.h>
using namespace std;

int ary[(int)1e6],seg[(int)4e6];

void build(int node,int L,int R){
    if(L==R)
        seg[node]=ary[L];
    else
    {
        int mid = (L+R)/2;
        build(2*node,L,mid);
        build(2*node+1,mid+1,R);
        seg[node] = min(seg[node*2],seg[node*2+1]);
    }

}

int query(int node,int L,int R,int l,int r){

    if(r<L||R<l) 
        return 0;
    if(l<=L&&R<=r)
        return seg[node];
    int mid = (L+R)/2;
    return min(
        query(2*node,L,mid,l,r),
        query(2*node+1,mid+1,R,l,r)
    );
}

int modify(int node,int l,int r,int pos,int val){



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
