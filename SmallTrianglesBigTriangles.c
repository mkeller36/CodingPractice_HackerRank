#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
int calc_area(triangle* tr, int i){
	// use double for increased accuracy 
    double a,b,c;
    a = tr[i].a;
    b = tr[i].b;
    c = tr[i].c;
    double p = (a + b + c)/2;
    double s = (p*(p-a)*(p-b)*(p-c));
    return s;
}

void sort_by_area(triangle* tr, int n) {
    /**
    * Sort an array a of the length n
    */
    triangle temp;
    int i, j,ta, tb, tc;
    for(i = 0; i < n; i++){
        for(j = i; j<n;j++){
          if(calc_area(tr, i) > calc_area(tr, j)){
            temp = tr[i];
            tr[i] = tr[j];
            tr[j] = temp;
          }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
