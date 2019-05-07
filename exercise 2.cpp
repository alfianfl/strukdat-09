
/*
Nama Program  : Exercise-02, Strukdat-09
Nama    : Alfian Fadhil
NPM     : 140810180055
Tanggal Pembuatan : Selasa, 07 Mei 2019
Deskripsi   : membalikan kata menggunakan linked list stack
*/
 
#include <iostream>
using namespace std;

struct List{
	char isi;
	List* next;
};
typedef List* pointer;
typedef pointer Stack;
Stack S;

void createList(Stack& TOP){
	TOP = NULL;
}

void createElement (pointer& pBaru){
	pBaru = new List;
	cout << "Isi char : "; cin >> pBaru->isi;
 	pBaru->next = NULL;
}

void push (Stack& TOP, pointer pBaru){
	if (TOP==NULL){
		TOP=pBaru;
	}
	else{
		pBaru->next=TOP;
		TOP=pBaru;
	}	
}

void pop (Stack& TOP, pointer& pHapus){
	if (TOP==NULL){
		cout << "Stack Kosong" <<endl;
		pHapus=NULL;
	}
	else if (TOP->next==NULL){
		pHapus=TOP;
		TOP=NULL;
 	}
 	else{
		pHapus=TOP;
		TOP=TOP->next;
  		pHapus->next=NULL;
	}
}

void traversal (Stack TOP){
	pointer pBantu;
	pBantu=TOP;
	if (TOP==NULL)
  		cout << "List Kosong\n";
	else
 		pBantu=TOP;
	while(pBantu != NULL){
		cout << pBantu->isi;
		pBantu = pBantu->next;
		cout<<endl;
	}
}

int main(){
	pointer p;
	createList(S);
	createElement(p);
	push(S,p);
	createElement(p);
	push(S,p);
	createElement(p);
	push(S,p);

	traversal(S);
}
