// basic dfs

void dfs(ll node , ll par)
{
    vis[node] = 1;
    for(auto it:G[node])
    {
        if(!vis[it])
            dfs(it , node);
    }
    return;
}