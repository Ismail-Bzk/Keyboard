#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <libsx.h>
#include "modele.h"
#include "callbacks.h"


/* Rôle: création et assemblage des widgets */
void init_display(int argc, char *argv[], void *d)
{
	  Widget BQuit, grille, B1,B2,B3,B4,B5,B6,B7,B8,B9,B0,BC,BA,BB,BD,BE, BF ,BG,BH,BI,BJ,BK,BL,BM,BN,BO,BP,BQ,BR,BS,BT,BU,BV,BW,BX,BY,BZ, Bpoint,Binter,Bexcl,Bsupp, Besp,Bsous,BTS, BMAJ, BMIN;
// créer les composants graphiques

	
 	BQuit = MakeButton(" OFF ", quit, NULL);
 	B1= MakeButton(" 1 ", f1, d);
 	B2= MakeButton(" 2 ", f2, d);
 	B3= MakeButton(" 3 ", f3, d);
 	B4= MakeButton(" 4 ", f4, d);
 	B5= MakeButton(" 5 ", f5, d);
 	B6= MakeButton(" 6 ", f6, d);
  	B7= MakeButton(" 7 ", f7, d);
  	B8= MakeButton(" 8 ", f8, d);
  	B9= MakeButton(" 9 ", f9, d);
  	B0= MakeButton(" 0 ", f0, d); 
  	BA= MakeButton(" A ", fa, d);
  	BB= MakeButton(" B ", fb, d);
  	BC= MakeButton(" C ", fc, d);
  	BD= MakeButton(" D ", fd, d);
  	BE= MakeButton(" E ", fe, d);
  	BF= MakeButton(" F ", ff, d);
  	BG= MakeButton(" G ", fg, d);
  	BH= MakeButton(" H ", fh, d);
  	BI= MakeButton(" I ", fi, d);
  	BJ= MakeButton(" J ", fj, d);
  	BK= MakeButton(" K ", fk, d);
  	BL= MakeButton(" L ", fl, d);
  	BM= MakeButton(" M ", fm, d);
  	BN= MakeButton(" N ", fn, d);
  	BO= MakeButton(" O ", fo, d);
  	BP= MakeButton(" P ", fp, d);
  	BQ= MakeButton(" Q ", fq, d);
  	BR= MakeButton(" R ", fr, d);
  	
  	BS= MakeButton(" S ", fs, d);
  	BT= MakeButton(" T ", ft, d);
  	BU= MakeButton(" U ", fu, d);
  	BV= MakeButton(" V ", fv, d);
  	BW= MakeButton(" W ", fw, d);
  	BX= MakeButton(" X ", fx, d);
  	BY= MakeButton(" Y ", fy, d);
  	BZ= MakeButton(" Z ", fz, d);
  	Bpoint= MakeButton(" . ", fpoint, d);
  	Bsous= MakeButton(" - ", fsous, d);
  	Binter= MakeButton(" ? ", finter, d);
  	Bexcl= MakeButton(" ! ", fexcl, d);
  	Bsupp= MakeButton(" SUPP", fsupp, d);
  	Besp=MakeButton("   ESPACE   ", fesp, d);
  	
  	BTS=MakeButton("DELETE ALL", reinitialiser, d);
  	BMAJ=MakeButton(" MAJ ", fmaj, d);
  	BMIN=MakeButton(" MIN ", fmini, d);
  	
  	
 	grille=MakeDrawArea(370, 45, NULL, NULL);

 	
// assembler les composants graphiques
 		
 	
 	SetWidgetPos(B1, PLACE_UNDER, grille, NO_CARE, NULL);
	//SetWidgetPos(B2, PLACE_RIGHT, B1, PLACE_UNDER, grille);
	SetWidgetPos(B2, PLACE_UNDER, grille, PLACE_RIGHT, B1);
	SetWidgetPos(B3, PLACE_UNDER, grille, PLACE_RIGHT, B2);
	SetWidgetPos(B4, PLACE_UNDER, grille, PLACE_RIGHT, B3);
	SetWidgetPos(B5, PLACE_UNDER, grille, PLACE_RIGHT, B4);
	SetWidgetPos(B6, PLACE_UNDER, grille, PLACE_RIGHT, B5);
	SetWidgetPos(B7, PLACE_UNDER, grille, PLACE_RIGHT, B6);
	SetWidgetPos(B8, PLACE_UNDER, grille, PLACE_RIGHT, B7);
	SetWidgetPos(B9, PLACE_UNDER, grille, PLACE_RIGHT, B8);
	SetWidgetPos(B0, PLACE_UNDER, grille, PLACE_RIGHT, B9);
	
	
	SetWidgetPos(BA, PLACE_UNDER, B1, NO_CARE, NULL);
	SetWidgetPos(BZ, PLACE_UNDER, B2, PLACE_RIGHT, BA);
	SetWidgetPos(BE, PLACE_UNDER, B3, PLACE_RIGHT, BZ);
	SetWidgetPos(BR, PLACE_UNDER, B4, PLACE_RIGHT, BE);
	SetWidgetPos(BT, PLACE_UNDER, B5, PLACE_RIGHT, BR);
	SetWidgetPos(BY, PLACE_UNDER, B6, PLACE_RIGHT, BT);
	SetWidgetPos(BU, PLACE_UNDER, B7, PLACE_RIGHT, BY);
	SetWidgetPos(BI, PLACE_UNDER, B8, PLACE_RIGHT, BU);
	SetWidgetPos(BO, PLACE_UNDER, B9, PLACE_RIGHT, BI);
	SetWidgetPos(BP, PLACE_UNDER, B0, PLACE_RIGHT, BO);
	
	SetWidgetPos(BQ, PLACE_UNDER, BA, NO_CARE, NULL);
	SetWidgetPos(BS, PLACE_UNDER, BZ, PLACE_RIGHT, BQ);
	SetWidgetPos(BD, PLACE_UNDER, BE, PLACE_RIGHT, BS);
	SetWidgetPos(BF, PLACE_UNDER, BR, PLACE_RIGHT, BD);
	SetWidgetPos(BG, PLACE_UNDER, BT, PLACE_RIGHT, BF);
	SetWidgetPos(BH, PLACE_UNDER, BY, PLACE_RIGHT, BG);
	SetWidgetPos(BJ, PLACE_UNDER, BU, PLACE_RIGHT, BH);
	SetWidgetPos(BK, PLACE_UNDER, BI, PLACE_RIGHT, BJ);
	SetWidgetPos(BL, PLACE_UNDER, BO, PLACE_RIGHT, BK);
	SetWidgetPos(BM, PLACE_UNDER, BP, PLACE_RIGHT, BL);
	
	SetWidgetPos(BQ, PLACE_UNDER, BA, NO_CARE, NULL);
	SetWidgetPos(BS, PLACE_UNDER, BZ, PLACE_RIGHT, BQ);
	SetWidgetPos(BD, PLACE_UNDER, BE, PLACE_RIGHT, BS);
	SetWidgetPos(BF, PLACE_UNDER, BR, PLACE_RIGHT, BD);
	SetWidgetPos(BG, PLACE_UNDER, BT, PLACE_RIGHT, BF);
	SetWidgetPos(BH, PLACE_UNDER, BY, PLACE_RIGHT, BG);
	SetWidgetPos(BJ, PLACE_UNDER, BU, PLACE_RIGHT, BH);
	SetWidgetPos(BK, PLACE_UNDER, BI, PLACE_RIGHT, BJ);
	SetWidgetPos(BL, PLACE_UNDER, BO, PLACE_RIGHT, BK);
	SetWidgetPos(BM, PLACE_UNDER, BP, PLACE_RIGHT, BL);
	
	SetWidgetPos(BW, PLACE_UNDER, BQ, NO_CARE, NULL);
	SetWidgetPos(BX, PLACE_UNDER, BS, PLACE_RIGHT, BW);
	SetWidgetPos(BC, PLACE_UNDER, BD, PLACE_RIGHT, BX);
	SetWidgetPos(BV, PLACE_UNDER, BF, PLACE_RIGHT, BC);
	SetWidgetPos(BB, PLACE_UNDER, BG, PLACE_RIGHT, BV);
	SetWidgetPos(BN, PLACE_UNDER, BH, PLACE_RIGHT, BB);
	
	SetWidgetPos(Binter, PLACE_UNDER, BJ, PLACE_RIGHT, BN);
	SetWidgetPos(Bpoint, PLACE_UNDER, BK, PLACE_RIGHT, Binter);
	SetWidgetPos(Bexcl, PLACE_UNDER, BL, PLACE_RIGHT, Bpoint);
	SetWidgetPos(Bsous, PLACE_UNDER, BM, PLACE_RIGHT, Bexcl);
	SetWidgetPos(Besp, PLACE_UNDER, BC, PLACE_RIGHT, BC);
	SetWidgetPos(BTS, PLACE_UNDER, BV, PLACE_RIGHT, Besp);
	
	SetWidgetPos(Bsupp, PLACE_UNDER, grille, PLACE_RIGHT, B0);
	SetWidgetPos(BQuit, PLACE_UNDER, BMIN, PLACE_RIGHT, Bsous);
	SetWidgetPos(BMAJ, PLACE_UNDER, Bsupp, PLACE_RIGHT, BP);
	SetWidgetPos(BMIN, PLACE_UNDER, BMAJ, PLACE_RIGHT, BM);

	


// pour gérer les couleurs
 	GetStandardColors();
// pour afficher l’interface
 	ShowDisplay();
}

