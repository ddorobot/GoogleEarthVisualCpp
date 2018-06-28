// 컴퓨터에서 형식 라이브러리 마법사의 [클래스 추가]를 사용하여 생성한 IDispatch 래퍼 클래스입니다.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CTimeIntervalGE 래퍼 클래스

class CTimeIntervalGE : public COleDispatchDriver
{
public:
	CTimeIntervalGE() {} // COleDispatchDriver 기본 생성자를 호출합니다.
	CTimeIntervalGE(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTimeIntervalGE(const CTimeIntervalGE& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 특성
public:

	// 작업
public:


	// ITimeIntervalGE 메서드
public:
	LPDISPATCH get_BeginTime()
	{
		LPDISPATCH result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH get_EndTime()
	{
		LPDISPATCH result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}

	// ITimeIntervalGE 속성
public:

};
