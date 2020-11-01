// LCA - Binary Lifting

void dfs(ll node , ll par)
{
    tin[node] = ++timer;
    up[node][0] = par;
    for (ll i = 1;i<=l;i++)
        up[v][i] = up[up[v][i-1]][i-1];
    for(auto it:G[node])
    {
        if(it!=par)
            dfs(it , node);
    }
    tout[v] = ++timer;
}

bool is_ancestor(ll u, ll v)
{
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

ll lca(ll u, ll v)
{
    if (is_ancestor(u, v))
        return u;
    if (is_ancestor(v, u))
        return v;
    for (ll i = l; i >= 0; --i)
    {
        if (!is_ancestor(up[u][i], v))
            u = up[u][i];
    }
    return up[u][0];
}