/* Commento multilinea
 * Copyright Leonardo Silvagni 2018
 * 06.06.2018 13.57 ITALY
*/
#include <iostream>  //Inclusione della libreria iostream
#include <cstdlib>   // Per std::system
using namespace std; //Utilizzo della spaziatura std

#define COSTANTE 100 //Definizione di una costante al di fuori di una funzione
const int Costante = 100;//Metodo alternativo

int main(int argc, char * argv[]){ // Definizione della funzione principale main con all'interno
// I due parametri per prendere l'input da console avviandolo da linea di
// comando, attualmente a noi non serviranno
int variabile_uno = 0,variabile_due = 0; //Dichiarazione e inizializzazione di due variabili
cout << "\nBenvenuto, inserisci un numero e premi invio\n?:\t";//Utilizzo della funzione cout
cin >> variabile_uno; //Utilizzo della funzione cin per leggere il valore inserito da tastiera
cout << "Perfetto, ora inserisci un altro numero\n?:\t";
cin >> variabile_due;
cout << "Benissimo, sto elaborando i dati...\n";
variabile_uno += variabile_due; //Utilizzo dell'operatore misto += per assegnare alla prima 
// variabile il valore della somma delle due (a+=b == a = a+b)
cout << "Allora la somma dei due numeri è "<< variabile_uno << " e le due costanti hanno valore "<<\
	Costante << " e "<< COSTANTE << endl;
// Ora userò delle espressioni logiche con if-else
if(variabile_uno<0){
	cout << "Il primo numero è minore di 0\n";
}else if(variabile_uno == 0){
	cout << "Il primo numero vale 0\n";
}else if(variabile_uno>0){
	cout << "Il primo numero è maggiore di 0\n";};
// Non appena una di queste condizioni si avvera le altre vengono ignorate
// Ricorda che l'operatore di ugualgianza è == mentre quello di assegnazione è =
// P.S. Dimenticandotene ne vedrai delle belle ;)
cout << "Inserisci vari numeri fino a che non ti stanchi quindi inserisci 0\n?:\t";
while(variabile_uno!=0){
	cin >> variabile_uno;
	// Fino a che variabile uno non è zero il ciclo continua
};
//Utilizzo del ciclo for

for(int i=0;i<10;i++){
	cout << i << endl;//for si utilizza in questo modo
	// prima del primo ; si dichiara qualcosa che viene inizializzato una sola
	// volta, fra il primo e il secondo ; è la condizione mentre dopo il secondo
	// ; c'è l'azione che viene svolta dopo la lettura della condizione
}
system("pause"); // Sui sistemi windows mette in pausa la console, su linux non esiste questo
//comando nè è necessario usarlo e si preferisce usare dei cicli di di while
return 0; // Fine del programma
}
