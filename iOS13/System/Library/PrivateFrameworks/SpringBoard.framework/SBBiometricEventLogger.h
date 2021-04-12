/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)logEvent:(unsigned)arg1 ;
+(void)logClass:(unsigned char)arg1 code:(unsigned)arg2 ;
-(id)init;
-(void)timestampEvent:(unsigned long long)arg1 ;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
-(void)_clearEverything;
-(void)_authRequestCompleted:(id)arg1 ;
-(void)_screenTurnedOn:(id)arg1 ;
-(void)_backlightLevelChanged:(id)arg1 ;
-(void)_fingerOn:(id)arg1 ;
-(void)_tryAgain:(id)arg1 ;
-(void)_keybagBioUnlock:(id)arg1 ;
-(void)_unlockAnimationWillStart:(id)arg1 ;
-(void)_prearmMatch:(id)arg1 ;
-(void)_systemDidWakeFromSleep:(id)arg1 ;
-(void)_passcodePromptCancelled:(id)arg1 ;
-(void)_coversheetSwipedForDismissal:(id)arg1 ;
-(void)_passcodeViewTransitionedToPasscode:(id)arg1 ;
-(void)setFingerOnTime:(unsigned long long)arg1 ;
-(void)setKeybagUnlockTime:(unsigned long long)arg1 ;
-(void)setFingerOnWithScreenOn:(BOOL)arg1 ;
-(void)_resetPasscodeStateMachine;
-(unsigned long long)fingerOnTime;
-(unsigned long long)_machTimeInMilliseconds;
-(void)_biometricAuthenticationSucceeded;
-(unsigned long long)keybagUnlockTime;
-(void)_passcodeAuthenticationSucceeded;
-(void)_biometricAuthenticationFailed;
-(BOOL)_shouldSyslogTimestamps;
-(BOOL)fingerOnWithScreenOn;
@end

