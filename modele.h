
#pragma once
#include <libsx.h>


typedef struct {
	
	char  l[222];		
	int maj;
} data;






extern void initialiser(data *);
extern void supprimer(data *);
extern void maj(data *);
extern void min(data *);
extern void tmm(data *);
extern int tester(data *);

extern void lire(data *, char * );




