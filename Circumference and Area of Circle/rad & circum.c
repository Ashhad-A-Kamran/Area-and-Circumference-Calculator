int main() {
double a,r,area,circumference;
printf("Enter the radius of the circle");
scanf("%lf", &r);

a = 3.14159265358979323846;
area = a * r * r;
circumference = 2 * a * r;

printf("Area: %lf\n", area);
printf("Circumference: %lf", circumference);



   return 0;
}
