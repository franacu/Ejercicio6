#include <stdio.h>
int suma(int *x,int *y)
{
    int s;
    s=(*x)+(*y);
    printf("La suma es:%d",s);
}
int producto(int *x,int *y)
{
    int p;
    p=(*x)*(*y);
    printf("El producto es:%d",p);
}

int main()
{
    int a,b;
    printf("Ingresar valores de a:\n");
    scanf("%d",&a);
    printf("Ingresar valores de b:\n");
    scanf("%d",&b);
    suma(&a,&b);
    producto(&a,&b);
    return 0;
}