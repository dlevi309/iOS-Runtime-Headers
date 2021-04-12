/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)systemServiceServer:(id)arg1 client:(id)arg2 resetToHomeScreenAnimated:(BOOL)arg3 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 port:(id)arg3 acquireHUDHiddenAssertionForIdentifier:(id)arg4 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setApplicationBundleIdentifier:(id)arg3 blockedForScreenTime:(BOOL)arg4 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg3 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 countScenesForBundleIdentifier:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
@end

