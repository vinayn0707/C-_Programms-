// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int  count (int n)
{
    cout<<"count "<<n<<endl;
    if (n == 0)
    return 0;
    /*
    while(n> 0)
    {
    n = n/10;
    nDigits++;
    }
    */
    int nDigits = count(n/10);
    cout<<"\tn="<<n<<"\tnDigits = "<<nDigits<<endl;
    return nDigits + 1;
    
}
int Sumof_the_digit(int  n)
{
    if( n == 0)
    return  0;
   /* int nSum=0;
    while(n >0)
    {
        nSum+= n%10;
        n = n/10;
        
    }
    */
    int nSum = Sumof_the_digit(n/10);
    return nSum+ (n%10);
}

int multiple(int a  , int b)
{
    //int ans=0;
    if ( b == 0 )
    return 0;
    
    
    int ans = multiple(a, --b);
    /*
    while ( b >0)
    {
     ans = ans+a;
     b--;
    }
    */
    return ans + a;
}

int CountZero(int n)
{
    if ( n == 0)
      return 0;
    int ans = CountZero(n/10);
    
/*    while (n > 0)
    {
        if( n%10 == 0)
        ans= ans+ 1;
        
        n = n/10;
        
    }
  */  
    if( n%10 == 0)
     ans = ans + 1;
    return ans;
    
}

int main() {
    // Write C++ code here
    
    std::cout << "number of digits = "<<count(123)<<endl;
    
    cout<<"Sum of the digits =  "<<Sumof_the_digit(1234)<<endl;
    cout<<" Multiple of 2 number "<<multiple( 4,5)<<endl;
    cout<<"COunt Zero's= "<<CountZero(100)<<endl;
    return 0;
}
