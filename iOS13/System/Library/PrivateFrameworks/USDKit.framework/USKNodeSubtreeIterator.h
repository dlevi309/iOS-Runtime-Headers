/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKIterator.h>

@interface USKNodeSubtreeIterator : NSObject <USKIterator> {

	UsdPrimRange* _range;
	iterator* _it;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)nextObject;
-(id)initWithScene:(const TfWeakPtr<pxrInternal_v0_19__pxrReserved__usdkit__::UsdStage>*)arg1 ;
-(id)initWithScene:(const TfWeakPtr<pxrInternal_v0_19__pxrReserved__usdkit__::UsdStage>*)arg1 withPredicate:(Usd_PrimFlagsPredicate)arg2 ;
-(id)initWithPrim:(const UsdPrim*)arg1 ;
-(id)initWithPrim:(const UsdPrim*)arg1 withPredicate:(Usd_PrimFlagsPredicate)arg2 ;
-(id)initWithSubtreeRange:(const UsdPrimRange*)arg1 ;
@end

