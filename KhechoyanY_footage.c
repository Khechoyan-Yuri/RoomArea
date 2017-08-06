/* This program is designed to accept Length and Width as input from the user
and multiply them together to get the Square Footage of a room.
Created: 9-5-15
Modified: 9-15-15
Yuri Khechoyan
*/

#include <stdio.h>

int main (void){

    //Declaring Variables
    float roomLength;
    float roomWidth;
    float roomArea;

    //Ask and receive number for Length
    printf("Please enter the numerical value of the Length of the room. \n");
    scanf("%f", &roomLength);

    //Ask and receive number for Width
    printf("Please enter the numerical value of the Width of the room. \n");
    scanf("%f", &roomWidth);

    //Calculate Area of the room
    roomArea = (roomLength*roomWidth);

    //Give output to user
    printf("Your room Length is: %.2f \n", roomLength);
    printf("Your room Width is: %.2f \n", roomWidth);
    printf("Your room Area/Square Footage is: %.2f \n", roomArea);

    return 0;
}
