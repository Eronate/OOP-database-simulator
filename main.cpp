#include <iostream>
#include "clasa.h"
#include "clasa.cpp"
#include <string>
using namespace std;

int main()
{
    baza_de_date BD;

    string n;
    int a;
    char s;

    int choice;
    cout<<"Baza de date. Optiuni:\n";

    cout<<"\n";
        cout<<"1. Adauga o persoana.\n";
        cout<<"2. Sterge o persoana dupa nume.\n";
        cout<<"3. Sterge o persoana/persoane dupa anul nasterii. \n";
        cout<<"4. Sterge o persoana/persoane dupa sex \n";
        cout<<"5. Afiseaza datele persoanelor dupa ordinea alfabetica a numelor. \n";
        cout<<"6. Afiseaza datele persoanelor crescator dupa varsta acestora. \n";
        cout<<"7. Paraseste programul. \n";

    do
    {
        cout<<'\n';
        cout<<"Optiunea ta: ";

        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                cout<<"Introduceti, in aceasta ordine, numele, anul nasterii, si sexul persoanei.\n";
                persoana p1;
                cin>>p1;                            ///cu suprascrierea operatorului
               ///cin>>n;
                ///cin>>a;
                ///cin>>s;
                ///persoana p1(n,a,s);              - cu constructor de initializare
                BD.addPersoana(p1);
                cout<<"Persoana a fost adaugata.\n";
                break;
            }
        case 2:
            {
                cout<<"Insereaza un nume: ";
                cin>>n;
                BD.delPersoana(n);https://cdn.betterttv.net/emote/6151c623b63cc97ee6d39040/3x
                cout<<"Persoana a fost searsa. \n";
                break;
            }
        case 3:
            {
                cout<<"Insereaza un an al nasterii: ";
                cin>>a;
                BD.delPersoana(a);
                cout<<"Persoana/persoanele au fost sterse. \n";
                break;
            }
        case 4:
            {
                cout<<"Insereaza un sex: ";
                cin>>s;
                BD.delPersoana(s);
                cout<<"Persoana/persoanele au fost sterse. \n";
                break;
            }
        case 5:
            {
                cout<<"Lista cu persoanele tale: \n";
                BD.sortName();
                BD.afisare();
                break;
            }
        case 6:
            {
                cout<<"Lista cu persoanele tale: \n";
                BD.sortAge();
                BD.afisare();
                break;
            }
        case 7:
            {
                cout<<"............ :( ..............";
                return 0;

            }
        }
    }
    while(choice!=7);

    return 0;
}
