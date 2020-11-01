// Union Find

void make_set(ll v)
{
    parent[v] = v;
    size[v] = 1;
}

ll find_set(ll v)
{
    if (v==parent[v])
        return v;
    return (parent[v] = find_set(parent[v]));
}

void union_sets(ll a, ll b)
{
    a = find_set(a);
    b = find_set(b);
    if(a!=b)
    {
        if(size[a] > size[b])
            swap(a,b);
        size[b] += size[a];
        parent[a] = b;
    }
}