#include <stdio.h>
#include <string.h>
#define MAXLEN 1024

typedef	struct{
		char lettera;
		int ripetizione;
	}letteraRipetuta;

void leggiStringa(char[],int);
void stampaArr(int[],int);
void stampaStringArr(char[],int);
int esiste(int,char[]);
int rientraInLettera(char);
letteraRipetuta trovaLetteraRipetuta(char[], int[]);


int main () {
	char stringa[MAXLEN];
	int i, j, n, x=0;
	char val_lettera;
	letteraRipetuta risultato;
	
	
	
	printf("inserire la frase (numero massimo di caratteri ammessi 1024)\n");
	leggiStringa(stringa,MAXLEN);
	
	
	int len_stringa=strlen(stringa); 
	
	
	char lettere[len_stringa];
	int contatori[len_stringa];

	
	for(i=0;i<len_stringa;i++){
		val_lettera=stringa[i];
		n=1;
		if(rientraInLettera(val_lettera)==0) continue; 
		if(esiste(val_lettera,lettere)==1) continue;
		for(j=i+1;j<len_stringa;j++){
			if(val_lettera==stringa[j]){
				n++;
			}
		}
		
		contatori[x]=n;
		lettere[x]=val_lettera;
		x++;
	}
	
	/*
	stampaArr(contatori,x);
	printf("\n");
	stampaStringArr(lettere,x);
	*/
	
	if(x==0){
		printf("La frase non contiene caratteri validi");
	}else{
		risultato=trovaLetteraRipetuta(lettere,contatori);
		printf("La lettera che si ripete di piu' e' %c, con %d ripetizioni",risultato.lettera, risultato.ripetizione);
	}
	
	     

}
void leggiStringa(char s[],int len){
	fgets(s,len,stdin);
	s[strlen(s)-1]='\0';
}

void stampaArr(int arr[], int len){
	int i;
	for(i=0;i<len;i++) printf("%d\t", arr[i]);
}

void stampaStringArr(char arr[], int len){
	int i;
	for(i=0;i<len;i++) printf("%c\t", arr[i]);
}

int esiste(int val_lettera, char lettere[]){
	int i, len=strlen(lettere);
	
	for(i=0;i<len;i++){
		if(val_lettera==lettere[i]){
			return 1;
		}
	}
	return 0;
}

int rientraInLettera(char val_lettera){
	if((val_lettera>='A' && val_lettera<='Z') || (val_lettera>='a' && val_lettera<='z')){
		return 1;
	}else{
		return 0;
	}
}

letteraRipetuta trovaLetteraRipetuta (char lettere[], int contatori[]){
	int i=0,len=strlen(contatori), max, maxIndex;
	
	max=contatori[i];
	maxIndex=i;
	
	for(i=1;i<len;i++){
		if(max<contatori[i]){
			max=contatori[i];
			maxIndex=i;
		}
	}
	
 	return (letteraRipetuta){.lettera=lettere[maxIndex], .ripetizione=max};

}


