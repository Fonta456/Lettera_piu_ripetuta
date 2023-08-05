	Description: Scrivi un programma che prende in input una frase e dice qual'è la lettera che compare più spesso (solo lettere, no numeri, spazi o simboli). Fai attenzione alle maiuscole e le minuscole.
	
	IPOTESI:
	-l'algoritmo distinguerà lettere minuscole e maiuscole come lettere diverse
	-l'utente dovrà inserire lettere accentate scrivendole senza accento, ma con l'apostrofo
	-in caso di nessuna lettera ripetuta stampo la prima lettera della frase
	
	ANALISI:
	-chiedo all'utente di inserire la frase che desidera
	-una funzione apposita andarà a contare i singoli caratteri di una frase, esaminando lettera per lettera
	-restituirò all'utente la lettera che sarà presente il maggior numero di volte con anche il numero di volte che quella lettera si ripeterà
	
	
	FORMULE:
	
	
	
	DATI DI INPUT:
	-frase_utente (stringa): stringa che contiene la frase inserita dall'utente
	
	
	DATI OUTPUT:
	-lettera_piu'_ripetuta (char): questa variabile rappresenterà la lettera che più si ripete nella frase
	-numero_di_volte (int): questa variabile rappresenterà il numero di volte in cui la lettera si ripete
	

	CONTROLLO INPUT
	-controllo se nella frase ci sono lettere o parole maiuscole, se sono presenti modifico attraverso una funzione
	
	COSTANTI
	-MAXLEN 1024: 
	
	
	
	VARIABILI
	-i (int), j (int), n (int), x (int): variabili contatore utilizzate per calcolare la lettera che si ripete di più
	-val_lettera (char): variabile che acquisce il valore della lettera da esaminare (val_lettera='A')
	-risultato (letteraRipetuta): variabile che viene utilizzata per stampare i due risultati
	
	
	TEST
	IN					OUT
	Andrea F			'A'-1
	AndreA f			'A'-2
	ccc					'c'-3
	"spazio"			frase non valida
	èùòà				frase non valida
	123					frase non valida
*/
