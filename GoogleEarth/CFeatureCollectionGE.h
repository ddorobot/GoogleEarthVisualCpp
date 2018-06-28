// 컴퓨터에서 형식 라이브러리 마법사의 [클래스 추가]를 사용하여 생성한 IDispatch 래퍼 클래스입니다.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CFeatureCollectionGE 래퍼 클래스

class CFeatureCollectionGE : public COleDispatchDriver
{
public:
	CFeatureCollectionGE() {} // COleDispatchDriver 기본 생성자를 호출합니다.
	CFeatureCollectionGE(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CFeatureCollectionGE(const CFeatureCollectionGE& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 특성
public:

	// 작업
public:


	// IFeatureCollectionGE 메서드
public:
	LPUNKNOWN get__NewEnum()
	{
		LPUNKNOWN result;
		InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH get_Item(long index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, index);
		return result;
	}
	long get_Count()
	{
		long result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}

	// IFeatureCollectionGE 속성
public:

};
