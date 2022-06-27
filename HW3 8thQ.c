#include <stdio.h>
#include <math.h>

double Diameter(double radius);
double Circumference(double radius);
double Area(double radius);

int main() 
{
    float radius, dia, circ, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    dia  = Diameter(radius);
    circ = Circumference(radius);
    area = Area(radius); 
    
    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area);
    
    return 0;
}

double Diameter(double radius) 
{
    return (2 * radius);
}

double Circumference(double radius) 
{
    return (2 * M_PI * radius); 
}

double Area(double radius)
{
    return (M_PI * radius * radius);
}
