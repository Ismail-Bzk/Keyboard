#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <libsx.h>
#include "modele.h"
#include "vue.h"
#include "callbacks.h"


 
void quit(Widget w, void *d) {
 exit(EXIT_SUCCESS);
}



void reinitialiser(Widget w, void *d) {

	ClearDrawArea();
	initialiser(d);
	
}


void drawing(data *d){
	 DrawText(d->l, 30, 20);
}



void f1(Widget w, void *d) {
	char *a ="1";
	lire(d,a);
	
	drawing(d);	
}
	
void f2(Widget w, void *d) {
	char *a ="2";
	lire(d,a);
	
	drawing(d);
	
}
void f3(Widget w, void *d) {
	char *a ="3";
	lire(d,a);
	
	drawing(d);
	
}
void f4(Widget w, void *d) {
	char *a ="4";
	lire(d,a);
	
	drawing(d);
	
}

void f5(Widget w, void *d) {
	char *a ="5";
	lire(d,a);
	
	drawing(d);

}
void f6(Widget w, void *d) {
	char *a ="6";
	lire(d,a);
	
	drawing(d);
	
}
void f7(Widget w, void *d) {
	char *a ="7";
	lire(d,a);
	
	drawing(d);
	
}
void f8(Widget w, void *d) {
	char *a ="8";
	lire(d,a);
	
	drawing(d);
	
}
void f9(Widget w, void *d) {
	char *a ="9";
	lire(d,a);
	
	drawing(d);
	
}
void f0(Widget w, void *d) {
	char *a ="0";
	lire(d,a);
	
	drawing(d);
	
}
void fa(Widget w, void *d) {
	char *a ="A";
	lire(d,a);
	
	drawing(d);
	
}
void fb(Widget w, void *d) {
	char *a ="B";
	lire(d,a);
	
	drawing(d);
	
}
void fc(Widget w, void *d) {
	char *a ="C";
	lire(d,a);
	
	drawing(d);
	
}
void fd(Widget w, void *d) {
	char *a ="D";
	lire(d,a);
	
	drawing(d);
	
}

void fe(Widget w, void *d) {
	char *a ="E";
	lire(d,a);
	
	drawing(d);
	
}

void ff(Widget w, void *d) {
	char *a ="F";
	lire(d,a);
	
	drawing(d);
	
}

void fg(Widget w, void *d) {
	char *a ="G";
	lire(d,a);
	
	drawing(d);
	
}

void fh(Widget w, void *d) {
	char *a ="H";
	lire(d,a);
	
	drawing(d);
	
}

void fi(Widget w, void *d) {
	char *a ="I";
	lire(d,a);
	
	drawing(d);
	
}

void fj(Widget w, void *d) {
	char *a ="J";
	lire(d,a);
	
	drawing(d);
	
}

void fk(Widget w, void *d) {
	char *a ="K";
	lire(d,a);
	
	drawing(d);
	
}

void fl(Widget w, void *d) {
	char *a ="L";
	lire(d,a);
	
	drawing(d);
	
}

void fm(Widget w, void *d) {
	char *a ="M";
	lire(d,a);
	
	drawing(d);
	
}
void fn(Widget w, void *d) {
	char *a ="N";
	lire(d,a);
	
	drawing(d);
	
}

void fo(Widget w, void *d) {
	char *a ="O";
	lire(d,a);
	
	drawing(d);
	
}

void fp(Widget w, void *d) {
	char *a ="P";
	lire(d,a);
	
	drawing(d);
	
}

void fq(Widget w, void *d) {
	char *a ="Q";
	lire(d,a);
	
	drawing(d);
	
}

void fr(Widget w, void *d) {
	char *a ="R";
	lire(d,a);
	
	drawing(d);
	
}

void fs(Widget w, void *d) {
	char *a ="S";
	lire(d,a);
	
	drawing(d);
	
}

void ft(Widget w, void *d) {
	char *a ="T";
	lire(d,a);
	
	drawing(d);
	
}

void fu(Widget w, void *d) {
	char *a ="U";
	lire(d,a);
	
	drawing(d);
	
}

void fv(Widget w, void *d) {
	char *a ="V";
	lire(d,a);
	
	drawing(d);
	
}
void fw(Widget w, void *d) {
	char *a ="W";
	lire(d,a);
	
	drawing(d);
	
}

void fx(Widget w, void *d) {
	char *a ="X";
	lire(d,a);
	
	drawing(d);
	
}

void fy(Widget w, void *d) {
	char *a ="Y";
	lire(d,a);
	
	drawing(d);
	
}

void fz(Widget w, void *d) {
	char *a ="Z";
	lire(d,a);
	
	drawing(d);
	
}


void fsous(Widget w, void *d) {
	char *a ="-";
	lire(d,a);
	
	drawing(d);
	
}

void fpoint(Widget w, void *d) {
	char *a =".";
	lire(d,a);
	
	drawing(d);
	
}


void finter(Widget w, void *d) {
	char *a ="?";
	lire(d,a);
	//pe(d);
	//ClearDrawArea();
	
	drawing(d);
	
}
void fexcl(Widget w, void *d) {
	char *a ="!";
	lire(d,a);
	
	drawing(d);
	
}
void fesp(Widget w, void *d) {
	char *a =" ";
	lire(d,a);
	
	drawing(d);
	
}

void fsupp(Widget w, void *d) {
	
	supprimer(d);
	ClearDrawArea();

	drawing(d);
	
}


void fmaj(Widget w, void *d) {
	
	maj(d);

	//drawing(d);
	
}

void fmini(Widget w, void *d) {
	
	min(d);

	//drawing(d);
	
}

















