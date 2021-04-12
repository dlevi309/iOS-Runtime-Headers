/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKIterator.h>

@interface USKPropertyIterator : NSObject <USKIterator> {

	vector<pxrInternal_v0_19__pxrReserved__usdkit__::UsdProperty, std::__1::allocator<pxrInternal_v0_19__pxrReserved__usdkit__::UsdProperty> >* _properties;
	wrap_iter<pxrInternal_v0_19__pxrReserved__usdkit__::UsdProperty *>* _it;

}
-(id)nextObject;
-(id)initWithProperties:(const vector<pxrInternal_v0_19__pxrReserved__usdkit__::UsdProperty, std::__1::allocator<pxrInternal_v0_19__pxrReserved__usdkit__::UsdProperty> >*)arg1 ;
@end

