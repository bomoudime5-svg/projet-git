#include <stdio.h>


int main(){
int n ,x ,somme=0,cpt=0;
float moy
do{
    printf("saisir un entier");
    scanf("%d",&n);
}while(n<0);
for(i=0;i<n;i++){
    do{
        puts("veuillez saisir un entier negatif");
        scanf("%d",&x);

    }while(x>0);
    if(x%2==0){
        somme=somme+x;
        cpt++;
    }
}
moy=somme/cpt;
}

