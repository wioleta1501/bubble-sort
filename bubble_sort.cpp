#include <iostream>
using namespace std;

int main()
{
    int n=0;
	int temp=0;
	unsigned int wybor;
    cout<<"podaj ilosc liczb do sortowania"<<endl;
    cin>>n;
    int tab[n];
    cout<<"Podaj liczby"<<endl;
    for(int i=0; i<n; i++)
    cin>>tab[i];
    WYBIERZ:
    cout<<"Wybierz sortowanie: "<<endl;
	cout<<"1 - ROSNACO"<<endl;
	cout<<"2 - MALEJACO"<<endl;
	cin>>wybor;
    switch (wybor)
    {
        case 1:
            for (int i=0; i<n; i++)
            {
                for (int j=0; j<n-i; j++)
                {
                    if (tab[j+1] < tab[j])
                    {
                        temp = tab[j];
                        tab[j] = tab[j+1];
                        tab[j+1] = temp;
                    }
                }
            } break;

        case 2:
            for (int i=0; i<n; i++)
            {
                for (int j=0; j<n-i; j++)
                {
                    if (tab[j-1] < tab[j])
                    {
                        temp = tab[j];
                        tab[j] = tab[j-1];
                        tab[j-1] = temp;
                    }
                }
            } break;
        default: goto WYBIERZ;
    }

    cout<<"Po sortowaniu"<<endl;
	for (int i=0; i<n; i++) cout<<tab[i]<<endl;
    return 0;
}
