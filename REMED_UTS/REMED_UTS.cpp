#include "REMED_UTS.h"
#include<iostream>
using namespace std;

void Create_List(SLL &List_Identitas){
    first(List_Identitas)=NULL;
}

void Newelm_Identitas(Identitas info, adr_Identitas &I){
    I = new elm_Identitas();

    info(I).ID=info.ID;
    info(I).Nama=info.Nama;
    info(I).Status=info.Status;
    next(I)=NULL;
}

void Insert(SLL &List_Identitas, adr_Identitas I){
    if(first(List_Identitas)==NULL){
        first(List_Identitas)=I;
    }else{
        adr_Identitas P = first(List_Identitas);
        while (next(P)!= NULL){
            P=next(P);
        }
        next(P)=I;
    }
}

void Show_All(SLL List_Identitas){
    adr_Identitas I = first(List_Identitas);
    if(I!=NULL){
            while(I!=NULL){
            cout<<"===New Identitas==="<<endl;
            cout<<"ID:"<<info(I).ID<<endl;
            cout<<"Nama:"<<info(I).Nama<<endl;
            cout<<"Status:"<<info(I).Status<<endl;
            cout<<endl;
            I=next(I);
            cout<<endl;
            }
        }

    }


void Find_And_Show(SLL &List_Identitas, string Status){
    adr_Identitas I= first(List_Identitas);
    while(I!=NULL){
            if(info(I).Status==Status){
                    cout<<""<<Status<<endl<<endl;
            cout<<"ID:"<<info(I).ID<<endl;
            cout<<"Nama:"<<info(I).Nama<<endl<<endl;

            }

            I=next(I);

        }

    }

