#include "Core.h"
#include "StageManager.h"

CCore* CCore::m_pInst=NULL;


CCore::CCore()
{
//	SetConsoleCursorPosition
}

CCore::~CCore()
{
	CStageManager::DestroyInst();
}

bool CCore::Init()
{
	
	m_hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		
	if(m_hConsole == INVALID_HANDLE_VALUE)
		return false;
	
	if(!CStageManager::GetInst()->Init())
		return false;
		
	return true;
}

void CCore::Run()
{
	CStageManager::GetInst()->Run();
	
	SetConsolePos(2,3);
	cout<< "Test"<<endl;	
}

void CCore::SetConsolePos(int x, int y)
{
	COORD	pos ={x *+2,y};
	SetConsoleCursorPosition(m_hConsole, pos);
}
