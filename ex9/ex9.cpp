//usaDLL.cpp
#include <windows.h>
#include <tchar.h>
#include <io.h>
#include <fcntl.h>
#include <stdio.h>
#include "../ex8-dll/ex8-dll.h"

int _tmain(int argc, TCHAR *argv[]) {

#ifdef UNICODE
	_setmode(_fileno(stdin), _O_WTEXT);
	_setmode(_fileno(stdout), _O_WTEXT);
	_setmode(_fileno(stderr), _O_WTEXT);
#endif

	//Usar a vari�vel da Dll
	_tprintf(TEXT("Valor da vari�vel da DLL: %d\n"), nDLL);
	//Chamar a funcao da Dll
	_tprintf(TEXT("Resultado da fun��o da UmaString DLL: %d"), UmaString());
	return 0;
}