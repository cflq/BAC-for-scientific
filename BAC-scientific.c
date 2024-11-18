#include <stdio.h>
#include <math.h> // idk why do i add it but just in case, since it wont effect anyway

int main()
{

 float mth , phy , sci , eng , arb , frc , hg , phi , slm , spt , total , avg;

      printf("maths : ");
      scanf("%f", &mth);
      
      if (mth > 20 || mth < 0)
      {
        printf("error, please enter a number between 0 and 20");
        return 1;
      }
      else
      printf("physics : ");
      scanf("%f", &phy);
      
      if (phy > 20 || phy < 0)
      {
        printf("error, please enter a number between 0 and 20");
        return 1;
      }
      else
      printf("science : ");
      scanf("%f", &sci);
      
      if (sci > 20 || sci < 0)
      {
        printf("error, please enter a number between 0 and 20");
        return 1;
      }
      else
      printf("english : ");
      scanf("%f" , &eng);
      
      if (eng > 20 || eng < 0)
      {
        printf("error, please enter a number between 0 and 20");
       return 1;
      }
      else
      printf("arabic : ");
      scanf("%f" , &arb);
      
      if (arb > 20 || arb < 0)
      {
        printf("error, please enter a number between 0 and 20");
        return 1;
      }
      else
      printf("french : ");
      scanf("%f" , &frc);
      
      if (frc > 20 || frc < 0 )
      {
        printf("error, please enter a number between 0 and 20");
        return 1;
      }
      else
      printf("his & geo : ");
      scanf("%f" , &hg);
      
      if (hg > 20 || hg < 0)
      {
        printf("error, please enter a number between 0 and 20");
       return 1;
      }
      else
      printf("philosophy : ");
      scanf("%f" , &phi);
      
      if (phi > 20 || phi < 0)
      {
        printf("error, please enter a number between 0 and 20");
        return 1;
      }
      else
      printf("islamic : ");
      scanf("%f" , &slm);
      
      if (slm > 20 || slm < 0)
      {
        printf("error, please enter a number between 0 and 20");
        return 1;
      }
      else
      printf("sport : ");
      scanf("%f" , &spt);
      
      if (spt > 20 || spt < 0)
      {
        printf("error, please enter a number between 0 and 20");
        return 1;
      }
      else
      
      total = (mth * 5 ) + (phy * 5 ) + (sci * 6 ) + ( arb * 3 ) + ( eng * 2 ) + ( frc * 2 ) + (hg * 2 ) + ( phi * 2 ) + ( slm * 2 ) + (spt * 1 );
      avg = ( total/ 30);
 
      printf("\nyour general average is : %f",  avg );
      
      if ( avg >= 10)
            {
                 printf("\n\ncongranulations, you passed !");
            }
      else 
                 printf("\nunfortunately,  you didn't pass.\ngood luck for the next time !");
                 
      if (avg >=  10 && avg <13) 
      {
      printf("\n\nNote : acceptable");
      }
      else
      if (avg >= 13 && avg < 15)
      {
      printf("\n\nnote : good");
      }
      else 
      if (avg >= 15 && avg < 17)
      {
      printf("\n\nnote : very good");
      }
      else
      if (avg >= 17 &&  avg < 20)
      {
      printf("\n\nnote : excellent");
      }
      return 0;
}