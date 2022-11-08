#pragma warning(disable: 4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void) {
	char str1[101], str2[101], str3[101][50], str4[101][50];
	char res[251] = { 0 }, * p;
	int i, j, N1, N2, N3, N4, T, flag;

	gets(str1);
	gets(str2);

	N1 = strlen(str1);
	p = str1;
	for (i = 0, N3 = 0; i <= N1; i++) {
		if (str1[i] == ' ' || str1[i] == '\0') {
			str1[i] = '\0';
			strcpy(str3[N3], p);
			p = str1 + i + 1;
			N3++;
		}
	}

	N2 = strlen(str2);
	p = str2;
	for (i = 0, N4 = 0; i <= N2; i++) {
		if (str2[i] == ' ' || str2[i] == '\0') {
			str2[i] = '\0';
			strcpy(str4[N4], p);
			p = str2 + i + 1;
			N4++;
		}
	}

	T = 0;
	for (i = 0; i < N3; i++) {
		flag = 0;
		for (j = 0; j < i; j++) {
			if (strcmp(str3[i], str3[j]) == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			strcat(res, str4[T]);
			strcat(res, " ");
			T++;
		}
		else {
			strcat(res, str3[i]);
			strcat(res, " ");
		}
	}

	printf("%s\n", res);
	return 0;
}

