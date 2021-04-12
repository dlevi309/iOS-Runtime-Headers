/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

@class NSString;


@protocol HKFeatureAvailabilityProviding
@property (nonatomic,copy,readonly) NSString * featureIdentifier; 
@required
-(void)unregisterObserver:(id)arg1;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1;
-(id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1;
-(void)isCurrentOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1;
-(void)registerObserver:(id)arg1 queue:(id)arg2;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 device:(id)arg2 error:(id*)arg3;
-(id)highestOnboardingVersionCompletedWithError:(id*)arg1;
-(id)onboardedCountryCodeSupportedStateForDevice:(id)arg1 error:(id*)arg2;
-(NSString *)featureIdentifier;
-(void)resetOnboardingWithCompletion:(/*^block*/id)arg1;
-(id)onboardedCountryCodeSupportedStateWithError:(id*)arg1;
-(void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 completion:(/*^block*/id)arg2;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2;
-(id)isFeatureCapabilitySupportedOnDevice:(id)arg1 error:(id*)arg2;

@end

