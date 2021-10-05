#include <iostream>

using namespace std;


struct Czlowiek{
    string imie;
    unsigned long long int waga;
};
void swap(Czlowiek *xp, Czlowiek *yp)
{
    Czlowiek temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(Czlowiek arr[], int n)
{
    int i, j;
  int min_idx;

    for (i = 0; i < n-1; i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++){
            if (arr[j].waga > arr[min_idx].waga){
                min_idx = j;
            }else if (arr[j].waga == arr[min_idx].waga){
                if( arr[j].imie < arr[min_idx].imie ){
                   min_idx = j;
                }
            }

        }
        if (arr[j].waga > arr[min_idx].waga){
                swap(&arr[min_idx], &arr[i]);
        }

    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int ile_testow, n, p;
    unsigned long long int licznik;
    cin>>ile_testow;
    for(int i=0; i < ile_testow; i++){
        cin>>n>>p;
        Czlowiek czlowiek[n];
        licznik=0;
        for(int j=0; j < n; j++){
            cin>>czlowiek[j].imie;
            cin>>czlowiek[j].waga;
        }
        selectionSort(czlowiek, n);
        
        for(int k=0; k < n; k++){
           if(k<p){
                cout<<czlowiek[k].imie<<' ';
           }
           if(k!=0){
            licznik+=czlowiek[k].waga*k+1;
           }else{
            licznik++;
           }
        }
        cout<<endl;;
        cout<<licznik%1000003 <<' ';

    }
    return 0;