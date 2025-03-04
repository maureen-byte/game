// O------------------------------------------------------------------------------O
// | Example "Hello World" Program (main.cpp)                                     |
// O------------------------------------------------------------------------------O

#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

// Override base class with your custom functionality
class Example : public olc::PixelGameEngine
{
public:
	Example()
	{
		// Name your application
		sAppName = "Example";
	}

public:
	bool OnUserCreate() override
	{
		// Called once at the start, so create things here
		return true;
	}
	OnUserUpdate(float fElapsedTime) override
	{
		// Called once per frame, draws 3x3 squares
		for (auto p : points) {
			for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				Draw(p.x + i, p.y + j, olc::Pixel(olc::));
				}
			}
		}
		return true;
	}
};

int main()
{
    Example demo;
    if (demo.Construct(256, 240, 4, 4))
        demo.Start();
    return 0;
}
