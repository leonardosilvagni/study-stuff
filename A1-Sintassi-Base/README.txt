Il c++ è un linguaggio imperativo di medio-alto livello: è molto piu' complesso
di altri linguaggi di scripting quali perl, python, ruby ecc ma permette di
affrontare operazioni di livello basso adottando una sintassi piu' simile al c,
suo predecessore, oppure utilizzando paradigmi piu' complessi utilizzando la
sintassi del c++ appunto quali le classi e la programmazione orientata ad
oggetti (OOP).
In questa cartella ti metto un programma di esempio che spiega il
funzionamento delle istruzioni di base: un file commentato in italiano e un
file non commentato per rendere individuabile la struttura di un programma
"base" con pochi commenti necessari a spiegare la funzione di un determinato
algoritmo e piu' leggibili a programmatori piu' avanzati


I commenti nel c++ e nel c possono essere di due tipi:
	Introdotti da la doppia barra che valgono fino a fine riga, percui
	tutto ciò che viene scritto dopo le doppie barre verrà ignorato dal
	compilatore eg. // TUTTO QUESTO VIENE IGNORATO
	Introdotti e conclusi da la barra + asterisco e chiusi da asterisco+barra
	/* COMMENTO */
	Possono essere utilizzati su piu' righe o all'interno di un'espressione
	anche se questa pratica è sconsigliata perchè mina la leggibilità di un
	programma.

Il Cpp funziona per mezzo di funzioni e parole chiave, la più importante delle
quali è main() al cui internovengono raggruppate tutte le chiamate alle funzioni
e senza cui un programma non può funzionare

All'inizio di ogni programma oltre a commenti esplicativi si trova solitamente
l'inclusione delle librerie tramite la chiamata
	#include <NOMEDELLALIBRERIA>
oppure
	#include <NOMEDELLALIBRERIA.h>
oppure
	#include "NOMEDELLALIBRERIA.h"
Questo serve a includere librerie di funzioni base e non per creare programmi
più o meno complessi.
Ogni funzione deve essere chiamata dichiarando la classe a cui appartiene , ad
esempio "cout" appartiene alla classe "std" e verrà chiamata con la dicitura
"std::cout". Per evitare di ripetere tante volte la dicitura std:: molti
programmatori decidono di dichiarare le funzioni usate all'inizio del programma
scrivendo 
	using std::cout;
	using std::cin;
ecc. ecc. per ogni funzione utilizzata spesso oppure utilizzare la keyword
"namespace" che indica che prima di ogni funzione senza conflitti di nome deve
starci una determinata dicitura, ad esempio
	using namespace std;
ci permette di usare liberamente cout e cin e ogni altra funzione std nel nostro
programma.
