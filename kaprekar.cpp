#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll  numofdigits(ll  j)
{
	return floor(log10(j)+1);
}
void kaprekar(int p,int q)
{
	int c = 0;
	for(ll  i=p;i<=q;i++)
	{
		ll square = pow(i,2);
		ll digits = numofdigits(i);
		ll power = (ll)pow(10,digits);
		ll  l = square/power;
		ll  r = square%power;
		if(l+r==i)
		{
			cout<<i<<" ";
			c++;
		}
	}
if(c==0)
	cout<<"Invalid Range";
}
int main(int argc, char const *argv[])
{

		int p,q;
	cout<<"Enter first value for range\n";
	cin>>p;
	cout<<"Enter last value for range\n";
	cin>>q;
	kaprekar(p,q);
    

	return 0;
}