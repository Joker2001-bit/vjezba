#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {

	int k, m, i;
	int m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
	int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0;
	scanf("%d\n", &k);
	for (i=1; i<=k; i++){
		scanf("%d\n", &m);

		if (m == 1){  //prva
			m1++;
			d1 = 1;
			d5 = 0;
			d2 = 0;
		}
		if (m == 2){
			m2++;
			d2 = 1;
			d1 = 0;
			d3 = 0;
		}
		if (m == 3){
			m3++;
			d3 = 1;
			d2 = 0;
			d4 = 0;
		}
		if (m == 4){
			m4++;
			d4 = 1;
			d3 = 0;
			d5 = 0;
		}
		if (m == 5){
			m5++;
			d5 = 1;
			d4 = 0;
			d1 = 0;
		}

		if (m!=1 && d1 == 1){    //druga
			m1++;
		}
		if (m!=2 && d2 == 1){
			m2++;
		}
		if (m!=3 && d3 == 1){
			m3++;
		}
		if (m!=4 && d4 == 1){
			m4++;
		}
		if (m!=5 && d5 == 1){
			m5++;
		}

	}

	printf("%d %d %d %d %d", m1, m2, m3, m4, m5);

    return 0;
}