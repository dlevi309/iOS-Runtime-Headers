/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSTestAutomationService : SBSAbstractSystemService
-(void)addWidgetsToEachPage;
-(void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(BOOL)arg2 ;
-(void)suspendAllDisplays;
-(void)setIdleTimerEnabled:(BOOL)arg1 ;
-(void)resetToHomeScreenAnimated:(BOOL)arg1 ;
-(void)countScenesForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)loadStashedSwitcherModelFromPath:(id)arg1 ;
-(void)setMallocStackLoggingEnabled:(BOOL)arg1 ;
-(void)setHiddenFeaturesEnabled:(BOOL)arg1 ;
-(id)acquireHUDHiddenAssertionForIdentifier:(id)arg1 ;
-(void)addWidgetWithIdentifier:(id)arg1 toPage:(int)arg2 withSizing:(int)arg3 ;
-(void)setAlertsEnabled:(BOOL)arg1 ;
-(void)setOrientationLockEnabled:(BOOL)arg1 ;
-(void)stashSwitcherModelToPath:(id)arg1 ;
-(void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1 ;
@end

