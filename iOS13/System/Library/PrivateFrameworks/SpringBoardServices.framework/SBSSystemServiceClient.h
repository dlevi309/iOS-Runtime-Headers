/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSServiceFacilityClient.h>

@interface SBSSystemServiceClient : SBSServiceFacilityClient {

	BOOL _buttonEventServiceIsWaitingForServerMessages;

}

@property (assign,nonatomic) long long passcodePolicy; 
+(id)serviceFacilityIdentifier;
-(void)fetchUnlockCredentialSetWithCompletion:(/*^block*/id)arg1 ;
-(void)requestAppSwitcherAppearanceForHiddenApplicationWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acquireAssertionOfType:(long long)arg1 forReason:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setEventMask:(unsigned long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3 ;
-(long long)toggleStateForButtonKind:(long long)arg1 ;
-(void)setRequestsHIDEvents:(BOOL)arg1 token:(id)arg2 forButtonKind:(long long)arg3 ;
-(void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2 ;
-(void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)passcodePolicy;
-(void)setPasscodePolicy:(long long)arg1 ;
-(void)setButtonEventServiceIsWaitingForServerMessages:(BOOL)arg1 ;
-(void)_handleButtonEventConsumePressMessage:(id)arg1 ;
-(void)suspendAllDisplays;
-(void)setAlertsEnabled:(BOOL)arg1 ;
-(void)setIdleTimerEnabled:(BOOL)arg1 ;
-(void)setOrientationLockEnabled:(BOOL)arg1 ;
-(void)resetToHomeScreenAnimated:(BOOL)arg1 ;
-(void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(BOOL)arg2 ;
-(void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1 ;
-(id)acquireHUDHiddenAssertionForIdentifier:(id)arg1 ;
-(void)countScenesForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestStateDump:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)enableRemoteStateDumpWithTimeout:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableRemoteStateDumpWithCompletion:(/*^block*/id)arg1 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
@end

