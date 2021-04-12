/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityStoreClient.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityProviding.h>

@class NSString, HKObserverSet, HKTaskServerProxyProvider;

@interface HKFeatureAvailabilityStore : NSObject <HKFeatureAvailabilityStoreClient, _HKXPCExportable, HKFeatureAvailabilityProviding> {

	NSString* _featureIdentifier;
	HKObserverSet* _observers;
	HKTaskServerProxyProvider* _proxyProvider;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureIdentifier; 
+(id)taskIdentifier;
-(void)unregisterObserver:(id)arg1 ;
-(void)connectionInvalidated;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1 ;
-(void)registerObserver:(id)arg1 queue:(id)arg2 activationHandler:(/*^block*/id)arg3 ;
-(id)exportedInterface;
-(BOOL)_synchronouslyStartObservingWithError:(id*)arg1 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg1 healthStore:(id)arg2 ;
-(void)isCurrentOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1 ;
-(id)remoteInterface;
-(void)registerObserver:(id)arg1 queue:(id)arg2 ;
-(void)_notifyObserversForPairedDeviceCapabilityUpdate;
-(NSString *)description;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)highestOnboardingVersionCompletedWithError:(id*)arg1 ;
-(void)_handleAutomaticProxyReconnection;
-(void)_startObservingWithActivationHandler:(/*^block*/id)arg1 ;
-(void)client_featureAvailabilityExtensionDidUpdateOnboardingCompletion;
-(id)onboardedCountryCodeSupportedStateForDevice:(id)arg1 error:(id*)arg2 ;
-(NSString *)featureIdentifier;
-(void)resetOnboardingWithCompletion:(/*^block*/id)arg1 ;
-(id)onboardedCountryCodeSupportedStateWithError:(id*)arg1 ;
-(void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)isFeatureCapabilitySupportedOnDevice:(id)arg1 error:(id*)arg2 ;
-(void)client_featureAvailabilityExtensionDidUpdatePairedDeviceCapability;
-(void)_notifyObserversForOnboardingCompletionUpdate;
@end

