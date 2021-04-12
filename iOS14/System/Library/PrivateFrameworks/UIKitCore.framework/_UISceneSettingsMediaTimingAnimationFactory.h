/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction, NSString;

@interface _UISceneSettingsMediaTimingAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	CAMediaTimingFunction* __timingFunctionForAnimation;

}

@property (getter=_timingFunctionForAnimation,nonatomic,retain) CAMediaTimingFunction * _timingFunctionForAnimation;              //@synthesize _timingFunctionForAnimation=__timingFunctionForAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(CAMediaTimingFunction *)_timingFunctionForAnimation;
-(void)set_timingFunctionForAnimation:(CAMediaTimingFunction *)arg1 ;
@end

