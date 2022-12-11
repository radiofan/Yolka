#include "stdafx.h"
#include "SColor.h"
#include "SCoord.h"


std::wostream& operator<<(std::wostream& os, const SColor& color){
	color.set_color();
	return os;
}
std::wostream& operator<<(std::wostream& os, const SCoord& tmp){
	tmp.set();
	return os;
}

void pause(){
	std::wcout << L"Для продолжения нажмите любую клавишу . . . ";
	_getch();
}


struct fire{
	fire(int8_t X, int8_t Y)	:	x(X), y(Y), active(false) {
		switch(rand() % 4){
			case 0:
				symb = L'0';
				break;
			case 1:
				symb = L'o';
				break;
			case 2:
				symb = L'O';
				break;
			case 3:
				symb = L'°';
				break;
		}
	};
	int8_t x;
	int8_t y;
	TextColor color;
	wchar_t symb;
	bool active;
};

void fire_shift(fire* fires, uint8_t fires_len){
	if(!fires_len)
		return;

	TextColor new_color;
	switch(rand() % 6){
		case 0:
			new_color = TextColor::RED;
			break;
		case 1:
			new_color = TextColor::GREEN;
			break;
		case 2:
			new_color = TextColor::BLUE;
			break;
		case 3:
			new_color = TextColor::YELLOW;
			break;
		case 4:
			new_color = TextColor::MAGENTA;
			break;
		case 5:
			new_color = TextColor::CYAN;
			break;
	}

	TextColor old_color;

	for(uint8_t i=0; i<fires_len; i++){
		old_color = fires[i].color;
		fires[i].color = new_color;
		new_color = old_color;
		if(!fires[i].active){
			fires[i].active = true;
			break;
		}
	}
}


int32_t wmain(int32_t argc, wchar_t* argv[]){
	std::wcin.imbue(std::locale(".866"));
	std::wcout.imbue(std::locale(".866"));

	HANDLE hWnd = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD bufferSize = {46, 42};
	SetConsoleScreenBufferSize(hWnd, bufferSize);

	HWND hWindowConsole = GetConsoleWindow();
	RECT r;
	GetWindowRect(hWindowConsole , &r);
	MoveWindow(hWindowConsole, r.left, r.top, 400, 570, TRUE);

	srand(time(0));
	
	std::wcout	<< std::endl
				<< SColor()
				<< SColor(TextColor::GREEN_DARK)
				<< L"                       *                " << std::endl
				<< L"                      ***               " << std::endl
				<< L"                     *****              " << std::endl
				<< L"                    *******             " << std::endl
				<< L"                   *********            " << std::endl
				<< L"                  ***********           " << std::endl
				<< L"                 *************          " << std::endl
				<< L"                ***************         " << std::endl
				<< L"               *****************        " << std::endl
				<< L"              *******************       " << std::endl
				<< L"             *********************      " << std::endl
				<< L"            ***********************     " << std::endl
				<< L"           *************************    " << std::endl
				<< L"          ***************************   " << std::endl
				<< L"         *****************************  " << std::endl
				<< L"        ******************************* " << std::endl
				<< L"       *********************************" << std::endl
				<< SColor(TextColor::RED_DARK)
				<< L"                     ████" << std::endl
				<< L"                     ████" << std::endl
				<< std::endl
				<< SColor(TextColor::YELLOW)
				<< L"   ____   _    _  ____  ____  _     _ __  __ " << std::endl
				<< L"  / ___| | |  | |/ __ \\|  _ \\| |   | |  \\/  |" << std::endl
				<< L" | |     | |__| | |  | | |_) | |__ | | \\  / |" << std::endl
				<< L" | |     |  __  | |  | |  _ <| '_ \\| | |\\/| |" << std::endl
				<< L" | |___  | |  | | |__| | |_) | |_) | | |  | |" << std::endl
				<< L"  \\____| |_|  |_|\\____/|____/|_.__/|_|_|  |_|" << std::endl
				<< L"             ___   ___ ___  ____  " << std::endl
				<< L"            |__ \\ / _ \\'_ \\'___ \\ " << std::endl
				<< L"               ) | | | | ) | __) |" << std::endl
				<< L"              / /| | | |/ / |__ < " << std::endl
				<< L"             / /_| |_| / /_ ___) |" << std::endl
				<< L"            |____'\\___/____|____/ " << std::endl
				<< L"       ____  ____   ____   ____  __  __ " << std::endl
				<< L"      |  __|/ __ \\ / __ \\ / __ \\|  \\/  |" << std::endl
				<< L"      | |  | |  | | |  | | |  | | \\  / |" << std::endl
				<< L"      | |  | |  | | |  | | |  | | |\\/| |" << std::endl
				<< L"      | |  | |__| | |__| | |__| | |  | |" << std::endl
				<< L"      |_|   \\____/| ____ |\\____/|_|  |_|" << std::endl
				<< L"                 |_'    '_| " << std::endl
				<< std::endl
				<< SColor();
	std::wcout << SCoord();

	fire fires[] = {
		fire(23, 1),
		fire(-1, -1),
		fire(21, 3),
		fire(23, 4),
		fire(25, 3),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(19, 5),
		fire(20, 6),
		fire(22, 7),
		fire(24, 7),
		fire(26, 7),
		fire(28, 6),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(17, 7),
		fire(18, 8),
		fire(19, 9),
		fire(21, 10),
		fire(23, 10),
		fire(25, 10),
		fire(27, 10),
		fire(29, 9),
		fire(30, 8),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(14, 10),
		fire(14, 11),
		fire(15, 12),
		fire(17, 13),
		fire(19, 14),
		fire(22, 14),
		fire(26, 13),
		fire(30, 12),
		fire(32, 11),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(-1, -1),
		fire(11, 13),
		fire(12, 14),
		fire(15, 15),
		fire(18, 16),
		fire(21, 17),
		fire(25, 17),
		fire(28, 16),
		fire(32, 15),
		fire(35, 14),
	};

	uint8_t fires_len = sizeof(fires)/sizeof(fire);

	while(true){
		Sleep(500);
		fire_shift(fires, fires_len);
		for(uint8_t i=0; i<fires_len; i++){
			if(!fires[i].active){
				break;
			}
			if(fires[i].x < 0 || fires[i].y < 0){
				continue;
			}

			std::wcout << SCoord(fires[i].x, fires[i].y) << SColor(fires[i].color) << fires[i].symb;
		}
		std::wcout << SCoord();
	}

	return 0;
}