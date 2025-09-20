#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define PI 3.14159  // Mathematical constant π

/**
 * Converts a string to lowercase for case-insensitive comparison
 * @param str: String to convert to lowercase
 */
void toLowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Area calculation functions

/**
 * Calculates area of a circle
 * @param radius: Radius of the circle
 * @return: Area of the circle
 */
float circle_area(float radius) {
    return PI * radius * radius;
}

/**
 * Calculates area of a rectangle
 * @param length: Length of the rectangle
 * @param width: Width of the rectangle
 * @return: Area of the rectangle
 */
float rectangle_area(float length, float width) {
    return length * width;
}

/**
 * Calculates area of a triangle
 * @param base: Base length of the triangle
 * @param height: Height of the triangle
 * @return: Area of the triangle
 */
float triangle_area(float base, float height) {
    return 0.5 * base * height;
}

/**
 * Calculates area of a square
 * @param side: Side length of the square
 * @return: Area of the square
 */
float square_area(float side) {
    return side * side;
}

// Volume calculation functions

/**
 * Calculates volume of a sphere
 * @param radius: Radius of the sphere
 * @return: Volume of the sphere
 */
float sphere_volume(float radius) {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

/**
 * Calculates volume of a cube
 * @param side: Side length of the cube
 * @return: Volume of the cube
 */
float cube_volume(float side) {
    return side * side * side;
}

/**
 * Calculates volume of a rectangular prism
 * @param length: Length of the rectangular prism
 * @param width: Width of the rectangular prism
 * @param height: Height of the rectangular prism
 * @return: Volume of the rectangular prism
 */
float rectangular_prism_volume(float length, float width, float height) {
    return length * width * height;
}

/**
 * Calculates volume of a triangular prism
 * @param base: Base length of the triangular face
 * @param height: Height of the triangular face
 * @param length: Length of the prism
 * @return: Volume of the triangular prism
 */
float triangular_prism_volume(float base, float height, float length) {
    return 0.5 * base * height * length;
}

/**
 * Main function - Program entry point
 * Provides user interface for selecting calculation type and shape
 * Handles user input and displays results
 */
int main() {
    printf("Shape Area and Volume Calculator\n");
    printf("===============================\n");
    
    char calculation_type[20];
    printf("Would you like to calculate area or volume? \n - ");
    scanf("%s", calculation_type);
    toLowercase(calculation_type);
    
    if (strcmp(calculation_type, "area") == 0) {
        // Area calculations
        printf("\nArea Calculation\n");
        printf("================\n");
        
        char shape_choice[20];
        printf("Please enter the shape (circle, rectangle, triangle, square): \n - ");
        scanf("%s", shape_choice);
        toLowercase(shape_choice);
        
        if (strcmp(shape_choice, "circle") == 0) {
            float radius;
            printf("\nPlease enter the radius of the circle: \n - ");
            scanf("%f", &radius);
            float area = circle_area(radius);
            printf("\nThe area of the circle is: %.2f\n", area);
        }
        else if (strcmp(shape_choice, "rectangle") == 0) {
            float length, width;
            printf("\nPlease enter the length and width of the rectangle: \n - ");
            scanf("%f %f", &length, &width);
            float area = rectangle_area(length, width);
            printf("\nThe area of the rectangle is: %.2f\n", area);
        }
        else if (strcmp(shape_choice, "triangle") == 0) {
            float base, height;
            printf("\nPlease enter the base and height of the triangle: \n - ");
            scanf("%f %f", &base, &height);
            float area = triangle_area(base, height);
            printf("\nThe area of the triangle is: %.2f\n", area);
        }
        else if (strcmp(shape_choice, "square") == 0) {
            float side;
            printf("\nPlease enter the side length of the square: \n - ");
            scanf("%f", &side);
            float area = square_area(side);
            printf("\nThe area of the square is: %.2f\n", area);
        }
        else {
            printf("\nInvalid shape. Please run the program again and select a valid shape.\n");
        }
    }
    else if (strcmp(calculation_type, "volume") == 0) {
        // Volume calculations
        printf("\nVolume Calculation\n");
        printf("==================\n");
        
        char shape_choice[20];
        printf("Please enter the shape (sphere, cube, rectangular prism, triangular prism): \n - ");
        scanf("%s", shape_choice);
        toLowercase(shape_choice);
        
        if (strcmp(shape_choice, "sphere") == 0) {
            float radius;
            printf("\nPlease enter the radius of the sphere: \n - ");
            scanf("%f", &radius);
            float volume = sphere_volume(radius);
            printf("\nThe volume of the sphere is: %.2f\n", volume);
        }
        else if (strcmp(shape_choice, "cube") == 0) {
            float side;
            printf("\nPlease enter the side length of the cube: \n - ");
            scanf("%f", &side);
            float volume = cube_volume(side);
            printf("\nThe volume of the cube is: %.2f\n", volume);
        }
        else if (strcmp(shape_choice, "rectangular") == 0 || strcmp(shape_choice, "rectangular prism") == 0) {
            float length, width, height;
            printf("\nPlease enter the length, width, and height of the rectangular prism: \n - ");
            scanf("%f %f %f", &length, &width, &height);
            float volume = rectangular_prism_volume(length, width, height);
            printf("\nThe volume of the rectangular prism is: %.2f\n", volume);
        }
        else if (strcmp(shape_choice, "triangular") == 0 || strcmp(shape_choice, "triangular prism") == 0) {
            float base, height, length;
            printf("\nPlease enter the base, height, and length of the triangular prism: \n - ");
            scanf("%f %f %f", &base, &height, &length);
            float volume = triangular_prism_volume(base, height, length);
            printf("\nThe volume of the triangular prism is: %.2f\n", volume);
        }
        else {
            printf("\nInvalid shape. Please run the program again and select a valid shape.\n");
        }
    }
    else {
        printf("\nInvalid choice. Please enter either 'area' or 'volume'.\n");
    }
    
    return 0;
}
