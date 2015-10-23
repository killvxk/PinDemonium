#pragma once
#include "pin.H"
#include "WxorXHandler.h"
#include "ProcInfo.h"
namespace W{
	#include "windows.h"
	#include <tlhelp32.h>
	#include <Psapi.h>	
}





class InitFunctionCall
{
public:
	InitFunctionCall(void);
	~InitFunctionCall(void);
	UINT32 run(ADDRINT curEip,WriteInterval wi);
private:
	UINT32 getFileSize(FILE * fp);
	BOOL launchIdaScript(char *idaw,char *idaPythonScript,char * dumpFile,char * idaIdbToRm);
	BOOL launchScyllaDump(char *scylla,int pid, int curEip,char *dumpFile);
	BOOL existFile (char *name);

};

