/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMesaUnlockTrigger.h>

@protocol SBBiometricUnlockBehaviorConfigurationDelegate;
@class BSTimer;

@interface SBZionUnlockTrigger : SBMesaUnlockTrigger {

	id<SBBiometricUnlockBehaviorConfigurationDelegate> _behaviorConfigurationDelegate;
	BOOL _fingerOn;
	BOOL _fingerOffSinceWake;
	BSTimer* _restToOpenTimer;
	BSTimer* _minTouchIDTimer;

}
-(id)description;
-(BOOL)bioUnlock;
-(void)screenOff;
-(void)lockButtonDown;
-(id)succinctDescriptionBuilder;
-(void)fingerOn;
-(void)fingerOff;
-(id)initWithUnlockBehaviorConfigurationDelegate:(id)arg1 ;
-(BOOL)_isRestToOpenAvailable;
-(void)_cancelMinTouchIDTimer;
-(void)_startRestToOpenTimerWithDuration:(double)arg1 ;
-(void)_startRestToOpenTimer;
-(void)_cancelRestToOpenTimer;
-(void)_evaluateRestToOpenTimer;
@end

