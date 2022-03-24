#include <stdio.h>

int main(void) {
  float k;
  float n;
  float sk;
  float sn;
  float snk;
  float c=n-k;
  float newton;
  printf("Wprowadź n: ");
  scanf("%f",&n);
  printf("Wprowadź k: ");
  scanf("%f",&k);
  if (n<=k){
    printf("Wprowadzono złe dane - k musi być mniejsze od n");
  }
  else
    {sk=1;
      for (int i=1; i<=k; i++){
        sk=sk*i;
      }
    sn=1;
    for (int i=1; i<=n; i++){
      sn=sn*i;
    }
    snk=1;
    for (int i=1; i<=c; i++)
      {snk=snk*i;
      }
  newton=sn/(sk*snk);
  printf("Symbol Newtona wynosi:%.0f ",newton);
    }
  
  return 0;
}