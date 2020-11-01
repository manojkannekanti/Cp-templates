// Sieve of Eratosthenes

vector <ll> sieve(N+5,1);
void primes()
{
    sieve[0]=sieve[1]=1;
    for(ll i=2;i<N+5;i++)
        sieve[i]=i;
    for(ll i=2;i<N+5;i++)
    {
        if(sieve[i]==i)
        {
            for(ll j=i*i;j<N+5;j+=i)
            {
                if(sieve[j]==j)
                    sieve[j]=i;
            }
        }
    }
}