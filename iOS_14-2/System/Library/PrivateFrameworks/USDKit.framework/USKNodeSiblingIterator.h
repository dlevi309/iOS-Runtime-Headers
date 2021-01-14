/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKIterator.h>

@interface USKNodeSiblingIterator : NSObject <USKIterator> {

	iterator_range<pxrInternal_v0_20__pxrReserved__usdkit__::UsdPrimSiblingIterator>* _range;
	UsdPrimSiblingIterator* _it;

}
-(id)nextObject;
-(id)initWithPrim:(const UsdPrim*)arg1 ;
-(id)initWithPrim:(const UsdPrim*)arg1 withPredicate:(Usd_PrimFlagsPredicate)arg2 ;
-(id)initWithSiblingRange:(const iterator_range<pxrInternal_v0_20__pxrReserved__usdkit__::UsdPrimSiblingIterator>*)arg1 ;
@end

