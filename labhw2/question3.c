#include <stdio.h>

int carpim(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    else if (b > 0)
    {
        int toplam = a;
        for (int i = 1; i < b; i++)
        {
            toplam += a;
        }
        return toplam;
    }
    else
    {
        return -carpim(a, -b);
    }
}

int main()
{
    int a, b;
    printf("a sayisini girin: ");
    scanf("%d", &a);
    printf("b sayisini girin: ");
    scanf("%d", &b);
    int sonuc = carpim(a, b);
    printf("%d * %d = %d\n", a, b, sonuc);
    return 0;
}
