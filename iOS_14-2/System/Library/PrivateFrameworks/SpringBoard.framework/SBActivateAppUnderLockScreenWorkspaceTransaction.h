/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@protocol SBLockScreenEnvironment;
@class SBDisableActiveInterfaceOrientationChangeAssertion;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction {

	id<SBLockScreenEnvironment> _lockScreenEnvironment;
	SBDisableActiveInterfaceOrientationChangeAssertion* _disableActiveOrientationChangeAssertion;

}
-(void)_begin;
-(void)_didComplete;
-(void)_lockScreenDidActivate;
-(void)_setupAndActivate;
-(void)_activateLockScreen;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
-(id)initWithTransitionRequest:(id)arg1 lockScreenEnvironment:(id)arg2 ;
-(void)dealloc;
@end

