// window is 640 x 480

#include "SSDL.h"

int main(int argc, char** argv)
{
	SSDL_SetWindowTitle("Shapes and colors");

	//new colors as constants
	const SSDL_Color MAHOGANY = SSDL_CreateColor(192, 64, 0);
	const SSDL_Color DARK_GREY = SSDL_CreateColor(100, 100, 100);
	const SSDL_Color SKY_TRANSPARENT = SSDL_CreateColor(60, 149, 222,100);

	//background
	SSDL_RenderClear(DARK_GREY);

	//two squares
	SSDL_SetRenderDrawColor(GREEN);
	SSDL_RenderFillRect(0, 100, 100, 100);

	SSDL_SetRenderDrawColor(MAHOGANY);
	SSDL_RenderFillRect(100, 100, 100, 100);

	//reset render color
	SSDL_SetRenderDrawColor(WHITE);

	sout << "Hit any key to end.";
	SSDL_WaitKey();

	//second drawing
	SSDL_RenderClear(BLACK);

	SSDL_RenderDrawPoint(320, 240);

	SSDL_RenderDrawCircle(10, 10, 30);

	SSDL_RenderFillRect(400, 400, 50, 10);

	sout << "Hit any key to end.\n";
	SSDL_WaitKey(); //Wait for user to hit a key

	//third drawing
	SSDL_RenderClear(DARK_GREY);

	SSDL_SetRenderDrawColor(MAHOGANY);
	SSDL_RenderFillCircle(200, 200, 200);

	SSDL_SetRenderDrawColor(SKY_TRANSPARENT);
	SSDL_RenderDrawCircle(300, 200, 200);
	
	sout << "Looks like text will render transparency, but not shapes\n";
	sout << "Hit any key to end.\n";
	SSDL_WaitKey(); //Wait for user to hit a key


	return 0;
}