class Solution{
  public:
    //Complete this function
    int countDigits(int n)
    {
        if (n/10 == 0)
        return 1;
    return 1 + countDigits(n / 10); //Your code here
    }
};
