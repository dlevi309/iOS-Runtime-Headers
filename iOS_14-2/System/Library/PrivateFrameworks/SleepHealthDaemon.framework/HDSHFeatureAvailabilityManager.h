/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
*/

#import <libobjc.A.dylib/HDFeatureAvailabilityExtensionObserver.h>
#import <libobjc.A.dylib/HKSPSleepStorePrivateObserver.h>
#import <libobjc.A.dylib/HDFeatureAvailabilityExtension.h>

@protocol OS_dispatch_queue;
@class NSString, HKObserverSet, HDFeatureAvailabilityManager, NSUserDefaults, NSObject;

@interface HDSHFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtensionObserver, HKSPSleepStorePrivateObserver, HDFeatureAvailabilityExtension> {

	/*^block*/id _sleepStoreProvider;
	long long _currentOnboardingVersion;
	HKObserverSet* _observers;
	HDFeatureAvailabilityManager* _manager;
	BOOL _needsMigration;
	NSString* _observedDefaultsKey;
	NSUserDefaults* _sleepDaemonDefaults;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureIdentifier; 
-(id)deviceForPairingID:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1 ;
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
-(void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_currentSleepEventRecordWithError:(id*)arg1 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)isFeatureCapabilitySupportedOnDevice:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)_unregisterForSleepUserDefaultsChanges;
-(void)_sleepUserDefaultsDidChangeForKey:(id)arg1 ;
-(id)_currentSleepEventRecordWithSleepStore:(id)arg1 error:(id*)arg2 ;
-(id)_migrateOnboardingIfNeededAndReturnCompletedVersion;
-(void)_saveOnboardingCompletedVersion:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_migrateOnboardingAndReturnCompletedVersion;
-(void)_registerForSleepUserDefaultsChangesIfNecessary;
-(void)_notifyObserversForOnboardingCompletedVersionChange;
-(id)initWithProfile:(id)arg1 sleepStoreProvider:(/*^block*/id)arg2 featureIdentifier:(id)arg3 currentOnboardingVersion:(long long)arg4 ;
-(void)unitTest_notifyObserversForOnboardingCompletedVersionChange;
@end
