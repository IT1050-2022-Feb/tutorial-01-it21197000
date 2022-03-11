/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int dis,rDis;
  float amount,rAmount,dAmount;
  
  printf("Enter the Distance:");
  scanf("%d", &dis);

  if(dis<30){
    amount= 50.0*dis;
  }
  else{
    rDis=dis-30;
    dAmount=30*50;
    rAmount=rDis*40;
    
    amount= dAmount+rAmount;
    
  }
  printf("The amount is:%.2f", amount);
  
  return 0;
}//end of function main
