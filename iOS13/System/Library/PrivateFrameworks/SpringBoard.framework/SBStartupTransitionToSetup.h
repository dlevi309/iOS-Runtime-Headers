/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBBaseStartupTransition.h>

@class SBBulletinWindowController, SBFUserAuthenticationController, SBApplicationController, SBSetupManager, SBLockScreenManager, SBInitialRestartState;

@interface SBStartupTransitionToSetup : SBBaseStartupTransition {

	SBBulletinWindowController* _bulletinWindowController;
	SBFUserAuthenticationController* _authController;
	SBApplicationController* _appController;
	SBSetupManager* _setupManager;
	SBLockScreenManager* _lockScreenManager;
	SBInitialRestartState* _initialRestartState;

}
-(void)performTransitionWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDestination:(unsigned long long)arg1 context:(id)arg2 ;
-(id)initWithDestination:(unsigned long long)arg1 context:(id)arg2 initialRestartState:(id)arg3 ;
-(void)_activateSetupWithCompletion:(/*^block*/id)arg1 underLock:(BOOL)arg2 fromSnapshot:(BOOL)arg3 ;
@end

