#ifndef CLASS_H
#define CLASS_H

#include <vector>

class Color{
	public:
	int Red;
	int Green;
	int Blue;
	
	Color();
	Color(int red, int green, int blue);
	
	void setRed(int r);
	void setGreen(int g);
	void setBlue(int b);
};

class FrameBuffer
{
public:
	char* fbp;
	long int screensize;
	struct fb_var_screeninfo vinfo;
	struct fb_fix_screeninfo finfo;
	int fbfd;					/* frame buffer file descriptor */

	FrameBuffer();
	void setPixel(int x, int y,Color color);
	void deletePixel(int x, int y);
	void drawLine(Point p1, Point p2, Color c);
	void deleteLine(Point p1, Point p2, Color c);
};

class Point{
public:
	int x;
	int y;

	Point();
	Point(int x1, int y1);
};

class Rectangle{
public:
	Point RectPoint[4];

	Rectangle();
	void SetRectPoint(int id, Point);
};

class Building{
public:

	Rectangle alas;
	Rectangle Roof;
	int Height;

	Building();
	void SetRoof(Rectangle roof);
	void 
};

class Peta{
public:
	vector <Building> Kota;

	void Draw();
};

#endif