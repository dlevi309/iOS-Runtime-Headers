/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDOnboardingCompletionManagerObserver.h>
#import <libobjc.A.dylib/HDPairedDeviceCapabilityProvidingDelegate.h>
#import <libobjc.A.dylib/HDFeatureAvailabilityExtension.h>

@protocol OS_os_log, HDPairedDeviceCapabilityProviding, OS_dispatch_queue;
@class NSString, HDProfile, NSObject, NSUUID, HKObserverSet, NSSet;

@interface HDFeatureAvailabilityManager : NSObject <HDOnboardingCompletionManagerObserver, HDPairedDeviceCapabilityProvidingDelegate, HDFeatureAvailabilityExtension> {

	HDProfile* _profile;
	NSObject*<OS_os_log> _loggingCategory;
	NSString* _featureIdentifier;
	long long _currentOnboardingVersion;
	NSUUID* _pairedDeviceCapability;
	id<HDPairedDeviceCapabilityProviding> _pairedDeviceCapabilityProvider;
	HKObserverSet* _observers;
	NSSet* _allowedCountryCodes;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSString * featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
-(id)deviceForPairingID:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(BOOL)_canCompleteOnboardingForCountryCode:(id)arg1 ;
-(void)onboardingCompletionManager:(id)arg1 didUpdateOnboardingCompletionsForFeatureIdentifier:(id)arg2 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1 ;
-(id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 allowedCountryCodes:(id)arg4 pairedDeviceCapability:(id)arg5 loggingCategory:(id)arg6 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1 ;
-(id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 allowedCountryCodes:(id)arg4 loggingCategory:(id)arg5 ;
-(void)isCurrentOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1 ;
-(void)registerObserver:(id)arg1 queue:(id)arg2 ;
-(id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 pairedDeviceCapability:(id)arg4 allowedCountryCodes:(id)arg5 loggingCategory:(id)arg6 pairedDeviceCapabilityProvider:(id)arg7 ;
-(id)description;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)highestOnboardingVersionCompletedWithError:(id*)arg1 ;
-(id)onboardedCountryCodeSupportedStateForDevice:(id)arg1 error:(id*)arg2 ;
-(id)_onboardingCompletionsForHighestVersionWithError:(id*)arg1 ;
-(void)pairedDeviceCapabilitiesDidUpdate:(id)arg1 ;
-(NSString *)featureIdentifier;
-(id)_onboardingCompletionsForLowestVersionWithError:(id*)arg1 ;
-(void)resetOnboardingWithCompletion:(/*^block*/id)arg1 ;
-(id)onboardedCountryCodeSupportedStateWithError:(id*)arg1 ;
-(void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unitTest_updateAllowedCountryCodes:(id)arg1 ;
-(id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 pairedDeviceCapability:(id)arg4 loggingCategory:(id)arg5 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)isFeatureCapabilitySupportedOnDevice:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 loggingCategory:(id)arg4 ;
@end

