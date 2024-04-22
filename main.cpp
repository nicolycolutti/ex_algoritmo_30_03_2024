#include <iostream>

using namespace std;

int main()
{
    float paes;
    float broas;
    float valorpaes;
    float valorbroas;
    float arrecadvenda;
    float poupança;
    
    valorpaes=0.12;
    valorbroas=1.50;
    
    cout<<"Insira quantos pães foram vendidos: ";
    cin>>paes;
    cout<<"Insira quantas broas foram vendidas: ";
    cin>>broas;
    
    arrecadvenda=(paes*valorpaes)+(broas*valorbroas);
    poupança=arrecadvenda*0.1;
    
    cout<<"Você arrecadou "<<arrecadvenda<<" reais e deve guardar "<<poupança<<" reais em sua poupança";
    
    return 0;
}
