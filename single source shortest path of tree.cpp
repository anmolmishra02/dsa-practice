#include<bits/stdc++.h>
using namespace std;


int dist[100005];
int visited[100005];
void dfs(vector<int> a[],int src,int d)
{
    visited[src]=1;
    dist[src]=d;
    for(auto child:a[src])
    {
        if(visited[child]==0)
        {
        dfs(a,child,dist[src]+1);
        }
    }
}

int main()
{
    int v;
    cin>>v;
    int e;
    cin>>e;
    vector<int> a[v];
    for(int i=0;i<e;i++)
    {
        int first,second;
        cin>>first>>second;
        a[first].push_back(second);
        a[second].push_back(first);
    }
    dfs(a,3,0);
    for(int i=0;i<v;i++)
    {
        cout<<"distance of "<<i<<"from "<<3<<" is"<<dist[i];
        cout<<endl;
    }
    
    
}
