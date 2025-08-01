#include <stdio.h>
#include <math.h>

int main() {
    double theta_deg=45;
    double theta_rad= theta_deg * (M_PI / 180);
    double ratio;
    ratio= 1 / sin(theta_rad);

    printf("The ratio of slit width to wavelength for first minimum at 45 degrees is: %.4f\n", ratio);

    return 0;

}
