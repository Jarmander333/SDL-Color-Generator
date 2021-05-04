// sdl2.cpp : Defines the entry point for the console application.

#define SDL_MAIN_HANDLED
#include <SDL.h> //Includes the SDL2 header file
#include <stdio.h> //Includes the Standard IO header file

int main(int argc, char *argv[]) {
	int r = 0; //An integer named "r" for Red
	int g = 0; //An integer named "g" for Green
	int b = 0; //An integer named "b" for Blue
	int a = 0; //An integer named "a" for Alpha

	printf("Please select the amount of RED you'd like 0-255: ");
	scanf("%d", &r);
	if(r > 255) {
		r = 255;
		printf("Number was greater than 255, set number to 255. \n");
	} else if (r < 0) {
		r = 0;
		printf("Number was less than 0, set number to 0 \n");
	} else {}

	printf("Please select the amount of GREEN you'd like 0-255: ");
	scanf("%d", &g);
	if(g > 255) {
		g = 255;
		printf("Number was greater than 255, set number to 255. \n");
	} else if (g < 0) {
		g = 0;
		printf("Number was less than 0, set number to 0 \n");
	} else {}

	printf("Please select the amount of BLUE you'd like 0-255: ");
	scanf("%d", &b);
	if(b > 255) {
		b = 255;
		printf("Number was greater than 255, set number to 255. \n");
	} else if (b < 0) {
		b = 0;
		printf("Number was less than 0, set number to 0 \n");
	} else {}

	printf("Please select the amount of ALPHA you'd like 0-255: ");
	scanf("%d", &a);
	if(a > 255) {
		a = 255;
		printf("Number was greater than 255, set number to 255. \n");
	} else if (a < 0) {
		a = 0;
		printf("Number was less than 0, set number to 0 \n");
	} else {}

	printf("\nPreparing to make a window with the color ");
	printf("%d ", r);
	printf("%d ", g);
	printf("%d ", b);
	printf("%d \n\n", a);

	SDL_Init(SDL_INIT_VIDEO); //Initialize the screen

	SDL_Window *window = SDL_CreateWindow("Jarmander333's SDL Window!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN); //Tells SDL2 to make an 800*600 window that is shown/centered

	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0); //Sets up an SDL2 renderer

	SDL_SetRenderDrawColor(renderer, r, g, b, a); //Says tp render the color "Magenta" (255 Red + 255 Blue = Magenta)

	SDL_RenderClear(renderer); //Draw the color to the screen

	SDL_RenderPresent(renderer); //Shows the window

	SDL_Delay(5000); //Close the window in 5 seconds

	printf("Made a window with the color "); //Print "Made a windows with the color" to the screen
	printf("%d ", r); //Print the Red value
	printf("%d ", g); //Print the Green value
	printf("%d ", b); //Print the Blue value
	printf("%d \n", a); //Print the Alpha value

	return 0;
}
