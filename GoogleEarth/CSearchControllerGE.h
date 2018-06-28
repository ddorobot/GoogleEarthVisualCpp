// 컴퓨터에서 형식 라이브러리 마법사의 [클래스 추가]를 사용하여 생성한 IDispatch 래퍼 클래스입니다.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CSearchControllerGE 래퍼 클래스

class CSearchControllerGE : public COleDispatchDriver
{
public:
	CSearchControllerGE() {} // COleDispatchDriver 기본 생성자를 호출합니다.
	CSearchControllerGE(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSearchControllerGE(const CSearchControllerGE& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 특성
public:

	// 작업
public:


	// ISearchControllerGE 메서드
public:
	void Search(LPCTSTR searchString)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, searchString);
	}
	long IsSearchInProgress()
	{
		long result;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH GetResults()
	{
		LPDISPATCH result;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	void ClearResults()
	{
		InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}

	// ISearchControllerGE 속성
public:

};
