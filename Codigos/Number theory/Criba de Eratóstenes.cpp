ll MAX = 10000000;
vb prime(MAX,1);
void sieve(){
    prime[0] = prime[1] = 0;
    for(auto i=2;i*i<=MAX;++i)
        if(prime[i])
            for(auto j=i*i;j<=MAX;j+=i)
                prime[j] = 0;
}
