#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"introduzca el limite de los numeros primos a imprimir: ";
    cin>>n;
    int i;
    for(i=2; i<n;i++){
        int co1=0;
        int j;
        for(j=1;j<=i;j++){
            if(i%j==0){
                co1++;
            }
        }
        if(co1==2){
            cout<<i<<endl;

        }
    }
    int pos;
    cout<<"que posicion de primo deseas imprimir: ";
    cin>>pos;
    int posp=1;
    int p;
    for(p=2;posp<=pos;p++){
        int co2=0;
        int y;
        for (y=1;y<=p;y++){
            if (p%y==0){
                co2++;
            }
        }
        if (co2==2){
              if (posp==pos){
                cout<<"en la posicion "<<pos<<" se encuentra "<<p<<endl;
                break;}
            else{
                posp+=1;
            }

        }
        }


    cout<<"No Olvidar hacer Fibbonacci :'v";

    return 0;
}
