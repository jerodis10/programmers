#include<iostream>
#include<string>
using namespace std;

int main(){
	int testCase;
	scanf("%d\n", &testCase);
	for (int t = 1; t <= testCase; t++) {
		int n;
		scanf("#%d %d\n", &t, &n);
		int arr[10] = { 0, };
		for (int i = 0; i < n; i++) {
			char tmp[5] = { 0, };
			scanf("%s", tmp);
			if (tmp[0] == 'Z')
				arr[0]++;
			else if (tmp[0] == 'O')
				arr[1]++;
			else if (tmp[0] == 'T'&&tmp[1] == 'W')
				arr[2]++;
			else if (tmp[0] == 'T'&&tmp[1] == 'H')
				arr[3]++;
			else if (tmp[0] == 'F'&&tmp[1] == 'O')
				arr[4]++;
			else if (tmp[0] == 'F'&&tmp[1] == 'I')
				arr[5]++;
			else if (tmp[0] == 'S'&&tmp[1] == 'I')
				arr[6]++;
			else if (tmp[0] == 'S'&&tmp[1] == 'V')
				arr[7]++;
			else if (tmp[0] == 'E')
				arr[8]++;
			else if (tmp[0] == 'N')
				arr[9]++;
		}
			printf("#%d\n", t);
			for (int i = 0; i < arr[0]; i++) {
				printf("ZRO ");
			}
			for (int i = 0; i < arr[1]; i++) {
				printf("ONE ");
			}
			for (int i = 0; i < arr[2]; i++) {
				printf("TWO ");
			}
			for (int i = 0; i < arr[3]; i++) {
				printf("THR ");
			}
			for (int i = 0; i < arr[4]; i++) {
				printf("FOR ");
			}
			for (int i = 0; i < arr[5]; i++) {
				printf("FIV ");
			}
			for (int i = 0; i < arr[6]; i++) {
				printf("SIX ");
			}
			for (int i = 0; i < arr[7]; i++) {
				printf("SVN ");
			}
			for (int i = 0; i < arr[8]; i++) {
				printf("EGT ");
			}
			for (int i = 0; i < arr[9]; i++) {
				printf("NIN ");
			}
			printf("\n");
	}
	return 0;
}
	
