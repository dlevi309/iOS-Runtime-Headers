/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SASSystemState.h>

@class SASSystemState, SiriContextOverride;

@interface SASOverriddenSystemState : SASSystemState {

	SASSystemState* _systemState;
	SiriContextOverride* _contextOverride;

}

@property (nonatomic,retain) SASSystemState * systemState;                       //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,retain) SiriContextOverride * contextOverride;              //@synthesize contextOverride=_contextOverride - In the implementation block
-(BOOL)isPad;
-(SASSystemState *)systemState;
-(void)setSystemState:(SASSystemState *)arg1 ;
-(BOOL)siriIsSupported;
-(BOOL)siriIsEnabled;
-(BOOL)carDNDActive;
-(id)lockStateMonitor;
-(BOOL)isConnectedToTrustedCarPlay;
-(BOOL)accessibilityShortcutEnabled;
-(BOOL)isConnectedToCarPlay;
-(BOOL)siriIsRestricted;
-(void)setContextOverride:(SiriContextOverride *)arg1 ;
-(void)setLockStateMonitor:(id)arg1 ;
-(SiriContextOverride *)contextOverride;
-(id)initWithSystemState:(id)arg1 contextOverride:(id)arg2 ;
-(id)currentSpokenLanguageCode;
-(BOOL)hasUnlockedSinceBoot;
-(BOOL)deviceIsBlocked;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)pocketStateShouldPreventVoiceTrigger;
-(BOOL)smartCoverClosed;
@end

