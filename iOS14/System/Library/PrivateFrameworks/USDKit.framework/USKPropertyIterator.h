/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKIterator.h>

@interface USKPropertyIterator : NSObject <USKIterator> {

	vector<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> >* _properties;
	wrap_iter<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *>* _it;

}
-(id)initWithProperties:(const vector<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> >*)arg1 ;
-(id)nextObject;
@end

