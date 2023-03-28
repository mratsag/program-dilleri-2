#include <stdio.h>

double kuvvet(double taban, int us)
{
    if (us == 0)
    {
        return 1;
    }
    else if (us > 0)
    {
        return taban * kuvvet(taban, us - 1);
    }
    else
    {
        return 1 / kuvvet(taban, -us);
    }
}

int main()
{
    double taban;
    int us;
    printf("Taban sayisini girin: ");
    scanf("%lf", &taban);
    printf("Us degerini girin: ");
    scanf("%d", &us);
    double sonuc = kuvvet(taban, us);
    printf("%.2lf^%d = %.2lf\n", taban, us, sonuc);
    return 0;
}
