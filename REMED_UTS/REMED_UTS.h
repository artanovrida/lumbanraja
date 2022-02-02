#ifndef REMED_UTS_H_INCLUDED
#define REMED_UTS_H_INCLUDED

#include<iostream>
using namespace std;

#define first(List_Identitas)(List_Identitas.first)
#define info(E) (E->info)
#define next(E) (E->next)
#define info(P) (P->info)


typedef struct elm_Identitas *adr_Identitas;

struct Identitas{
    int ID;
    string Nama;
    string Status;
};

struct elm_Identitas{
    Identitas info;
    adr_Identitas next;
};

struct SLL{
    adr_Identitas first;
};

void Create_List(SLL &List_Identitas);
void Newelm_Identitas(Identitas info, adr_Identitas &I);
void Insert(SLL &List_Identitas, adr_Identitas I);
void Show_All(SLL List_Identitas);
void Find_And_Show(SLL &List_Identitas, string Status);



#endif // REMED_UTS_H_INCLUDED
