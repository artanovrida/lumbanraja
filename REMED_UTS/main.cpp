#include <iostream>
#include "REMED_UTS.h"

using namespace std;

int main(){
    SLL List_Identitas;
    Identitas data;
    adr_Identitas I;

    Create_List(List_Identitas);
    cout<<"===============IDENTITAS==============="<<endl<<endl;
    data.ID = 1;
    data.Nama = "Ronaldo";
    data.Status = "Tetap";
    Newelm_Identitas(data, I);
    Insert(List_Identitas, I);

    data.ID = 2;
    data.Nama = "Alves";
    data.Status = "Kontrak";
    Newelm_Identitas(data, I);
    Insert(List_Identitas, I);

    data.ID = 3;
    data.Nama = "Puyol";
    data.Status = "Tetap";
    Newelm_Identitas(data, I);
    Insert(List_Identitas, I);

    Show_All(List_Identitas);



    cout <<"===Find And Show==="<<endl;
    Find_And_Show(List_Identitas, "Tetap");
    cout<<endl;

    cout <<"===Find And Show==="<<endl;
    Find_And_Show(List_Identitas, "Kontrak");
    cout<<endl;




    return 0;
}
