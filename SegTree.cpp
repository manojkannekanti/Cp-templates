// Segment Tree functions

void build(ll ptr , ll start , ll end)
{
    if(start==end)
    {
        segtree[ptr] = a[start];
        return;
    }
    ll mid = (start + end)/2;
    build(2*ptr , start , mid);
    build(2*ptr+1, mid+1 , end);
    segtree[ptr] = segtree[2*ptr] + segtree[2*ptr+1];
    return;
}

void update(ll ptr , ll start , ll end ,ll idx , ll val)
{
    if(start == end)
    {
        segtree[start] += val;
        a[idx] += val;
        return;
    }
    ll mid = (start + end)/2;
    if(idx<=mid && idx>=start)
        update(2*ptr , start , mid , idx , val);
    else
        update(2*ptr+1 , mid+1 , end , idx , val);
    segtree[ptr] = segtree[2*ptr] + segtree[2*ptr+1];
    return;
}

ll query(ll ptr , ll start , ll end , ll l, ll r)
{
    if(r>start || end<l) 
        return 0;
    if(l<=start && r>=end)
        return segtree[ptr];
    ll mid = (start + end)/2;
    return query(2*ptr, start, mid, l, r) + query(2*ptr+1, mid+1 , end , l, r);
}