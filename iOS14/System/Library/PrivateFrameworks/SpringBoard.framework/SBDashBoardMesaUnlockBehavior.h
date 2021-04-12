/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBMesaUnlockTriggerDelegate.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehavior.h>

@protocol SBBiometricUnlockBehaviorDelegate;
@class CSLockScreenMesaSettings, SBHomeHardwareButton, SBMesaUnlockTrigger, NSString;

@interface SBDashBoardMesaUnlockBehavior : NSObject <SBMesaUnlockTriggerDelegate, SBBiometricUnlockBehavior> {

	long long _failedMesaUnlockAttempts;
	CSLockScreenMesaSettings* _mesaSettings;
	SBHomeHardwareButton* _homeHardwareButton;
	id<SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;
	SBMesaUnlockTrigger* _trigger;

}

@property (setter=_setHomeHardwareButton:,getter=_getHomeHardwareButton,nonatomic,retain) SBHomeHardwareButton * homeHardwareButton;              //@synthesize homeHardwareButton=_homeHardwareButton - In the implementation block
@property (setter=_setTrigger:,getter=_trigger,nonatomic,retain) SBMesaUnlockTrigger * trigger;                                                   //@synthesize trigger=_trigger - In the implementation block
@property (getter=_mesaSettings,nonatomic,readonly) CSLockScreenMesaSettings * mesaSettings;                                                      //@synthesize mesaSettings=_mesaSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;                                        //@synthesize biometricUnlockBehaviorDelegate=_biometricUnlockBehaviorDelegate - In the implementation block
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)menuButtonUp;
-(id<SBBiometricUnlockBehaviorDelegate>)biometricUnlockBehaviorDelegate;
-(id)succinctDescription;
-(void)mesaUnlockTriggerFired:(id)arg1 ;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithMesaSettings:(id)arg1 andUnlockTrigger:(id)arg2 ;
-(void)setBiometricUnlockBehaviorDelegate:(id<SBBiometricUnlockBehaviorDelegate>)arg1 ;
-(void)significantUserInteractionDidOccur;
-(NSString *)description;
-(void)_setTrigger:(id)arg1 ;
-(id)_getHomeHardwareButton;
-(void)menuButtonDown;
-(id)_homeHardwareButton;
-(id)_failureSettingsForFailAttempt:(long long)arg1 ;
-(void)_handleMesaFailure;
-(void)screenOff;
-(id)_trigger;
-(id)_feedbackForFailureSettings:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_setHomeHardwareButton:(id)arg1 ;
-(id)_feedbackForPasscodeEvent;
-(id)_feedbackForBioUnlockEventThatWasSpontaneous:(BOOL)arg1 ;
-(void)lockButtonDown;
-(id)succinctDescriptionBuilder;
-(id)_mesaSettings;
@end

