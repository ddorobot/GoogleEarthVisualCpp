// 컴퓨터에서 형식 라이브러리 마법사의 [클래스 추가]를 사용하여 생성한 IDispatch 래퍼 클래스입니다.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CViewExtentsGE 래퍼 클래스

class CViewExtentsGE : public COleDispatchDriver
{
public:
	CViewExtentsGE() {} // COleDispatchDriver 기본 생성자를 호출합니다.
	CViewExtentsGE(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CViewExtentsGE(const CViewExtentsGE& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 특성
public:

	// 작업
public:


	// IViewExtentsGE 메서드
public:
	double get_North()
	{
		double result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	double get_South()
	{
		double result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	double get_East()
	{
		double result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	double get_West()
	{
		double result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}

	// IViewExtentsGE 속성
public:

};
