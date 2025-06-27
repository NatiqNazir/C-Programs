#include <stdio.h>

int main() {
    float side, radius, base, height;
    float area_square, area_circle, area_triangle;

    printf("Enter side of square: ");
    scanf("%f", &side);
    area_square = side * side;
    printf("Area of square is = %.2f\n", area_square);

    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area_circle = 3.14 * radius * radius;
    printf("Area of circle is = %.2f\n", area_circle);

    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    area_triangle = 0.5 * base * height;
    printf("Area of triangle is = %.2f\n", area_triangle);

    return 0;
}
