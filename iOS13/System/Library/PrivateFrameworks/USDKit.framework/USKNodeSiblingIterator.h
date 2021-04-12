/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKIterator.h>

@interface USKNodeSiblingIterator : NSObject <USKIterator> {

	iterator_range<pxrInternal_v0_19__pxrReserved__usdkit__::UsdPrimSiblingIterator>* _range;
	UsdPrimSiblingIterator* _it;

}
-(id)nextObject;
-(id)initWithPrim:(const UsdPrim*)arg1 ;
-(id)initWithPrim:(const UsdPrim*)arg1 withPredicate:(Usd_PrimFlagsPredicate)arg2 ;
-(id)initWithSiblingRange:(const iterator_range<pxrInternal_v0_19__pxrReserved__usdkit__::UsdPrimSiblingIterator>*)arg1 ;
@end

