/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SBBiometricUnlockBehaviorDelegate>)biometricUnlockBehaviorDelegate;
-(id)succinctDescription;
-(void)mesaUnlockTriggerFired:(id)arg1 ;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setBiometricUnlockBehaviorDelegate:(id<SBBiometricUnlockBehaviorDelegate>)arg1 ;
-(NSString *)description;
-(void)_setTrigger:(id)arg1 ;
-(id)_trigger;
-(id)_feedbackForFailureSettings:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_feedbackForPasscodeEvent;
-(id)_feedbackForBioUnlockEventThatWasSpontaneous:(BOOL)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithPearlSettings:(id)arg1 andUnlockTrigger:(id)arg2 ;
-(void)_handlePearlFailure;
@end

