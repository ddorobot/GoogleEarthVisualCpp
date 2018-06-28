// 컴퓨터에서 형식 라이브러리 마법사의 [클래스 추가]를 사용하여 생성한 IDispatch 래퍼 클래스입니다.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CKHInterface 래퍼 클래스

class CKHInterface : public COleDispatchDriver
{
public:
	CKHInterface() {} // COleDispatchDriver 기본 생성자를 호출합니다.
	CKHInterface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CKHInterface(const CKHInterface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 특성
public:

	// 작업
public:


	// IKHInterface 메서드
public:
	LPDISPATCH currentView(long terrain)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, terrain);
		return result;
	}
	long get_StreamingProgressPercentage()
	{
		long result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}
	void SaveScreenShot(LPCTSTR fileName, long quality)
	{
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, fileName, quality);
	}
	void OpenFile(LPCTSTR fileName)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, fileName);
	}
	void QuitApplication()
	{
		InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void SetRenderWindowSize(long width, long height)
	{
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, width, height);
	}
	double get_AutoPilotSpeed()
	{
		double result;
		InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_AutoPilotSpeed(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	LPDISPATCH get_currentViewExtents()
	{
		LPDISPATCH result;
		InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	void setView(LPDISPATCH view, long terrain, double speed)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_I4 VTS_R8;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, view, terrain, speed);
	}
	void LoadKml(BSTR * kmlData)
	{
		static BYTE parms[] = VTS_PBSTR;
		InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, kmlData);
	}
	LPDISPATCH GetFeatureByName(LPCTSTR Name)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Name);
		return result;
	}
	void setViewParams(double lat, double lon, double Range, double Tilt, double Azimuth, long terrain, double speed)
	{
		static BYTE parms[] = VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I4 VTS_R8;
		InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, lat, lon, Range, Tilt, Azimuth, terrain, speed);
	}
	void SetFeatureView(LPDISPATCH feature, double speed)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_R8;
		InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, feature, speed);
	}
	SAFEARRAY * GetPointOnTerrainFromScreenCoords(double screen_x, double screen_y)
	{
		static BYTE parms[] = VTS_R8 VTS_R8;
		InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, screen_x, screen_y);
	}
	void getCurrentVersion(long * major, long * minor, long * build, long * appType)
	{
		static BYTE parms[] = VTS_PI4 VTS_PI4 VTS_PI4 VTS_PI4;
		InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, major, minor, build, appType);
	}
	void isClientInitialized(long * IsInitialized)
	{
		static BYTE parms[] = VTS_PI4;
		InvokeHelper(0x12, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, IsInitialized);
	}

	// IKHInterface 속성
public:

};
