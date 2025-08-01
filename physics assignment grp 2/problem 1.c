#include <stdio.h>
#include <math.h>

int main() {
    double lambda, theta_deg, d, theta_rad, m;

    printf("Enter wavelength (nm): ");
    scanf("%lf", &lambda);

    if (lambda < 380 || lambda > 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return 0;
    }

   
