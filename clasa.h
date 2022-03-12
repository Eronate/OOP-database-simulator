#ifndef CLASA_H_INCLUDED
#define CLASA_H_INCLUDED
using namespace std;
class persoana{
    string nume;
    int anul_nasterii;
    char sex;
public:
    persoana()
    {
        nume="";
        anul_nasterii=0;
        sex='\0';
    }
    persoana(string n, int a, char s)
    {
        nume=n;
        anul_nasterii=a;
        sex=s;
    }
    ~persoana()
    {

    }
    string getNume(){return nume;};
    int getAnul_nasterii(){return anul_nasterii;}
    char getSex() {return sex;}
    void setNume(string aux) {nume=aux;}
    void setAnul_nasterii(int aux) {anul_nasterii=aux;}
    void setSex(char aux) {sex=aux;}
    /*persoana operator=(persoana &persoana_1)
    {
        persoana temp;
        temp.nume=persoana_1.nume;
        temp.anul_nasterii=persoana_1.anul_nasterii;
        temp.sex=persoana_1.sex;
        return temp;
    }*/

};

class baza_de_date{
    persoana *p;
    int nr_persoane;

public:

    baza_de_date()
    {
        p=NULL;
        nr_persoane=0;
    }
    ~baza_de_date()
    {
        delete p;
    }

    void addPersoana(persoana &);
    void delPersoana(string nume);
    void delPersoana(int anul_nasterii);
    void delPersoana(char sex);
    void sortName();
    void sortAge();
    void afisare();
};

#endif // CLASA_H_INCLUDED
