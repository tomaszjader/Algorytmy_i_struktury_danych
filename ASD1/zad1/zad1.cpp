#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);

    int liczbaTropow, liczbaMetod, liczbaTestow;
    long long int wynik=0;
    int x,y, maksimum=0,roznica2=0, roznica=0;
    cin>>liczbaTestow;
    for(int i=0; i<liczbaTestow; i++){
        cin>>liczbaTropow>>liczbaMetod;
        for(int j=0; j<liczbaMetod; j++){
            cin>>x>>y;
            roznica2=x-y;
            if(maksimum<x){
                maksimum=x;
            }
            if(roznica<roznica2){
                roznica=roznica2;
            }
        }
        wynik = ceil(double(liczbaTropow - maksimum)/roznica)+1;
        if(liczbaTropow-maksimum<=0){
            wynik=1;
                cout<<' '<<wynik<<'\n';



        }else if(wynik>0){
            cout<<' '<<wynik<<'\n';
           
        }else if(roznica==0){
           cout<<" BRAK METOD "<<'\n';
        }



        roznica=0;
        maksimum=0;
        roznica2=0;
        wynik=0;
    }


    return 0;
}