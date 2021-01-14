/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKFeatureAvailabilityStoreServer <NSObject>
@required
-(void)remote_getIsCurrentOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1;
-(void)remote_canCompleteOnboardingForCountryCode:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_highestOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1;
-(void)remote_canCompleteOnboardingForCountryCode:(id)arg1 devicePairingID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_onboardedCountryCodeSupportedStateWithCompletion:(/*^block*/id)arg1;
-(void)remote_onboardedCountryCodeSupportedStateForDevicePairingID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_resetOnboardingWithCompletion:(/*^block*/id)arg1;
-(void)remote_getIsFeatureCapabilitySupportedOnActivePairedDeviceWithCompletion:(/*^block*/id)arg1;
-(void)remote_stopObservingChanges;
-(void)remote_getIsFeatureCapabilitySupportedOnDeviceWithPairingID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_earliestDateLowestOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1;
-(void)remote_startObservingChangesWithCompletion:(/*^block*/id)arg1;
-(void)remote_setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 completion:(/*^block*/id)arg2;

@end

