/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/

@class NSString, NRDevice, HKRPOxygenSaturationSettings, HKRPOxygenSaturationOnboardingCache, HKMobileCountryCodeManager;


@protocol HKRPOxygenSaturationOnboardingManagerDataSource <NSObject>
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
@required
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

@end

