/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBMesaUnlockTriggerDelegate.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehavior.h>

@protocol SBBiometricUnlockBehaviorDelegate;
@class CSLockScreenPearlSettings, SBMesaUnlockTrigger, NSString;

@interface SBDashBoardPearlUnlockBehavior : NSObject <SBMesaUnlockTriggerDelegate, SBBiometricUnlockBehavior> {

	CSLockScreenPearlSettings* _pearlSettings;
	id<SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;
	SBMesaUnlockTrigger* _trigger;

}

@property (setter=_setTrigger:,getter=_trigger,nonatomic,retain) SBMesaUnlockTrigger * trigger;                         //@synthesize trigger=_trigger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;              //@synthesize biometricUnlockBehaviorDelegate=_biometricUnlockBehaviorDelegate - In the implementation block
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_trigger;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(void)mesaUnlockTriggerFired:(id)arg1 ;
-(id)initWithPearlSettings:(id)arg1 andUnlockTrigger:(id)arg2 ;
-(id<SBBiometricUnlockBehaviorDelegate>)biometricUnlockBehaviorDelegate;
-(void)setBiometricUnlockBehaviorDelegate:(id<SBBiometricUnlockBehaviorDelegate>)arg1 ;
-(void)_handlePearlFailure;
-(id)_feedbackForBioUnlockEventThatWasSpontaneous:(BOOL)arg1 ;
-(id)_feedbackForFailureSettings:(id)arg1 ;
-(id)_feedbackForPasscodeEvent;
-(void)_setTrigger:(id)arg1 ;
@end

