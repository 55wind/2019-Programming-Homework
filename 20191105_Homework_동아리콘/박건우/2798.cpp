#include <stdio.h>
int n, m;
int black[100];
int a;
int i, j, z;
int cnt;
int main()
{
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &black[i]);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			for (z = 0; z < n; z++) {
				if (i != j && j != z && z != i)
				{
					cnt = black[i] + black[j] + black[z];
					if (cnt <= m && a < cnt)
						a = cnt;
				}
			}
		}
	}
	printf("%d", a);
	return 0;
}