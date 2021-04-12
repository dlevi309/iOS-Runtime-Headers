/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

