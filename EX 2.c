#include <stdio.h>
float  Distancia(float a, float b){
if (a == 0){
    return b;
}
if (b == 0){
    return a;
}
else{
    return sqrt((a * a) + (b * b));
}
}
int main (){
float x1, x2, y1, y2, Dist,ytot, xtot;
printf ("Digite o x1:");
scanf ("%f", &x1);
fflush(stdin);
printf ("Digite o x2:");
scanf ("%f", &x2);
fflush(stdin);
printf ("Digite o y1:");
scanf ("%f", &y1);
fflush(stdin);
printf ("Digite o y2:");
scanf ("%f", &y2);
fflush(stdin);
xtot = (float)x1 - x2;
ytot = (float)y1 - y2;
if (xtot < 0){
    xtot *= -1;
}
if (ytot < 0){
    ytot *= -1;
}
Dist = Distancia(xtot, ytot);
printf("A distancia e: %.2f", Dist);
return 0;
}
