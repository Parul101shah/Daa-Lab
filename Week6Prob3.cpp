#include <bits/stdc++.h>
using namespace std;

bool CheckCycle(int node, vector<int> adj[], int vis[], int dfsvis[])
{
    vis[node] = 1;
    dfsvis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (CheckCycle(it, adj, vis, dfsvis))
                return true;
        }
        else if (dfsvis[it])
            return true;
    }
    dfsvis[node] = 0;
    return false;
}
bool isCycle(vector<int> adj[], int N)
{

    int vis[N + 1], dfsVis[N + 1];
    memset(vis, 0, sizeof(vis));
    memset(dfsVis, 0, sizeof(dfsVis));
    for (int i = 1; i <= N; i++)
    {
        if (!vis[i])
        {
            if (CheckCycle(i, adj, vis, dfsVis))
                return true;
        }
    }
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    if (isCycle(adj, n))
        cout << "Cycle Exists" << endl;
    else
        cout << "No Cycle Exists" << endl;
    return 0;
}
