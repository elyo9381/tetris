#pragma once

#include "value.h"


class CStage
{
private:
	CStage();
	~CStage();
	
	
private:
	friend class CStageManager;
	
private:
	char m_Stage[STAGE_HEIGHT][STAGE_WIDTH];
	int m_iSpeed;
	
public:
	int GetSpeed() const
	{
		return m_iSpeed;
	}
	
	void SetSpeed(int iSpeed)
	{
		m_iSpeed =iSpeed;
	}

	
public:
	bool Init();
	void Render();
		
};
