#include <bits/stdc++.h>

using namespace std;

typedef struct {
	int distance;
	int nextHop;
} edge;

edge matriks[1010][1010];

void print (int n) {
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			printf("%d:%d ", matriks[i][j].distance, matriks[i][j].nextHop);
		}
		printf("\n");
	}
}

int main() {
	int n, m, i, u, v;
	
	for (int i=1; i<=1000; i++) {
		for (int j=1; j<=1000; j++) {
			if (i == j) {
				matriks[i][j].distance = 0;
				matriks[i][j].nextHop = i;
			} else {
				matriks[i][j].distance = INT_MAX;
				matriks[i][j].nextHop = -1;
			}
		}
	}
	
	scanf("%d %d", &n, &m);
	
	for (i=1; i<=m; i++) {
		scanf("%d %d", &u, &v);
		matriks[u][v].distance =  1;
		matriks[u][v].nextHop = v;
		matriks[v][u].distance = 1;
		matriks[v][u].nextHop = u;
	}
	
	print(n);
	return 0;
}
