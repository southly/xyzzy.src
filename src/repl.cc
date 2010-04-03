#include "cdecl.h"

extern "C"
{
int PASCAL WinMain (HINSTANCE, HINSTANCE, LPSTR, int);
}

int __cdecl
main (int argc, char **argv)
{
	HINSTANCE hinst = GetModuleHandle (0);
	char args[1024] = { '\0', };
	for (int i = 1; i < argc; i++)
	{
		strcat (args, argv[i]);
		strcat (args, " ");
	}

	return WinMain (hinst, 0, args, SW_SHOWNORMAL);
}
