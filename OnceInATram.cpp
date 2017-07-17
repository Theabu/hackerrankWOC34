#include <bits/stdc++.h>

using namespace std;

int sumOfDigits(int i)
{
    int sum = 0;
    while(i>0)
    {
        sum+=i%10;
        i = i/10;
    }
    return sum;
}
bool isLuckyNo(int N)
{
    int nl,nf,sf,sl;sf=sl=0;
    nl = N%1000;
    nf = N/1000;
    sf = sumOfDigits(nf);
    sl = sumOfDigits(nl);
    if(sf==sl)return 1;
    else return 0;
    
}

int nextLuckyNo(int no)
{
     while(!(isLuckyNo(no)))
    {
        no++;
    }
    return no;
}

int main() {
  int n;  
    cin>>n;
    if(n>999999)exit(0);
     if(isLuckyNo(n))n++;
  cout<<nextLuckyNo(n);
  return 0;
}
