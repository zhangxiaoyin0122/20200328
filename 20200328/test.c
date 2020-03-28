#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n = 0;
	while (~scanf("%d", &n)) {
		if (n % 2 == 0) {
			printf("Even\n");
		}
		else {
			printf("Odd\n");
		}
	}
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n = 0;
	while (~scanf("%d", &n)) {
		if (n >= 140) {
			printf("Genius\n");
		}
	}
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n = 0;
	while (~scanf("%d", &n)) {
		if (n >= 90 && n <= 100) {
			printf("Perfect\n");
		}
	}
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n = 0;
	while (~scanf("%d", &n)) {
		if (n % 2 == 0) {
			printf("Even\n");
		}
		else {
			printf("Odd\n");
		}
	}
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, k, tmp;
	while (~scanf("%d %d %d", &i, &j, &k)) {
		if (i > j) {
			tmp = i;
		}
		else {
			tmp = j;
		}
		if (k > tmp) {
			tmp = k;
		}
		printf("%d\n", tmp);
	}
	system("pause");
	return 0;
}
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int removeElement(int* nums, int numsSize, int val) {
	int* numA = (int*)malloc(sizeof(int)* numsSize);
	int idx = 0;
	for (int i = 0; i < numsSize; i++) {
		if (nums[i] != val) {
			numA[idx++] = nums[i];
		}
	}
	memcpy(nums, numA, sizeof(int)*idx);
	free(numA);
	return idx;
	}
int main() {
	int nums[] = { 0,1,2,2,3,0,4,2};
 	int ret =removeElement(nums, sizeof(nums) / sizeof(nums[0]), 2);
	printf("%d", ret);
	system("pause");
	return 0;
}
1 2 2 3 3 3 4 4
#include <stdio.h>
#include <stdlib.h>
int removeDuplicates(int* nums, int numsSize) {
	int idx = 0;
	int i = 0;
	int j = 1;
	while (j < numsSize) {
		nums[idx++] = nums[i];
		if (nums[i] != nums[j]) {
			i++;
			j++;
		}
		else {
			while (j < numsSize && nums[i] == nums[j]) {
				j++;
			}
				i = j;
				j++;
		}
	}
	if (i < numsSize) {
		nums[idx++] = nums[i];
	}
	return idx;
}
int main() {
	int nums[] = { 0,1,1,2,2,2,3,4,4,5 };
	int ret = removeDuplicates(nums, sizeof(nums) / sizeof(nums[0]));
	printf("%d", ret);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n = 0;
	scanf("%d", &n);
	int str[30][30] = { 0 };
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (i == 1 || i == j) {
					str[i][j] = 1;
			}
			else {
				str[i][j] = str[i - 1][j - 1] + str[i - 1][j];
			}
			printf("%5d ", str[i][j]); //Óò¿íÎª5
		}
			printf("\n");
	}
	system("pause");
	return 0;
}

