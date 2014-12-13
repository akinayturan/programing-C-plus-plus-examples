#include <iostream>
#include <conio.h>
#include <time.h>
#include <d_random.h>

   int main()
   {
   randomNumber rastgele;
   int iAtis, sAtis;
   
   iAtis = ((1+rastgele.random(6))+(1+rastgele.random(6)));
   
   if(iAtis==2||iAtis==3||iAtis==12)
      cout<< "Ilk Atis " << iAtis << " Kasa Kazandi" << endl;
   else if(iAtis==7||iAtis==11)
      cout<< "Ilk Atis " << iAtis << " Oyuncu Kazandi" << endl;
   else {
      cout<< "gelen zar " << iAtis << " atis devam ediyor "<< endl;   
      do { 
         sAtis = ((1+rastgele.random(6))+(1+rastgele.random(6)));
         cout<< "Sonraki Atis " << sAtis << endl;   
      }while(sAtis!=7&&sAtis!=iAtis);
      if(sAtis==7) cout << "Kasa Kazandi " << endl;
      else cout << "Oyuncu Kazandi " << endl;
   }
   
   getch();
   return 0;
   }
