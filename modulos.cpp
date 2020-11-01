// modulo calculations

ll modmul(ll a, ll b,ll mod) {
    return ((a%mod) * (b%mod)) % mod;
}

ll modadd(ll a , ll b,ll mod){
    return((a%mod)+(b%mod)+2*mod)%mod;
}

ll modsub(ll a , ll b,ll mod){
    return((a%mod) - (b%mod) + 2*mod)%mod;
}