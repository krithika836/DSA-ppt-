bool isPalindrome(int x) {
    if(x<0)
         return false;
    if(x==0)
    return true;
    int temp;
    temp=x;
    long rem,rev=0;
    while(x!=0)
    {
        rem=x%10;
        rev=(rev*10)+rem;
        x=x/10;
    }
    if(rev==temp)
     return true;
    else
    return false;


}
