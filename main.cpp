#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    double x;
    int n,i;
    double sum=0.0;
    double ans=0.0;
    double y=0.0;
    double xp=0.0;
    
    cout<<"enter number of terms"<<endl;
    cin>>n;
    
    double a[n];
    cout<<"enter the terms starting from x^0"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the value for x"<<endl;
    cin>>x;
    xp=x;
    
    for(i=0;i<n;i++){
        sum= sum+(pow(xp,i)*a[i]);
    }
    cout<<"the answer is"<<endl;
    cout<<sum<<endl;
    
    cout<<"when it is differenciated the answer is"<<endl;
    
    for(i=0;i<n;i++){
        ans=ans+(i*pow(xp,i-1)*a[i]);
    }
    
    cout<<ans<<endl;
    
    y=xp-(sum/ans);
    
    cout<<"new x is"<<endl;
    cout<<y;
    cout<<endl;
    
    }
