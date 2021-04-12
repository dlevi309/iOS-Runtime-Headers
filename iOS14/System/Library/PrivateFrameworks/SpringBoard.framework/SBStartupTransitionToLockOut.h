/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBBaseStartupTransition.h>

@class SBLockScreenManager, SBFUserAuthenticationController;

@interface SBStartupTransitionToLockOut : SBBaseStartupTransition {

	SBLockScreenManager* _lockScreenManager;
	SBFUserAuthenticationController* _authController;

}

@property (nonatomic,readonly) SBLockScreenManager * lockScreenManager;              //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
-(SBLockScreenManager *)lockScreenManager;
-(void)performTransitionWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDestination:(unsigned long long)arg1 context:(id)arg2 ;
-(id)suggestedLockAnimationForTransitionRequest:(id)arg1 ;
@end

