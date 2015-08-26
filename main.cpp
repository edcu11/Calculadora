#include <iostream>

using namespace std;

int sumar(int n1, int n2){
    return n1+n2;

}
int restar(int n1, int n2){
    return n1-n2;

}

int main()
{
    int opc=0;
    while(opc!=5){
        cout<<"1.Sumar"<<endl;
        cout<<"2.Restar"<<endl;
        cout<<"3.Multiplicar"<<endl;
        cout<<"4.Dividir"<<endl;
        cout<<"5.Salir"<<endl;



        switch (opc){
            case 1:
                cin>>n1;
                cin>>n2;
                sumar(n1,n2);
            case 2:
                cin>>n1;
                cin>>n2;
                sumar(n1,n2);


        }





    }
}
