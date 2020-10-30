#include <stdio.h>
int main(void) {
int i,j,k;
int A[6][4],B[4][5]; //For Real Program !!!
int Sum[6][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},};
 printf("\n\tProgram for Odd Number !!!\n\n");
for(i=0;i<6;i++) {
 printf("Data A[%d][0-3]\n",i);
for(j=0;j<4;j++) {
 printf("\tA[%d][%d] : ",i,j);
 scanf("%d",&A[i][j]);
 }
 printf("\n");
 }
for(i=0;i<4;i++) {
 printf("Data B[%d][0-4]\n",i);
for(j=0;j<5;j++) {
 printf("\tB[%d][%d] : ",i,j);
 scanf("%d",&B[i][j]);
 }
 printf("\n");
 }
//Show Value Input !!!
 printf("Number A[6][4]\n");
for(i=0;i<6;i++) {
for(j=0;j<4;j++) {
 printf("%-3d ",A[i][j]);
 }
 printf("\n");
 }
 printf("\nNumber B[4][5]\n");
for(i=0;i<4;i++) {
for(j=0;j<5;j++) {
 printf("%-3d ",B[i][j]);
 }
 printf("\n");
 }
//Program Calculate Matrix !!!
for(i=0;i<6;i++) {
for(j=0;j<5;j++) {
for(k=0;k<4;k++) {
 Sum[i][j] += (A[i][k] * B[k][j]);
 }
 }
 }
//Show Output Answer !!!
 printf("\n\n\t##### Answer #####\n\n");
for(i=0;i<6;i++) {
for(j=0;j<5;j++) {
 printf("\t%-5d",Sum[i][j]);
 }
 printf("\n");
 }
return 0;
}