// BIT functions

void update(ll idx , ll val , ll n)
{
    while(idx <= n)
    {
        BIT[idx] += val;
        idx += (idx&-idx);
    }
}

ll query(ll idx)
{
    ll sum = 0;
    while(idx)
    {
        sum += BIT[idx];
        idx -= (idx&-idx);
    }
    return sum;
}