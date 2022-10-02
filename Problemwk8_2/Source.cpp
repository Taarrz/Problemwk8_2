#include <stdio.h>
int num[100][100];
int checknextnumber(int *i, int *j);
int main()
{
    int n;
    int sum = 0;
    printf("Enter the number of rows \n");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
        {
            scanf_s("%d", &num[i][j],sizeof(num));
        }

    }
    sum = num[0][0];
    int runrow = 0,runcolumn=0;
    while (runrow < n) {
       int k = checknextnumber(&runrow, &runcolumn);
       sum = sum + k;
    }
    printf("%d", sum);
    return 0;
}

int checknextnumber(int *i, int *j) {
    if (num[*i + 1][*j] > num[*i + 1][*j+1]) {
        *i = *i + 1;
        return num[*i][*j];
    }
    else {
        *i = *i + 1;
        *j = *j + 1;
        return num[*i][*j];
    }
}