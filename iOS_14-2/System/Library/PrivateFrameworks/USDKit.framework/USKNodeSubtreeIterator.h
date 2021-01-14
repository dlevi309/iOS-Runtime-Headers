/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKIterator.h>

@interface USKNodeSubtreeIterator : NSObject <USKIterator> {

	UsdPrimRange* _range;
	iterator* _it;

}
-(id)nextObject;
-(id)initWithScene:(const TfWeakPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithScene:(const TfWeakPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>*)arg1 withPredicate:(Usd_PrimFlagsPredicate)arg2 ;
-(id)initWithPrim:(const UsdPrim*)arg1 ;
-(id)initWithPrim:(const UsdPrim*)arg1 withPredicate:(Usd_PrimFlagsPredicate)arg2 ;
-(id)initWithSubtreeRange:(const UsdPrimRange*)arg1 ;
@end

