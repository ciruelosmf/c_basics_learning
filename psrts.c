#include <stdio.h>

// Define a structure for a 2D point
typedef struct {
    int x;
    int y;
} Point;

// Function to set the coordinates of a Point (using pointers)
void setPoint(Point* p, int newX, int newY) {
    p->x = newX;
    p->y = newY;
}

int main() {
    // Create a Point instance
    Point *myPoint = (Point *)malloc(sizeof(Point));
    
    // Check if memory allocation was successful
    if (myPoint == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize the Point instance
    myPoint->x = 0;
    myPoint->y = 0;

    // Set new coordinates using the function
    setPoint(&myPoint, 10, 20);

    // Print the coordinates after the function call
    printf("Coordinates after setPoint: (%d, %d)\n", myPoint.x, myPoint.y);

    return 0;
}
