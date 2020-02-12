#include <iostream>

int main()
{
    std::string vardas, eile1="*", eile2="*", eile3="*";
    std::cout<<"Koks jusu vardas ?"<<std::endl;
    std::cin>>vardas;
    eile3+=" Sveikas, "+vardas+"! *\n";
    int n=eile3.length();
    for (int i=1; i<n-2; i++, eile1=eile1+"*", eile2=eile2+" ");
    eile1=eile1+"*\n"; eile2=eile2+"*\n";
    std::cout<<eile1<<eile2<<eile3<<eile2<<eile1;



}
