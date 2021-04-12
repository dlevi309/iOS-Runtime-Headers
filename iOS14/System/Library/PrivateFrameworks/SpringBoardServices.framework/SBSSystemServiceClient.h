/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSServiceFacilityClient.h>

@interface SBSSystemServiceClient : SBSServiceFacilityClient {

	BOOL _buttonEventServiceIsWaitingForServerMessages;

}

@property (assign,nonatomic) long long passcodePolicy; 
+(id)serviceFacilityIdentifier;
-(void)addWidgetsToEachPage;
-(void)setRequestsHIDEvents:(BOOL)arg1 token:(id)arg2 forButtonKind:(long long)arg3 ;
-(void)setEventMask:(unsigned long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(BOOL)arg2 ;
-(void)setButtonEventServiceIsWaitingForServerMessages:(BOOL)arg1 ;
-(void)fetchUnlockCredentialSetWithCompletion:(/*^block*/id)arg1 ;
-(void)suspendAllDisplays;
-(void)disableRemoteStateDumpWithCompletion:(/*^block*/id)arg1 ;
-(void)setIdleTimerEnabled:(BOOL)arg1 ;
-(void)resetToHomeScreenAnimated:(BOOL)arg1 ;
-(void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)countScenesForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)loadStashedSwitcherModelFromPath:(id)arg1 ;
-(void)setMallocStackLoggingEnabled:(BOOL)arg1 ;
-(void)setPasscodePolicy:(long long)arg1 ;
-(void)requestAppSwitcherAppearanceForHiddenApplicationWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)toggleStateForButtonKind:(long long)arg1 ;
-(void)setHiddenFeaturesEnabled:(BOOL)arg1 ;
-(void)enableRemoteStateDumpWithTimeout:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)acquireHUDHiddenAssertionForIdentifier:(id)arg1 ;
-(void)addWidgetWithIdentifier:(id)arg1 toPage:(int)arg2 withSizing:(int)arg3 ;
-(void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2 ;
-(void)setAlertsEnabled:(BOOL)arg1 ;
-(void)setOrientationLockEnabled:(BOOL)arg1 ;
-(void)stashSwitcherModelToPath:(id)arg1 ;
-(void)acquireAssertionOfType:(long long)arg1 forReason:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1 ;
-(void)_handleButtonEventConsumePressMessage:(id)arg1 ;
-(void)requestStateDump:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)passcodePolicy;
@end

