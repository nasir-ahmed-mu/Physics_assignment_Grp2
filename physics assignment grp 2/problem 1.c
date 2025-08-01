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

   printf("Enter angle (in degrees): ");
    scanf("%lf", &theta_deg);

    printf("Enter slit distance d (in micrometers): ");
    scanf("%lf", &d);

    theta_rad = theta_deg * M_PI / 180.0;
    d *= 1e-6;
    lambda *= 1e-9;

    m = (d * sin(theta_rad)) / lambda;
    printf("%.0lf-th order maxima\n", round(m));

    return 0;
}
