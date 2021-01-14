/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBUIBiometricResourceObserver.h>

@protocol SBUIBiometricResource;
@class BiometricKit, NSString;

@interface SBBiometricEventLogger : NSObject <SBUIBiometricResourceObserver> {

	BiometricKit* _biometricKit;
	BOOL _isScreenOn;
	BOOL _passcodeSuccessAfterBioFailureTriggerArmed;
	id<SBUIBiometricResource> _biometricResource;
	BOOL _fingerOnWithScreenOn;
	unsigned long long _fingerOnTime;
	unsigned long long _keybagUnlockTime;

}

@property (assign,nonatomic) unsigned long long fingerOnTime;                  //@synthesize fingerOnTime=_fingerOnTime - In the implementation block
@property (assign,nonatomic) BOOL fingerOnWithScreenOn;                        //@synthesize fingerOnWithScreenOn=_fingerOnWithScreenOn - In the implementation block
@property (assign,nonatomic) unsigned long long keybagUnlockTime;              //@synthesize keybagUnlockTime=_keybagUnlockTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)logClass:(unsigned char)arg1 code:(unsigned)arg2 ;
+(void)logEvent:(unsigned)arg1 ;
-(BOOL)_shouldSyslogTimestamps;
-(id)init;
-(void)_resetPasscodeStateMachine;
-(void)setFingerOnWithScreenOn:(BOOL)arg1 ;
-(BOOL)fingerOnWithScreenOn;
-(void)_unlockAnimationWillStart:(id)arg1 ;
-(void)_coversheetSwipedForDismissal:(id)arg1 ;
-(void)setKeybagUnlockTime:(unsigned long long)arg1 ;
-(void)setFingerOnTime:(unsigned long long)arg1 ;
-(unsigned long long)fingerOnTime;
-(void)_fingerOn:(id)arg1 ;
-(void)_biometricAuthenticationSucceeded;
-(void)_clearEverything;
-(void)_keybagBioUnlock:(id)arg1 ;
-(unsigned long long)_machTimeInMilliseconds;
-(void)timestampEvent:(unsigned long long)arg1 ;
-(unsigned long long)keybagUnlockTime;
-(void)_tryAgain:(id)arg1 ;
-(void)_screenTurnedOn:(id)arg1 ;
-(void)_passcodeAuthenticationSucceeded;
-(void)_systemDidWakeFromSleep:(id)arg1 ;
-(void)_passcodePromptCancelled:(id)arg1 ;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
-(void)_biometricAuthenticationFailed;
-(void)_backlightLevelChanged:(id)arg1 ;
-(void)_passcodeViewTransitionedToPasscode:(id)arg1 ;
-(void)_prearmMatch:(id)arg1 ;
-(void)_authRequestCompleted:(id)arg1 ;
@end

