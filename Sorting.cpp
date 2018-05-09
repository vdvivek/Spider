//Selection Sort//
#include <stdio.h>

int main()
{
   int n, x, y, z, w;
 
   printf("Enter number of elements\n");
   scanf("%d", &n);
   int a[n];
   
   printf("Enter %d integers\n", n);
 
   for ( x = 0 ; x < n ; x++ )
      scanf("%d", &a[x]);
 
   for ( x = 0 ; x < ( n - 1 ) ; x++ )
   {
      z = x;
 
      for ( y = x + 1 ; y < n ; y++ )
      {
         if ( a[z] > a[y] )
            z = y;
      }
      if ( z != x )
      {
         w = a[x];
         a[x] = a[z];
         a[z] = w;
      }
   }
 
   printf("\nSorted list in ascending order:\n");
 
   for ( x = 0 ; x < n ; x++ )
      printf("%d\n", a[x]);
 
   return 0;
}
