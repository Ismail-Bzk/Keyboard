
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "modele.h"


void initialiser(data *d){
	
	d->maj=0;
	char *x=d->l;
	*x='\0';
}

void supprimer(data *d){
	char *x=d->l;
	
	*(x+strlen(x)-1)=' ';
	*(x+strlen(x)-1)='\0';
}



void maj(data *d){
	d->maj=1;
}

void min(data *d){
	d->maj=0;
}


int tester(data *d){
	return d->maj;
}



void tmm(data *d){
	char *x=d->l;
	x=x+strlen(x)-1;

	
	
	while(*x){
		if(tester(d)==1){
   	 		*x=toupper(*x);
   	 	}
   	 	else{
   	 		*x=tolower(*x);
   	 	}
    		 ++x;
  	}
  	
}


void lire(data *d,char *a){
	char *p= d->l;
	strcat(p,a);
	tmm(d);

}



