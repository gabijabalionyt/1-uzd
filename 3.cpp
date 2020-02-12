#include <iostream>


using namespace std;
struct eiles
{
     string var, eile1="*", eile2="*", eile3="*", eil4;
};

int main()
{ int plotis;
   eiles E;
   label: cout<<"Iveskite norima remelio ploti(skaiciu nemazesni uz 3):"<<endl;
    cin >> plotis;
    if(plotis<3)goto label;
   label2: cout<<"Iveskite savo varda"<<endl;
    cin>>E.var;
    if (*E.var.rbegin()=='s')E.eil4=" Sveikas,"; else E.eil4=" Sveika, ";
    E.eile3+=E.eil4+E.var+"! *\n";
    int n=E.eile3.length();
    for (int i=1; i<n-2; i++, E.eile1=E.eile1+"*", E.eile2=E.eile2+" ");
    E.eile1=E.eile1+"*\n"; E.eile2=E.eile2+"*\n";
    plotis-=3;
    if(plotis%2==0)
    {cout<<E.eile1;
    for(int i=1;i<plotis/2+1;i++) cout<< E.eile2;
    cout<<E.eile3;
    for(int i=0;i<(plotis-(plotis/2));i++) cout<< E.eile2;
    cout<<E.eile1;}
    else
    {cout<<E.eile1;
    for(int i=1;i<plotis/2+1;i++) cout<< E.eile2;
    cout<<E.eile3;
    for(int i=0;i<(plotis-(plotis/2));i++) cout<< E.eile2;
    cout<<E.eile1;}
}
