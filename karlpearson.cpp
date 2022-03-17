#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, i;
    double r,xarr[50],yarr[50],dx[50],dy[50],dx2[50],dy2[50],dxdy[50],xar,yar,xsum=0,ysum=0,dxsum=0,dysum=0,dx2sum=0,dy2sum=0,dxdysum=0,dxdy2sum=0;
    cout<<"*******************************************************";
    cout<<"\nEnter Total No. of Elements = \t";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number of X Elements: \n";
    for(i=0; i<n; i++)
    {
        cin>>xarr[i];
    }
    cout<<"\nEnter "<<n<<" Number of Y Elements: \n";
    for(i=0; i<n; i++)
    {
        cin>>yarr[i];
    }
    for(i=0; i<n; i++)
    {
        xsum = xsum+xarr[i];
        xar=xsum/n;  
        ysum = ysum+yarr[i];
        yar=ysum/n;
    }
    for(i=0; i<n; ++i)
    {
        dx[i]=xarr[i]-xar;
        dxsum=dxsum+dx[i];
        dx2[i]=pow((dx[i]),2);
        dx2sum=dx2sum+dx2[i];
        dy[i]=yarr[i]-yar;
        dysum=dysum+dy[i];
        dy2[i]=pow((dy[i]),2);
        dy2sum=dy2sum+dy2[i];
        dxdy[i]=dx[i]*dy[i];
        dxdysum=dxdysum+dxdy[i];
    }
    r=dxdysum/sqrt(dx2sum*dy2sum);
    cout<<"*******************************************************";
    cout<<"\n Arithmetic Mean of X = "<<xar<<"\n Arithmetic Mean of Y = "<<yar<<"\n";
    cout<<"\n Sum of dx = "<<dxsum<<"\n Sum of dy = "<<dysum<<"\n Sum of dxdy = "<<dxdysum<<"\n Sum of dx^2 = "<<dx2sum<<"\n Sum of dy^2 = "<<dy2sum<<"\n";
    cout<<"*******************************************************";
    cout<<"\n Karl Pearson Coeff. is found to be: r = "<<r;
    cout<<"\n*******************************************************";
    return 0;
}