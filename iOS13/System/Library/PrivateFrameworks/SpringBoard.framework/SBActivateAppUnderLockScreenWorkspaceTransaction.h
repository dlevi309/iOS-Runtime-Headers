/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@protocol SBLockScreenEnvironment;
@class SBDisableActiveInterfaceOrientationChangeAssertion;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction {

	id<SBLockScreenEnvironment> _lockScreenEnvironment;
	SBDisableActiveInterfaceOrientationChangeAssertion* _disableActiveOrientationChangeAssertion;

}
-(void)dealloc;
-(void)_begin;
-(void)_didComplete;
-(id)initWithTransitionRequest:(id)arg1 lockScreenEnvironment:(id)arg2 ;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(void)_activateLockScreen;
-(void)_lockScreenDidActivate;
-(void)_setupAndActivate;
-(BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
@end

