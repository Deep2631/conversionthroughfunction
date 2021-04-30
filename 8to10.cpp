#include <bits/stdc++.h>
using namespace std;
int octaltodecimal(int n){
	int ans=0;
	int x=1;

	while(n>0){
		int y= n%10;//last digit 
		ans = ans+(y*x);//ans 
		x *= 8;// multiply base every itration
		n = n/10;//update number 

	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<octaltodecimal(n)<<endl;

}
