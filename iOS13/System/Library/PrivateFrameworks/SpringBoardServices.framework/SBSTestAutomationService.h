/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSTestAutomationService : SBSAbstractSystemService
-(void)suspendAllDisplays;
-(void)setAlertsEnabled:(BOOL)arg1 ;
-(void)setIdleTimerEnabled:(BOOL)arg1 ;
-(void)setOrientationLockEnabled:(BOOL)arg1 ;
-(void)resetToHomeScreenAnimated:(BOOL)arg1 ;
-(void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(BOOL)arg2 ;
-(void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1 ;
-(id)acquireHUDHiddenAssertionForIdentifier:(id)arg1 ;
-(void)countScenesForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

