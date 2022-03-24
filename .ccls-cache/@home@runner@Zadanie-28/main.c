#include <stdio.h>

int main(void) {
  int k;
  int n;
  int sk;
  int sn;
  int snk;
  int c=n-k;
  int newton;
  printf("Wprowadź n: ");
  scanf("%d",&n);
  printf("Wprowadź k: ");
  scanf("%d",&k);
  sk=1;
  for (int i=1; i<=k; i++){
    sk=sk*i;
  }
  printf("Silnia to: %d",sk);
  sn=1;
  for (int i=1; i<=n; i++){
    sn=sn*i;
  }
  printf("Silnia n to: %d",sn);
  snk=1;
  for (int i=1; i<=c; i++){
    snk=snk*i;
  }
  printf("Silnia to: %d",snk);
  newton=sn/(sk*snk);
  printf("Symbol Newtona wynosi: ",)


  return 0;
}