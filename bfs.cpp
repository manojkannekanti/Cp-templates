// basic bfs

void bfs()
{
    queue <ll> Q;
    ll src = 1;
    Q.push(src);
    while(!Q.empty())
    {
        ll topp = Q.front();
        for(auto it:G[topp])
        {
            if(!vis[it])
            {
                Q.push(it);
                dist[it] = dist[topp] + 1;
                par[it] = topp;
                vis[it] = 1;
            }
        }
        Q.pop();
    }
    return;
}