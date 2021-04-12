/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(CAMediaTimingFunction *)_timingFunctionForAnimation;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)set_timingFunctionForAnimation:(CAMediaTimingFunction *)arg1 ;
@end

