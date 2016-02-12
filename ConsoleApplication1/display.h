#ifndef DISPLAY_H
#define DISPLAY_H
#include "SDL2/SDL.h"
#include <string>

class Display {
public:

	Display(int width, int height, const std :: string& title);
	virtual ~Display();
	void Clear(float r, float g, float b, float a);
	bool IsClosed();
	void Update();

protected:
private:


	Display(const Display& other) {}
	Display& operator=(const Display& other) {}
	SDL_Window* m_window;
	bool m_isClosed;
	SDL_GLContext m_glContext;

};

#endif // DISPLAY_H