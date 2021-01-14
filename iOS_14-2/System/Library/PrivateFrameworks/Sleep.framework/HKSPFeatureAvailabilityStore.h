/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/HKSPSleepStorePrivateObserver.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityProviding.h>

@protocol HKSPSleepOnboardingStore, HKSPFeatureAvailabilityPairedDeviceRegistry;
@class NSString, HKObserverSet;

@interface HKSPFeatureAvailabilityStore : NSObject <HKSPSleepStorePrivateObserver, HKFeatureAvailabilityProviding> {

	id<HKSPSleepOnboardingStore> _sleepStore;
	HKObserverSet* _observers;
	long long _feature;
	id<HKSPFeatureAvailabilityPairedDeviceRegistry> _pairedDeviceRegistry;
	int _deviceCharacteristicChangeNotifyToken;
	NSString* _featureIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
-(void)unregisterObserver:(id)arg1 ;
-(void)_registerForNotifications;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1 ;
-(void)isCurrentOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1 ;
-(void)registerObserver:(id)arg1 queue:(id)arg2 ;
-(NSString *)description;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)highestOnboardingVersionCompletedWithError:(id*)arg1 ;
-(id)onboardedCountryCodeSupportedStateForDevice:(id)arg1 error:(id*)arg2 ;
-(NSString *)featureIdentifier;
-(void)resetOnboardingWithCompletion:(/*^block*/id)arg1 ;
-(id)onboardedCountryCodeSupportedStateWithError:(id*)arg1 ;
-(void)sleepStore:(id)arg1 sleepEventRecordDidChange:(id)arg2 ;
-(void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFeatureIdentifier:(id)arg1 sleepStore:(id)arg2 pairedDeviceRegistry:(id)arg3 ;
-(void)_pairedDeviceDidChange;
-(id)_currentSleepEventRecordWithError:(id*)arg1 ;
-(BOOL)_isCurrentOnboardingVersionCompletedForSleepEventRecord:(id)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg1 sleepStore:(id)arg2 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)isFeatureCapabilitySupportedOnDevice:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

