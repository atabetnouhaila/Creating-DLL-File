#include<Windows.h>

BOOL WINAPI DllMain(HINSTANCE hModule, DWORD Reason, LPVOID lpvReserved) {

	switch (Reason) {
	case DLL_PROCESS_ATTACH:
		MessageBoxW(NULL, L"lilwubbalubbadubdbub", L"Zzz", MB_ICONQUESTION | MB_OK);
		break;
	}

	return TRUE;
}