// basic dijkstra

void dijkstra(ll node)
{
    ll src = 0;
    set <pair<ll,ll>> pq;
    pq.insert({0,src});
    vis[0] = 1;
    DIST[0] = 0;
    while(!pq.empty())
    {
        auto topp = *pq.begin();
        pq.erase(topp);
        ll node = topp.second,dist = topp.first;
        for(auto child:G[node])
        {
            if(DIST[child.first] > (DIST[node] + child.second))
            {
                pq.erase({DIST[child.first],child.first});
                DIST[child.first] = (DIST[node] + child.second);
                pq.insert({DIST[child.first],child.first});
            }
        }
    }
    return;
}