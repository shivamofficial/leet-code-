method 1
  class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0 )
           return false;
        
        int rem;
      long long int rev=0;
        int temp=x;
        while(x!=0)
        {
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(rev==temp)
        {
            return true;
        }
        return false;
    }
};
.....................................
  method 2
  string s=to_string(x);
    if(s==string(s.rbegin(),s.rend()))
    {
        cout<<"pallindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
