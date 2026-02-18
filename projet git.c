#include <stdio.h>


int main(){
int n ,x ,i,somme=0,cpt=0,cpt2=0;//le compteur de nombre pair//
float moyenne;
do{
    printf("saisir un entier");
    scanf("%d",&n);
}while(n<0);
for(i=0;i<n;i++){
    do{
        puts("saisir un entier negatif");
        scanf("%d",&x);

    }while(x>0);
    if(x%2==0){
        somme=somme+x;
        cpt++;
    }else{
    cpt2++;
    }
}
moyenne=(float)somme/cpt;
printf("\n la moyenne est de : 1.%f\n", moyenne);
printf("le nombre de nombre impair est: %d",cpt2);
}

