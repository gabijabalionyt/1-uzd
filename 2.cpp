#include <iostream>

int main()
{
    std::string var, eile1="*", eile2="*", eile3="*", eil4;
    std::cout<<"Iveskite savo varda"<<std::endl;
    std::cin>>var;
    if (*var.rbegin()=='s')eil4=" Sveikas,"; else eil4=" Sveika, ";
    eile3+=eil4+var+"! *\n";
    int n=eile3.length();
    for (int i=1; i<n-2; i++, eile1=eile1+"*", eile2=eile2+" ");
    eile1=eile1+"*\n"; eile2=eile2+"*\n";
    std::cout<<eile1<<eile2<<eile3<<eile2<<eile1;

}
