#pragma once


enum class TextColor{
	BLACK = 0,
	GRAY_DARK = FOREGROUND_INTENSITY,
	GRAY = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	WHITE = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	RED_DARK = FOREGROUND_RED,
	GREEN_DARK = FOREGROUND_GREEN,
	BLUE_DARK = FOREGROUND_BLUE,
	YELLOW_DARK = FOREGROUND_RED | FOREGROUND_GREEN,
	MAGENTA_DARK = FOREGROUND_RED |FOREGROUND_BLUE,
	CYAN_DARK = FOREGROUND_BLUE | FOREGROUND_GREEN,
	
	RED = FOREGROUND_RED | FOREGROUND_INTENSITY,
	GREEN = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	BLUE = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	YELLOW = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	MAGENTA = FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	CYAN = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY
};
enum class BackColor{
	BLACK = 0,
	GRAY_DARK = BACKGROUND_INTENSITY,
	GRAY = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
	WHITE = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY,
	RED_DARK = BACKGROUND_RED,
	GREEN_DARK = BACKGROUND_GREEN,
	BLUE_DARK = BACKGROUND_BLUE,
	YELLOW_DARK = BACKGROUND_RED | BACKGROUND_GREEN,
	MAGENTA_DARK = BACKGROUND_RED |BACKGROUND_BLUE,
	CYAN_DARK = BACKGROUND_BLUE | BACKGROUND_GREEN,
	
	RED = BACKGROUND_RED | BACKGROUND_INTENSITY,
	GREEN = BACKGROUND_GREEN | BACKGROUND_INTENSITY,
	BLUE = BACKGROUND_BLUE | BACKGROUND_INTENSITY,
	YELLOW = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY,
	MAGENTA = BACKGROUND_RED |BACKGROUND_BLUE | BACKGROUND_INTENSITY,
	CYAN = BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY
};

class SColor{
	private:
		uint16_t attr;
	public:
		SColor(){
			CONSOLE_SCREEN_BUFFER_INFO info;
			HANDLE hndl = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(hndl, &info);
			static uint16_t old = info.wAttributes;
			attr = old;
		}
		SColor(TextColor color){
			CONSOLE_SCREEN_BUFFER_INFO info;
			HANDLE hndl = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(hndl, &info);
			static uint16_t old = info.wAttributes;
			uint16_t tmp = old;
			tmp &= 0xfff0;
			tmp |= (uint16_t)color;
			attr = tmp;
		}
		SColor(BackColor color){
			CONSOLE_SCREEN_BUFFER_INFO info;
			HANDLE hndl = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(hndl, &info);
			static uint16_t old = info.wAttributes;
			uint16_t tmp = old;
			tmp &= 0xff0f;
			tmp |= (uint16_t)color;
			attr = tmp;
		}
		SColor(BackColor b_color, TextColor t_color){
			CONSOLE_SCREEN_BUFFER_INFO info;
			HANDLE hndl = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(hndl, &info);
			static uint16_t old = info.wAttributes;
			uint16_t tmp = old;
			tmp &= 0xff00;
			tmp |= (uint16_t)b_color | (uint16_t)t_color;
			attr = tmp;
		}
		void set_color() const{
			HANDLE hndl = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hndl, attr);
		}
};
std::wostream& operator<<(std::wostream& os, const SColor& color);