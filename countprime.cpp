this give time limit exceed
class Solution {
    bool isprime(int n)
    {
        if(n<=1)
            return false;
        for(int i=2;i<n;i++)
        {
             if(n%i==0)
        {
            return false;
        }
        }
       
        return true;
    }
public:
    int countPrimes(int n) {
        int count=0;
        for(int i=2;i<n;i++)
        {
             if(isprime(i))
        {
            count++;
        }
        }
       
        return count;
    }
};
//.......................................................correct answer niche................. 
class Solution {
public:
    int countPrimes(int n) {
        
        int count=0;
        vector<bool> prime(n+1,true);
        {
            prime[0]=prime[1]=false;
            for(int i=2;i<n;i++)
            {
                if(prime[i])
                {
                    count++;
                }
                for(int j=i*2;j<n;j=j+i)
                {
                    prime[j]=0;
                }
            }
        }
        return count;
    }
};
