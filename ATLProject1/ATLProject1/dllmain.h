// dllmain.h: 模块类的声明。

class CATLProject1Module : public ATL::CAtlDllModuleT< CATLProject1Module >
{
public :
	DECLARE_LIBID(LIBID_ATLProject1Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLPROJECT1, "{904BB656-CDE2-4CEB-AA5A-CDC7DFF3FCBB}")
};

extern class CATLProject1Module _AtlModule;
