/*
Nama Program  : Exercise-01, Strukdat-09
Nama    : Alfian Fadhil
NPM     : 140810180055
Tanggal Pembuatan : Selasa, 07 Mei 2019
Deskripsi   : membalikan kata menggunakan array stack
*/

#include<iostream>
using namespace std;

const int maxElement = 255;

struct Stack {
	char isi[maxElement];
	int TOP;
};
Stack S;

void createStack (Stack& S){
	S.TOP = -1;
}

void push(Stack& S, char elemenBaru) {
	if (S.TOP == maxElement-1){
  		cout<<"Tumpukan sudah penuh "<<endl;
 }
	else{
	S.TOP=S.TOP + 1;
	S.isi[S.TOP] = elemenBaru;
}
}

int main(){
	
	char eBaru;
	int t;//total input
	createStack(S);
	cout<<"Total Huruf : ";cin>>t;
	t--;
	cout<<"Input : ";	
	for(int i=0; i<=t; i++){
		cin>>eBaru;
		push(S, eBaru);
 	}
	cout<<"Output : ";
	for(int i=t; i>=0; i--){
		cout<<S.isi[i]<<" ";
	} 
}
