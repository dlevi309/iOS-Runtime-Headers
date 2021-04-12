/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction, NSString;

@interface SKUISimpleAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	CAMediaTimingFunction* _timingFunction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)factoryWithTimingFunction:(id)arg1 ;
+(id)backOutTimingFunction;
+(id)easeQuadInTimingFunction;
+(id)easeQuadInOutTimingFunction;
+(id)easeQuadOutTimingFunction;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
@end

