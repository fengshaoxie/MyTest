// ATLProject2.cpp : WinMain ��ʵ��


#include "stdafx.h"
#include "resource.h"
#include "ATLProject2_i.h"


using namespace ATL;

#include <stdio.h>

class CATLProject2Module : public ATL::CAtlServiceModuleT< CATLProject2Module, IDS_SERVICENAME >
{
public :
	DECLARE_LIBID(LIBID_ATLProject2Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLPROJECT2, "{E71DB9D8-38B7-43AB-AD23-2402D42B8C8D}")
		HRESULT InitializeSecurity() throw()
	{
		// TODO : ���� CoInitializeSecurity ��Ϊ�����ṩ�ʵ��İ�ȫ����
		// ���� - PKT ����������֤��
		// RPC_C_IMP_LEVEL_IDENTIFY ��ģ�⼶��
		// �Լ��ʵ��ķ� NULL ��ȫ��������

		return S_OK;
	}
	};

CATLProject2Module _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

