#include <stdio.h>

int smallest_index(int a[], int n)
{
	int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
            return min;
}


int main()
{
    int a[10000], n, i = 0;
    printf("Tong so phan tu trong mang la : ");
    scanf("%d",&n);
    printf("Nhap Cac phan tu trong mang : \n");
    do {
        scanf("%d",&a[i]);
        i++;
        
    } while (i < n);
    printf("Phan tu nho nhat trong mang : %d", smallest_index(a, n));
    return 0;
}
