#include <stdio.h>

int bolum(int a, int b)
{
    if (b == 0)
    {
        printf("Hata: bolum sifira bolunemez.\n");
        return -1;
    }
    if (a < b)
    {
        return 0;
    }
    int k = 1, bb = b;
    while ((bb + bb) <= a)
    {
        k += k;
        bb += bb;
    }
    return k + bolum(a - bb, b);
}

int main()
{
    int a, b;
    printf("a sayisini girin: ");
    scanf("%d", &a);
    printf("b sayisini girin: ");
    scanf("%d", &b);
    int sonuc = bolum(a, b);
    if (sonuc >= 0)
    {
        printf("%d / %d = %d\n", a, b, sonuc);
    }
    return 0;
}
