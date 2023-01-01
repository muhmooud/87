#include <stdio.h>
#include <cs50.h>
void hello( void){ printf("HELLO.WORLD\n");}
void folder(float t){ printf("%f\n",t);}
void hitman( int z){ printf("%i\n",z);}
void joker(long e){ printf("%ld\n",e);}
void rami();
float discount(float price, int percent);
void sum( int uj , float op){float name76 = uj + op; printf(".2%f\n",name76);}
float discount2(float argument);
float discount3(float argument2,int percent1);
int main (void){
printf("HELLO.WORLD\n");
printf("hello world\n");
printf("HELLO.WORLD\n");
printf("HELLO.WORLD\n");
printf("HELLO.WORLD\n");
string answer= get_string("what's your name?");
printf("hello,%s\n",answer);
int x=18;
printf("I am,%d\n",x);
float a=4.5;
printf("I am,%f\n",a);
double g=0.11176;
printf("I am,%f\n",g);
char j='a';
printf("hello,%c\n",j);
long k=786786;
printf("hello,%ld\n",k);
int num1=4;
int num2=5;
printf("%d \n%d\n",num1 ,num2);
int num3=77;
int num4=76;
printf( "%d\n",num3+num4);
int num5=55;
int num6=11;
printf("%d\n",num5/num6);
int num7=59;
int num8=2;
printf("%d\n",num7*num8);
int num9=59;
int num10=2;
printf("%d\n",num9%num10);
int num11=1;
printf("%d\n",++num11);
printf("%d\n",--num11);
printf("%d\n",num11 +3);
int num12=66;
num12-=7;
printf("%d\n",num12);
long num13 = get_long(" enter your number here:");
long result = num13;
printf("%li\n",result);
int num14 = get_int(" enter your number secand here:");
int result2 = num14;
printf("%i\n",result2);
int m = get_int("m:");
int r = get_int("r:");
if(m > r){printf("m is not less than r\n");}
else if(m < r){printf("m is less than r\n");}
else if(m == r){printf("m=r\n");}
int n = get_int("n:");
if(n % 2 == 0){ printf("even\n");}
else{printf("odd\n");}
char c = get_char("DO YOU AGREE?");
if( c == 'y' || c == 'Y' )
{printf("Agreed\n");}
else if( c == 'n'||c == 'N' ){ printf("NOT AGREE\n");}
int p = 2 ;
while(p <= 3){ printf("asadi\n");p +=1;}
for(int b = 1 ;b <= 3;b++){ printf("meow\n");}
for(int v = 0 ;v <= 10;v += 2){ printf("%i\n",v);}
hello();
hello();
folder(1.5);
hitman(56);
joker(878967968098);
float regular = get_float("regular price:");
float sale = regular * .85;
printf("%.2f\n",sale);
float regular1 = get_float("regular price 1:");
int percent = get_int( "percent of:");
float sale2 = discount(regular1, percent);
printf(" sale price = %.2f\n ",sale2);
sum(87,6.5);
sum(54,7.4);
float original = get_float("orginal price:");
float sale1 = discount2(original);
printf(" sale price = %.1f\n", sale1);
float original2 = get_float("orginal price1:");
int percent1 = get_int( "percent of1:");
float sale3 = discount3(original2, percent1);
printf("sale price = %.1f\n", sale3);
int count =  -100;
while(count < 1){count = get_int("count:");}
for( int w = 0; w < count; w++){ printf("?");} printf("\n");
int count1;
do{count1 = get_int("count1:");}while(count1 < 1);
for(int wk = 0; wk < count1; wk++){ printf("?");} printf("\n");
int count2;
do{count2 = get_int("count2:");}while(count2 < 1);
for(int wf = 0; wf < count2; wf++){for(int hg = 0; hg < count2;hg++){ printf("#");} printf("\n");z}
for(int wf = 0; wf < count2; wf++){for(int hg = 0; hg < count2;hg++){ printf("#");} printf("\n");}



}
float discount( float price, int percent){return price * (100-percent)/100;}
float discount2(float argument){float any = argument * .66;return any;}
float discount3(float argument2, int percent1){float any1 = argument2 * (100-percent1)/100;return any1;
