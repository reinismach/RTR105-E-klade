#include <stdio.h>
#include <math.h>

void main()
{
    float a=0., b=M_PI/2, eps=1.e-3, h, integr1=0., integr2;
    int k, n=2;

    integr2 = (b-a)*(sin(a/2)+sin(b/2))/n;
    while(fabs(integr2-integr1)>eps)
    {
        n *= 2;
        h = (b-a)/n;
        integr1 = integr2;
        integr2 = 0;
        for(k=0 ; k<n ; k++)
        integr2 += h*sin((a+(k+0,5)*h)/2);
    }
    printf("Integrāļa vērtība: %.2f\n", integr2);
}