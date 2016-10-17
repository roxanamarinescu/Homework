using namespace std;

#include "lib.h"

int main()
{
    char secv[20][25], sir[25];
    int nr, i;

    cout<<"Sirul de cautat: ";
    cin>>sir;
    cout<<"Nr. de cuvinte al secventei: ";
    cin>>nr;
    cout<<"Secventa: ";
    for(i = 0; i < nr; i++) {
        cin>>secv[i];
    }
    if(caut(secv, sir, nr) == false) {
        cout<<"\nSirul nu s-a gasit in secventa.";
    } else {
        cout<<"\n\nSirul a fost gasit de "<<contor(secv, sir, nr)<<" ori.";
    }
    return 0;
}
