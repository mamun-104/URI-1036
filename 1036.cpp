#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    double a,b,c;
    double d,r1,r2;
    cin>>a>>b>>c;

    d = b*b - 4*a*c;

    if(d<0.0 || a<=0.0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        r1 = ( (-b) + sqrt(d) ) / (2*a);
        r2 = ( (-b) - sqrt(d) ) / (2*a);

        cout<<"R1 = "<<fixed<< setprecision(5)<< r1<<endl;
        cout<<"R2 = "<<fixed<< setprecision(5)<< r2<<endl;

    }



    return 0;
}

