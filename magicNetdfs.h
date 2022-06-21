#include <Windows.h>
#define VERSION L"0.1"

VOID PrintUsage();
DWORD DoMain();
BOOL CheckAndEnablePrivilege(HANDLE hTokenToCheck, LPCWSTR pwszPrivilegeToCheck);
BOOL GenerateRandomPipeName(LPWSTR* ppwszPipeName);
HANDLE CreateSpoolNamedPipe(LPWSTR pwszPipeName);
HANDLE ConnectSpoolNamedPipe(HANDLE hPipe);
HANDLE TriggerNamedPipeConnection(LPWSTR pwszPipeName);
DWORD WINAPI TriggerNamedPipeConnectionThread(LPVOID lpParam);
BOOL GetSystem(HANDLE hPipe);
#pragma once
#pragma once
