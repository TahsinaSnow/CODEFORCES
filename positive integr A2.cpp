#include <iostream>
using namespace std;
int main()
 {
   long long int n,m,a,ans;
   while(cin>>n>>m>>a){
     if(a>n and a>m) cout<<"1"<<endl;
      else{
      if(n%a>0) n = (n/a)+1;
        else n = (n/a);
       if(m%a>0) m = (m/a)+1;
       else m = (m/a);
        ans = n*m;
        cout<<ans<<endl;
  }
}
    return 0;
}
