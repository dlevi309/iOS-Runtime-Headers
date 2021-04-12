/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
*/

#import <libobjc.A.dylib/HDFeatureAvailabilityExtension.h>

@protocol HDPairedDeviceCapabilityProviding, OS_os_log;
@class NSString, HDProfile, HDFeatureAvailabilityManager, NSDictionary, NSUUID, NSObject;

@interface HDRPFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension> {

	HDProfile* _profile;
	NSString* _featureIdentifier;
	long long _currentOnboardingVersion;
	HDFeatureAvailabilityManager* _manager;
	id<HDPairedDeviceCapabilityProviding> _capabilityProvider;
	NSDictionary* _supportedCountries;
	NSUUID* _pairedDeviceCapability;
	NSObject*<OS_os_log> _loggingCategory;
	BOOL _skipHardwareCheck;
	long long __unitTest_currentOnboardingVersionOverride;

}

@property (assign,nonatomic) long long _unitTest_currentOnboardingVersionOverride;              //@synthesize _unitTest_currentOnboardingVersionOverride=__unitTest_currentOnboardingVersionOverride - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureIdentifier; 
-(id)deviceForPairingID:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1 ;
-(void)isCurrentOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1 ;
-(void)registerObserver:(id)arg1 queue:(id)arg2 ;
-(id)description;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)highestOnboardingVersionCompletedWithError:(id*)arg1 ;
-(id)onboardedCountryCodeSupportedStateForDevice:(id)arg1 error:(id*)arg2 ;
-(id)_onboardingCompletionsForHighestVersionWithError:(id*)arg1 ;
-(NSString *)featureIdentifier;
-(id)_onboardingCompletionsForLowestVersionWithError:(id*)arg1 ;
-(void)resetOnboardingWithCompletion:(/*^block*/id)arg1 ;
-(id)onboardedCountryCodeSupportedStateWithError:(id*)arg1 ;
-(void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)isFeatureCapabilitySupportedOnDevice:(id)arg1 error:(id*)arg2 ;
-(long long)_currentOnboardingVersion;
-(void)_resetOnboarding;
-(id)initWithProfile:(id)arg1 supportedCountries:(id)arg2 pairedDeviceCapabilityProvider:(id)arg3 ;
-(id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 supportedCountries:(id)arg4 pairedDeviceCapability:(id)arg5 loggingCategory:(id)arg6 skipHardwareCheck:(BOOL)arg7 pairedDeviceCapabilityProvider:(id)arg8 ;
-(id)_watchAvailabilityForDevice:(id)arg1 ;
-(id)_phoneAvailabilityForDevice:(id)arg1 ;
-(long long)_isRegionCodeFound:(id)arg1 availabilityWatch:(id)arg2 availabilityPhone:(id)arg3 ;
-(long long)_determineSupportedStateWithOnboardingCompletions:(id)arg1 device:(id)arg2 ;
-(long long)_unitTest_currentOnboardingVersionOverride;
-(void)set_unitTest_currentOnboardingVersionOverride:(long long)arg1 ;
@end

