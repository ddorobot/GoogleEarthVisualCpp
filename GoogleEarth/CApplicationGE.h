// 컴퓨터에서 형식 라이브러리 마법사의 [클래스 추가]를 사용하여 생성한 IDispatch 래퍼 클래스입니다.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CApplicationGE 래퍼 클래스

class CApplicationGE : public COleDispatchDriver
{
public:
	CApplicationGE() {} // COleDispatchDriver 기본 생성자를 호출합니다.
	CApplicationGE(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CApplicationGE(const CApplicationGE& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 특성
public:

	// 작업
public:


	// IApplicationGE 메서드
public:
	LPDISPATCH GetCamera(long considerTerrain)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, considerTerrain);
		return result;
	}
	void SetCamera(LPDISPATCH camera, double speed)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_R8;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, camera, speed);
	}
	void SetCameraParams(double lat, double lon, double alt, long altMode, double Range, double Tilt, double Azimuth, double speed)
	{
		static BYTE parms[] = VTS_R8 VTS_R8 VTS_R8 VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, lat, lon, alt, altMode, Range, Tilt, Azimuth, speed);
	}
	long get_StreamingProgressPercentage()
	{
		long result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}
	void SaveScreenShot(LPCTSTR fileName, long quality)
	{
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, fileName, quality);
	}
	void OpenKmlFile(LPCTSTR fileName, long suppressMessages)
	{
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, fileName, suppressMessages);
	}
	void LoadKmlData(BSTR * kmlData)
	{
		static BYTE parms[] = VTS_PBSTR;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, kmlData);
	}
	double get_AutoPilotSpeed()
	{
		double result;
		InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_AutoPilotSpeed(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	LPDISPATCH get_ViewExtents()
	{
		LPDISPATCH result;
		InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH GetFeatureByName(LPCTSTR Name)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Name);
		return result;
	}
	LPDISPATCH GetFeatureByHref(LPCTSTR href)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, href);
		return result;
	}
	void SetFeatureView(LPDISPATCH feature, double speed)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_R8;
		InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, feature, speed);
	}
	LPDISPATCH GetPointOnTerrainFromScreenCoords(double screen_x, double screen_y)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_R8 VTS_R8;
		InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, screen_x, screen_y);
		return result;
	}
	long get_VersionMajor()
	{
		long result;
		InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long get_VersionMinor()
	{
		long result;
		InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long get_VersionBuild()
	{
		long result;
		InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long get_VersionAppType()
	{
		long result;
		InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long IsInitialized()
	{
		long result;
		InvokeHelper(0x12, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long IsOnline()
	{
		long result;
		InvokeHelper(0x13, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	void Login()
	{
		InvokeHelper(0x14, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void Logout()
	{
		InvokeHelper(0x15, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void ShowDescriptionBalloon(LPDISPATCH feature)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x16, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, feature);
	}
	void HideDescriptionBalloons()
	{
		InvokeHelper(0x17, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	LPDISPATCH GetHighlightedFeature()
	{
		LPDISPATCH result;
		InvokeHelper(0x18, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH GetMyPlaces()
	{
		LPDISPATCH result;
		InvokeHelper(0x19, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH GetTemporaryPlaces()
	{
		LPDISPATCH result;
		InvokeHelper(0x1a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH GetLayersDatabases()
	{
		LPDISPATCH result;
		InvokeHelper(0x1b, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	double get_ElevationExaggeration()
	{
		double result;
		InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_ElevationExaggeration(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x1c, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	long GetMainHwnd()
	{
		long result;
		InvokeHelper(0x1d, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH get_TourController()
	{
		LPDISPATCH result;
		InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH get_SearchController()
	{
		LPDISPATCH result;
		InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH get_AnimationController()
	{
		LPDISPATCH result;
		InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	long GetRenderHwnd()
	{
		long result;
		InvokeHelper(0x21, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}

	// IApplicationGE 속성
public:

};
