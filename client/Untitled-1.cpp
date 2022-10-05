#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int N,vector<vector<int>> &pairs)
{
    vector<vector<int>> adj(N+1);
    vector<int> indeg(N+1,0);
    vector<int> visited(N+1,0);
    for(int i=0;i<pairs.size();i++){
    adj[pairs[i][1]].push_back(pairs[i][0]);
    indeg[pairs[i][0]]++;
    }
    priority_queue<int,vector<int>,greater<int>> q;
    vector<int> ans;
    for(int i=1;i<=N;i++)
    {
    if(indeg[i]==0){
    q.push(i);
    }
    }
    while(!q.empty())
    {
        int top=q.top();
        q.pop();
        ans.push_back(top);
        visited[top]=1;
        for(int i=0;i<adj[top].size();i++)
        {
            indeg[adj[top][i]]--;
            if(indeg[adj[top][i]]==0)
            q.push(adj[top][i]);
        }
    }
    if(ans.size()<N)
    return {};
    return ans;
}
int main()
{
    int N;
    int I;
    cin>>N>>I;
    vector<vector<int>> pairs(I,vector<int>(2,0));
    for(int i=0;i<I;i++)
    {
        cin>>pairs[i][0]>>pairs[i][1];
    }
    vector<int> ans=solve(N,pairs);
    if(ans.size()==0)
    cout<<"not possible";
    else
    {
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    }
    return 0;
}