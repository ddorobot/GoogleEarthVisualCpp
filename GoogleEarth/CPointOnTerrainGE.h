// 컴퓨터에서 형식 라이브러리 마법사의 [클래스 추가]를 사용하여 생성한 IDispatch 래퍼 클래스입니다.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CPointOnTerrainGE 래퍼 클래스

class CPointOnTerrainGE : public COleDispatchDriver
{
public:
	CPointOnTerrainGE() {} // COleDispatchDriver 기본 생성자를 호출합니다.
	CPointOnTerrainGE(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPointOnTerrainGE(const CPointOnTerrainGE& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 특성
public:

	// 작업
public:


	// IPointOnTerrainGE 메서드
public:
	double get_Latitude()
	{
		double result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	double get_Longitude()
	{
		double result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	double get_Altitude()
	{
		double result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	long get_ProjectedOntoGlobe()
	{
		long result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long get_ZeroElevationExaggeration()
	{
		long result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}

	// IPointOnTerrainGE 속성
public:

};
