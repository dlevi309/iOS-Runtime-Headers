/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSystemServiceServerTestAutomationDelegate.h>

@protocol BSInvalidatable;
@class FBServiceClientAuthenticator, NSHashTable, NSString;

@interface SBTestAutomationService : NSObject <SBSystemServiceServerTestAutomationDelegate> {

	FBServiceClientAuthenticator* _clientAuthenticator;
	id<BSInvalidatable> _idleTimerAssertion;
	NSHashTable* _inFlightAnimationTransactions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)_authenticateClient:(id)arg1 ;
-(void)systemServiceServer:(id)arg1 suspendAllDisplaysForClient:(id)arg2 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setAlertsEnabled:(BOOL)arg3 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setIdleTimerEnabled:(BOOL)arg3 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setOrientationLockEnabled:(BOOL)arg3 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setMallocStackLoggingEnabled:(BOOL)arg3 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setHiddenFeaturesEnabled:(BOOL)arg3 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 resetToHomeScreenAnimated:(BOOL)arg3 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 port:(id)arg3 acquireHUDHiddenAssertionForIdentifier:(id)arg4 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setApplicationBundleIdentifier:(id)arg3 blockedForScreenTime:(BOOL)arg4 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg3 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 countScenesForBundleIdentifier:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 stashSwitcherModelToPath:(id)arg3 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 loadStashedSwitcherModelFromPath:(id)arg3 ;
-(void)systemServiceServer:(id)arg1 addWidgetsToEachPageForClient:(id)arg2 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 addWidgetWithIdentifier:(id)arg3 toPage:(long long)arg4 withSizing:(long long)arg5 ;
@end

