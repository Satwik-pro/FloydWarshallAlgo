#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter no. of nodes :\n";
    cin>>n;
    int adj[n][n];
    cout<<"Enter the adjecency matrix :\n";
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>adj[i][j];
    for(k=0;k<n;k++)
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cout<<adj[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}

