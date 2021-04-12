/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBBaseStartupTransition.h>

@class SBBannerManager, SBFUserAuthenticationController, SBApplicationController, SBSetupManager, SBLockScreenManager, SBInitialRestartState;

@interface SBStartupTransitionToSetup : SBBaseStartupTransition {

	SBBannerManager* _bannerManager;
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

