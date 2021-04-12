/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMesaUnlockTrigger.h>
#import <libobjc.A.dylib/SBMesaUnlockTriggerDelegate.h>

@protocol SBBiometricUnlockBehaviorConfigurationDelegate;
@class SBMesaUnlockTrigger, NSString;

@interface SBAccessibilityMesaUnlockTrigger : SBMesaUnlockTrigger <SBMesaUnlockTriggerDelegate> {

	id<SBBiometricUnlockBehaviorConfigurationDelegate> _behaviorConfigurationDelegate;
	SBMesaUnlockTrigger* _baseTrigger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)screenOff;
-(BOOL)bioUnlock;
-(void)significantUserInteractionOccurred;
-(void)menuButtonDown;
-(void)menuButtonUp;
-(void)fingerOn;
-(void)mesaUnlockTriggerFired:(id)arg1 ;
-(void)fingerOff;
-(id)initWithUnlockBehaviorConfigurationDelegate:(id)arg1 baseTrigger:(id)arg2 ;
@end

