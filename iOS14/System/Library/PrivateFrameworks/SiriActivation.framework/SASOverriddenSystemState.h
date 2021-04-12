/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SASSystemState *)systemState;
-(BOOL)isPad;
-(BOOL)accessibilityShortcutEnabled;
-(BOOL)isConnectedToCarPlay;
-(BOOL)isConnectedToTrustedCarPlay;
-(BOOL)siriIsEnabled;
-(id)currentSpokenLanguageCode;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)siriIsRestricted;
-(BOOL)smartCoverClosed;
-(void)setContextOverride:(SiriContextOverride *)arg1 ;
-(void)setSystemState:(SASSystemState *)arg1 ;
-(BOOL)deviceIsBlocked;
-(BOOL)siriIsSupported;
-(BOOL)hasUnlockedSinceBoot;
-(id)lockStateMonitor;
-(void)setLockStateMonitor:(id)arg1 ;
-(id)initWithSystemState:(id)arg1 contextOverride:(id)arg2 ;
-(BOOL)pocketStateShouldPreventVoiceTrigger;
-(SiriContextOverride *)contextOverride;
-(BOOL)carDNDActive;
@end

