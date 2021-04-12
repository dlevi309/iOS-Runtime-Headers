/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBBaseStartupTransition.h>

@class SBLockScreenManager, SBFUserAuthenticationController;

@interface SBStartupTransitionToLockOut : SBBaseStartupTransition {

	SBLockScreenManager* _lockScreenManager;
	SBFUserAuthenticationController* _authController;

}

@property (nonatomic,readonly) SBLockScreenManager * lockScreenManager;              //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
-(void)performTransitionWithCompletionBlock:(/*^block*/id)arg1 ;
-(SBLockScreenManager *)lockScreenManager;
-(id)initWithDestination:(unsigned long long)arg1 context:(id)arg2 ;
-(id)suggestedLockAnimationForTransitionRequest:(id)arg1 ;
@end

