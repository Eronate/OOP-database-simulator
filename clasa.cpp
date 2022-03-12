#include "clasa.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void baza_de_date::addPersoana(persoana &persoana_1)
{

    persoana *temp= new persoana[++nr_persoane+1];
    for(int i=1; i<=nr_persoane-1; i++)
    {
        temp[i].setNume(p[i].getNume());
        temp[i].setAnul_nasterii(p[i].getAnul_nasterii());
        temp[i].setSex(p[i].getSex());
    }
    temp[nr_persoane].setNume(persoana_1.getNume());
    temp[nr_persoane].setAnul_nasterii(persoana_1.getAnul_nasterii());
    temp[nr_persoane].setSex(persoana_1.getSex());
    delete [] p;
    p=temp;
}
void baza_de_date::delPersoana(string nume)
{
    persoana *temp=new persoana[nr_persoane+1];
    int j=0;
    for(int i=1; i<=nr_persoane; i++)
    {
        if(p[i].getNume()!=nume)
        {
            temp[++j].setNume(p[i].getNume());
            temp[j].setAnul_nasterii(p[i].getAnul_nasterii());
            temp[j].setSex(p[i].getSex());
        }
    }
    nr_persoane=j;
    delete [] p;
    p=temp;
}

void baza_de_date::delPersoana(int anul_nasterii)
{
    persoana *temp=new persoana[nr_persoane+1];
    int j=0;
    for(int i=1; i<=nr_persoane; i++)
    {
        if(p[i].getAnul_nasterii()!=anul_nasterii)
        {
            temp[++j].setNume(p[i].getNume());
            temp[j].setAnul_nasterii(p[i].getAnul_nasterii());
            temp[j].setSex(p[i].getSex());
        }
    }
    nr_persoane=j;
    delete [] p;
    p=temp;
}

void baza_de_date::delPersoana(char sex)
{
    persoana *temp=new persoana[nr_persoane+1];
    int j=0;
    for(int i=1; i<=nr_persoane; i++)
    {
        if(p[i].getSex()!=sex)
        {
            temp[++j].setNume(p[i].getNume());
            temp[j].setAnul_nasterii(p[i].getAnul_nasterii());
            temp[j].setSex(p[i].getSex());
        }
    }
    nr_persoane=j;
    delete [] p;
    p=temp;
}
void baza_de_date::sortName()
{
    bool ok=1;
    do
    {
        ok=1;
        for(int i=1; i<nr_persoane; i++)
            if(p[i].getNume().compare(p[i+1].getNume())>0)
                swap(p[i],p[i+1]),ok=0;
    }
    while(ok==0);
}

void baza_de_date::sortAge()
{
    bool ok=1;
    do
    {
        ok=1;
        for(int i=1; i<nr_persoane; i++)
            if(p[i].getAnul_nasterii()<p[i+1].getAnul_nasterii())
                swap(p[i],p[i+1]),ok=0;
    }
    while(ok==0);
}

void baza_de_date::afisare()
{

    for(int i=1; i<=nr_persoane; i++)
        cout<<p[i].getNume()<<" "<<p[i].getAnul_nasterii()<<" "<<p[i].getSex()<<endl;
    return;
}

std::istream &operator>>(istream &s, persoana &p)
{
    string n;
    int a;
    char sex;
    s>>n;
    s>>a;
    s>>sex;
    p.setAnul_nasterii(a);
    p.setNume(n);
    p.setSex(sex);
    return s;
}
