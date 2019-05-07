/*
Nama Program  : Exercise-02, Strukdat-09
Nama    : Alfian Fadhil
NPM     : 140810180055
Tanggal Pembuatan : Selasa, 07 Mei 2019
Deskripsi   : membalikan kata menggunakan linked list stack
*/
 
#include <iostream> 
using namespace std; 

const int maxElemen = 10; 
struct Stack { 
    char isi[maxElemen]; 
    int TOP; 
}; 
Stack S; 

void createStack (Stack& S){ 
    S.TOP = -1; 
} 

void createElement(char& elemenBaru){ 
    cin>>elemenBaru; 
} 

void push(Stack& S, char elemenBaru) { 
    if (S.TOP == maxElemen-1){ 
        cout<<"Tumpukan sudah penuh"<<endl; 
    } 
    else{ 
        S.TOP=S.TOP + 1; 
        S.isi[S.TOP] = elemenBaru; 
    } 
}

void pop(Stack& S, char& elemenHsl){ 
    if (S.TOP < 0) { 
        cout<<"Tumpukan sudah kosong "<<endl; 
    } 
    else { 
        elemenHsl= S.isi[S.TOP]; 
        S.TOP=S.TOP - 1; 
    } 
}

void traversal(Stack S){ 
    for (int i=S.TOP;i>=0;i--){ 
        cout<<S.isi[i]<<" ";
    } 
} 


int main(){ 
    char elemenBaru; 
    char elemenHasl;
    Stack S; 
    int n; 
    createStack (S); 
    cout<<"Banyak element: ";cin>>n; 
 cout<<"Input : ";
    for (int i=0;i<n;i++){ 
     createElement(elemenBaru); 
        push(S,elemenBaru); 
    } 
    cout<<"Output pop : ";
 for (int i=0;i<n;i++){
  pop(S, elemenHasl);
  cout<<elemenHasl<<" ";
 }
 cout<<endl;
 
 cout<<"Output : ";traversal(S);
    
}
