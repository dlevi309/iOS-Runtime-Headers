/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/

#import <RespiratoryHealth/RespiratoryHealth-Structs.h>
#import <libobjc.A.dylib/HKRPOxygenSaturationOnboardingManagerDataSource.h>

@class NSString, NRDevice, HKRPOxygenSaturationSettings, HKRPOxygenSaturationOnboardingCache, HKMobileCountryCodeManager, HKFeatureAvailabilityStore, HKRPOxygenSaturationAvailability;

@interface _HKRPOxygenSaturationOnboardingManagerDataSource : NSObject <HKRPOxygenSaturationOnboardingManagerDataSource> {

	os_unfair_lock_s _lock;
	HKFeatureAvailabilityStore* _featureAvailabilityProvider;
	HKRPOxygenSaturationAvailability* _oxygenSaturationAvailability;
	HKRPOxygenSaturationSettings* _oxygenSaturationSettings;
	HKRPOxygenSaturationOnboardingCache* _onboardingCache;
	HKMobileCountryCodeManager* _mobileCountryCodeManager;

}

@property (getter=isBloodOxygenSaturationEnabled,nonatomic,readonly) BOOL bloodOxygenSaturationEnabled; 
@property (getter=isAgeGated,nonatomic,readonly) BOOL ageGated; 
@property (nonatomic,readonly) BOOL shouldAdvertise; 
@property (nonatomic,readonly) NSString * countryCodeFromCurrentLocale; 
@property (nonatomic,readonly) BOOL skipHardwareCheck; 
@property (nonatomic,readonly) NRDevice * device; 
@property (nonatomic,readonly) id<HKFeatureAvailabilityProviding> featureAvailabilityProvider; 
@property (nonatomic,readonly) HKRPOxygenSaturationSettings * oxygenSaturationSettings; 
@property (nonatomic,readonly) HKRPOxygenSaturationOnboardingCache * onboardingCache; 
@property (nonatomic,readonly) HKMobileCountryCodeManager * mobileCountryCodeManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(HKMobileCountryCodeManager *)mobileCountryCodeManager;
-(BOOL)shouldAdvertise;
-(NRDevice *)device;
-(BOOL)isBloodOxygenSaturationEnabled;
-(BOOL)skipHardwareCheck;
-(id<HKFeatureAvailabilityProviding>)featureAvailabilityProvider;
-(BOOL)isAgeGated;
-(HKRPOxygenSaturationSettings *)oxygenSaturationSettings;
-(HKRPOxygenSaturationOnboardingCache *)onboardingCache;
-(NSString *)countryCodeFromCurrentLocale;
-(id)_lazyPropertyWithLockedBlock:(/*^block*/id)arg1 ;
@end

