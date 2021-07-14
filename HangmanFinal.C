#include "man.h"  //header file for hangman
int main()       //main program
{
int a=0,score=0;  //a=step of hangman
int i,j,f;        //i,j for loop , f for switch
int enter=0;      //for conditions
char ch;          //for switch of main menu
char h[6]={ '_','_','_','_','_' };      //array of empty words
char word;
char words3[][3]=       //array of 3 letters word
	   { "top",
	     "rat",
	     "bat",
	     "cat",
	     "man",
	     "hat",
	     "hut",
	     "cut",
	     "bit",
	     "pen" };
char words4[][4]=               //array of 4 letter words
	  { "four",
	    "page",
	    "home",
	    "girl",
	    "bird",
	    "lamp",
	    "drop",
	    "high",
	    "tick",
	    "copy" };
char words5[][5]=               //array of 5 letter words
    { "earth",
      "nokia",
      "white",
      "bread",
      "table",
      "zebra",
      "mango",
      "paris",
      "eagle",
      "china",
      "tiger" };

       int b;
       clrscr();
       do
       {
	start:
	word='_';
	i=0; j=0; a=0;

	clrscr();
	title();            //title of hangman

      printf("                                               \n\t\tP:PLAY \n\t\tI:INSTRUCTIONS \n\t\tC:CREDITS \n\t\tQ:QUIT ");
	    //main menu design
     ch=getch();    if(ch=='q'||ch=='Q') return 0;    //if q=quit exit

      switch(ch)
      {
      case 'P':
      case 'p':
      clrscr();
      printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t LOADING ");
      delay(500);                      //look of loading
      printf("..");

      delay(500);                    //time
      printf("..");

      delay(500);
      printf("..");

      delay(500);
      printf("...");

      clrscr();
    title();
      printf("\t\t\t  \n");
      printf("\t\t\t      \n");
      printf("\t\t\t      0 \n");
      printf("\t\t\t     \\|/\n");
      printf("\t\t\t      | \n");          //hangman
      printf("\t\t\t     / \\\n");
      printf("\t         CAN YOU SAVE ME PLESASE ?  \n\n");   //inner look of play another menu
printf("\n\t\t 1: 3 LETTERS GAME \n\t\t 2: 4 LETTERS GAME \n\t\t 3: 5 LETTERS GAME \n\n\t\t \n\n\t\t 4:MAIN MENU \n\n\t\t choice = ");
scanf("%d",&f);  //f=1,2,3 for game
switch(f) {
case 1:
 clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t LOADING ");
      delay(500);
      printf("..");

      delay(500);
      printf("..");

      delay(500);
      printf("..");

      delay(500);
      printf("...");
clrscr();
for(i=0;i<11;i++)
{
  printf("\n LEVEL %d ! GUESS THE LETTER   ",i+1);
   enter=0;
   a=2;

for(j=0;j<3;j++)
 {
    enter=0;
 printf("\n%c %c %c ",h[0],h[1],h[2]);
 printf("\n\nENTER LETTER  \t");
 word=getche();
 if(word>=41&&word<=90)
 word+=32;
    if(h[0]==word)   //condition
    {
    printf("\nNot again");
    printf("\n\t\t\t\tScore =%d",score);
   j--;
   goto e;

    }
    if(h[1]==word)   //condition
    {
    printf("\nNot again");
    printf("\n\t\t\t\tScore =%d",score);
   j--;
   goto e;

    }
  if(h[2]==word)     //condition
    {
	   printf("\nNot again");
    printf("\n\t\t\t\tScore =%d",score);
   j--;
   goto e;

    }


   if(words3[i][0]==word)      //condition
   {
   enter=1;
   h[0]=word;
   }


 if(words3[i][1]==word)        //condition
   {
   enter=1;
   h[1]=word;
   }

 if(words3[i][2]==word)        //condition
   {
   enter=1;
   h[2]=word;
   }



 if(enter==1)                  //condition
    {
    printf("\n\nGOOD! NEXT");
    score++;
    printf("\n\t\t\t\tScore =%d",score);
    }

   else
   {
 printf("\n\nTRY AGAIN !");    //condition
 a++;
 j--;
 hangman(a,score);
 }



 if(a==5)                      //if hangman 5th steps return
  {
   clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t TOTAL SCORE : %d ",score);
      delay(500);
    clrscr();
 printf(" ");
      delay(500);
      clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t TOTAL SCORE : %d ",score);
      delay(500);
    clrscr();
 printf(" ");
      delay(500);
	     clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t TOTAL SCORE : %d ",score);
      delay(1000);
  clrscr();
return 0;
}

e:
} //end of inner loop
 clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t LOADING ");
      delay(500);
      printf("..");
 printf("\n\n\n\t\t\t   J");
 delay(100);
 printf("U");
 delay(100);
 printf("M");
 delay(100);
 printf("P"); delay(100);    printf("I"); delay(100);  printf("N"); delay(100);       printf("G"); delay(100);           printf(" T"); delay(100);  printf("O"); delay(100);  printf(" L"); delay(100); printf("E"); delay(100); printf("V"); delay(100); printf("E");delay(100); printf("L"); delay(100);      printf(" %d",i+2); delay(100);
clrscr();
h[0]='_'; h[1]='_'; h[2]='_'; h[3]='_'; h[4]='_';
}                    //end of outer loop
break;
case 2:

 clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t LOADING ");
      delay(500);
      printf("..");

      delay(500);
      printf("..");

      delay(500);
      printf("..");

      delay(500);
      printf("...");
clrscr();
for(i=0;i<11;i++)
{
  printf("\n LEVEL %d ! GUESS THE LETTER   ",i+1);
   enter=0;
   a=1;

for(j=0;j<4;j++)
 {
    enter=0;
 printf("\n%c %c %c %c",h[0],h[1],h[2],h[3]);
 printf("\n\nENTER LETTER  \t");
 word=getche();
 if(word>=41&&word<=90)
 word+=32;
    if(h[0]==word)
    {
    printf("\nNot again");
    printf("\n\t\t\t\tScore =%d",score);
   j--;
   goto en;

    }
    if(h[1]==word)
    {
    printf("\nNot again");
    printf("\n\t\t\t\tScore =%d",score);
   j--;
   goto en;

    }
  if(h[2]==word)
    {
	   printf("\nNot again");
    printf("\n\t\t\t\tScore =%d",score);
   j--;
   goto en;

    }
  if(h[3]==word)
    {
   printf("\nNot again");
   printf("\n\t\t\t\tScore =%d",score);
   j--;
   goto en;

    }



   if(words4[i][0]==word)
   {
   enter=1;
   h[0]=word;
   }


 if(words4[i][1]==word)
   {
   enter=1;
   h[1]=word;
   }

 if(words4[i][2]==word)
   {
   enter=1;
   h[2]=word;
   }

 if(words4[i][3]==word)
   {
   enter=1;
   h[3]=word;
   }



 if(enter==1)
    {
    printf("\n\nGOOD! NEXT");
    score++;
    printf("\n\t\t\t\tScore =%d",score);
    }

   else
   {
 printf("\n\nTRY AGAIN !");
 a++;
 j--;
 hangman(a,score);
 }



 if(a==5)
  {

     clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t TOTAL SCORE : %d ",score);
      delay(500);
    clrscr();
 printf(" ");
      delay(500);
      clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t TOTAL SCORE : %d ",score);
      delay(500);
    clrscr();
 printf(" ");
      delay(500);
	     clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t TOTAL SCORE : %d ",score);
      delay(1000);
clrscr();
return 0;
  }
en:
}       //end of inner loop
 clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t LOADING ");
      delay(500);
      printf("..");
 printf("\n\n\n\t\t\t   J");
 delay(100);
 printf("U");
 delay(100);
 printf("M");
 delay(100);
 printf("P"); delay(100);    printf("I"); delay(100);  printf("N"); delay(100);       printf("G"); delay(100);           printf(" T"); delay(100);  printf("O"); delay(100);  printf(" L"); delay(100); printf("E"); delay(100); printf("V"); delay(100); printf("E");delay(100); printf("L"); delay(100);      printf(" %d",i+2); delay(100);

clrscr();
h[0]='_'; h[1]='_'; h[2]='_'; h[3]='_'; h[4]='_';
}                          //end of outer loop

break;
case 3:
 clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t LOADING ");
      delay(500);
      printf("..");

      delay(500);
      printf("..");

      delay(500);
      printf("..");

      delay(500);
      printf("...");
clrscr();
for(i=0;i<11;i++)
{
  printf("\n LEVEL %d ! GUESS THE LETTER   ",i+1);
   enter=0;
   a=0;

for(j=0;j<5;j++)
 {
    enter=0;
 printf("\n%c %c %c %c %c",h[0],h[1],h[2],h[3],h[4]);
 printf("\n\nENTER LETTER  \t");
 word=getche();
 if(word>=41&&word<=90)
 word+=32;
    if(h[0]==word)
    {
    printf("\nNot again");
    printf("\n\t\t\t\tScore =%d",score);
   j--;
   goto end;

    }
    if(h[1]==word)
    {
    printf("\nNot again");
    printf("\n\t\t\t\tScore =%d",score);
   j--;
   goto end;

    }
  if(h[2]==word)
    {
	   printf("\nNot again");
    printf("\n\t\t\t\tScore =%d",score);
   j--;
   goto end;

    }
  if(h[3]==word)        //if word enterd before j--
    {
   printf("\nNot again");
   printf("\n\t\t\t\tScore =%d",score);
   j--;
   goto end;

    }
  if(h[4]==word)
    {
    printf("\nNot again");
    printf("\n\t\t\t\tScore =%d",score);
    j--;
   goto end;
     }


   if(words5[i][0]==word)
   {
   enter=1;
   h[0]=word;
   }


 if(words5[i][1]==word)
   {
   enter=1;
   h[1]=word;
   }

 if(words5[i][2]==word)
   {
   enter=1;
   h[2]=word;
   }

 if(words5[i][3]==word)
   {
   enter=1;
   h[3]=word;
   }
 if(words5[i][4]==word)
   {
   enter=1;
   h[4]=word;
   }


 if(enter==1)
    {
    printf("\n\nGOOD! NEXT");
    score++;
    printf("\n\t\t\t\tScore =%d",score);
    }

   else
   {
 printf("\n\nTRY AGAIN !");
 a++;
 j--;
 hangman(a,score);
 }



 if(a==5)
  {


     clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t TOTAL SCORE : %d ",score);
      delay(500);
    clrscr();
 printf(" ");
      delay(500);
      clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t TOTAL SCORE : %d ",score);
      delay(500);
    clrscr();
 printf(" ");
      delay(500);
	     clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t TOTAL SCORE : %d ",score);
      delay(1000);
return 0;
  }
end:
}
 clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t LOADING ");
      delay(500);
      printf("..");
 printf("\n\n\n\t\t\t   J");
 delay(100);
 printf("U");
 delay(100);
 printf("M");
 delay(100);
 printf("P"); delay(100);    printf("I"); delay(100);  printf("N"); delay(100);       printf("G"); delay(100);           printf(" T"); delay(100);  printf("O"); delay(100);  printf(" L"); delay(100); printf("E"); delay(100); printf("V"); delay(100); printf("E");delay(100); printf("L"); delay(100);      printf(" %d",i+2); delay(100);

clrscr();
h[0]='_'; h[1]='_'; h[2]='_'; h[3]='_'; h[4]='_';
}
break;
case 4:
goto start;
break;
}
break;
case 'i':
case 'I':
      clrscr();
      inst();     //instructions
      break;

case 'c':
case 'C':
credits();            //credits
break;
default:
printf("\n\n\t\tINVALID SELECTION\n\n");
}
}while(ch);
getch();
}
