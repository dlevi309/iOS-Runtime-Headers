/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSNumber, HKHealthStore, HKKeyValueDomain, NSUserDefaults, HKObserverSet, HKActiveWatchRemoteFeatureAvailabilityDataSource, NSMutableSet, HKMobileCountryCodeManager, HKWatchAppAvailability, NSDate;

@interface HKHeartRhythmAvailability : NSObject {

	os_unfair_lock_s _cacheLock;
	os_unfair_lock_s _onboardingKeysReadLock;
	NSNumber* _isAtrialFibrillationDetectionDisabledCache;
	NSNumber* _isElectrocardiogramDisabledCache;
	int _onboardingStateDidChangeNotificationToken;
	int _featureAvailabilityConditionsDidUpdateNotificationToken;
	int _userCharacteristicsDidChangeNotificationToken;
	HKHealthStore* _healthStore;
	HKKeyValueDomain* _keyValueDomain;
	NSUserDefaults* _heartRhythmUserDefaults;
	HKObserverSet* _heartRhythmAvailabilityObservers;
	HKActiveWatchRemoteFeatureAvailabilityDataSource* _availabilityDataSource;
	NSMutableSet* _onboardingKeysReadSet;
	HKMobileCountryCodeManager* _mobileCountryCodeManager;
	HKWatchAppAvailability* _ecgAppAvailability;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                                                                //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKKeyValueDomain * keyValueDomain;                                                                                          //@synthesize keyValueDomain=_keyValueDomain - In the implementation block
@property (nonatomic,retain) NSUserDefaults * heartRhythmUserDefaults;                                                                                   //@synthesize heartRhythmUserDefaults=_heartRhythmUserDefaults - In the implementation block
@property (nonatomic,retain) HKObserverSet * heartRhythmAvailabilityObservers;                                                                           //@synthesize heartRhythmAvailabilityObservers=_heartRhythmAvailabilityObservers - In the implementation block
@property (nonatomic,retain) HKActiveWatchRemoteFeatureAvailabilityDataSource * availabilityDataSource;                                                  //@synthesize availabilityDataSource=_availabilityDataSource - In the implementation block
@property (nonatomic,retain) NSMutableSet * onboardingKeysReadSet;                                                                                       //@synthesize onboardingKeysReadSet=_onboardingKeysReadSet - In the implementation block
@property (assign,nonatomic) int onboardingStateDidChangeNotificationToken;                                                                              //@synthesize onboardingStateDidChangeNotificationToken=_onboardingStateDidChangeNotificationToken - In the implementation block
@property (assign,nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken;                                                                //@synthesize featureAvailabilityConditionsDidUpdateNotificationToken=_featureAvailabilityConditionsDidUpdateNotificationToken - In the implementation block
@property (assign,nonatomic) int userCharacteristicsDidChangeNotificationToken;                                                                          //@synthesize userCharacteristicsDidChangeNotificationToken=_userCharacteristicsDidChangeNotificationToken - In the implementation block
@property (nonatomic,retain) HKMobileCountryCodeManager * mobileCountryCodeManager;                                                                      //@synthesize mobileCountryCodeManager=_mobileCountryCodeManager - In the implementation block
@property (nonatomic,retain) HKWatchAppAvailability * ecgAppAvailability;                                                                                //@synthesize ecgAppAvailability=_ecgAppAvailability - In the implementation block
@property (getter=isElectrocardiogramOnboardingCompleted,nonatomic,readonly) BOOL electrocardiogramOnboardingCompleted; 
@property (assign,getter=isElectrocardiogramFirstRecordingCompleted,nonatomic) BOOL electrocardiogramFirstRecordingCompleted; 
@property (getter=isElectrocardiogramRecordingDisabled,nonatomic,readonly) BOOL electrocardiogramRecordingDisabled; 
@property (nonatomic,readonly) NSDate * electrocardiogramFirstOnboardingCompletedDate; 
@property (getter=isAtrialFibrillationDetectionOnboardingCompleted,nonatomic,readonly) BOOL atrialFibrillationDetectionOnboardingCompleted; 
@property (getter=isAtrialFibrillationDetectionDisabled,nonatomic,readonly) BOOL atrialFibrillationDetectionDisabled; 
+(BOOL)isCompanionRegionCheckEnabledForDevice:(id)arg1 ;
+(id)featureAvailabilityUserDefaults;
+(BOOL)electrocardiogramSupportedForDevice:(id)arg1 ;
+(BOOL)isElectrocardiogramSupportedOnWatch:(id)arg1 ;
+(unsigned long long)_electrocardiogramSupportedStateForDeviceRegion:(id)arg1 ;
+(unsigned long long)electrocardiogramSupportedStateForWatch:(id)arg1 ;
+(Class)deviceRegionFeatureSupportedStateProviderForCompanionDevice:(id)arg1 ;
+(Class)deviceRegionFeatureSupportedStateProviderForCurrentWatchOSDevice;
+(BOOL)_isElectrocardiogramSupportedOnPhone:(id)arg1 ;
+(BOOL)_isElectrocardiogramSupportedOnPhone:(id)arg1 geolocatedCountryCode:(id)arg2 ;
+(BOOL)_isElectrocardiogramDisabledWithDataSource:(id)arg1 ;
+(BOOL)_isElectrocardiogramSupportedOniOSDevice:(id)arg1 geolocatedCountryCode:(id)arg2 ;
+(unsigned long long)electrocardiogramSupportedState;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForWatch:(id)arg1 ;
+(unsigned long long)atrialFibrillationDetectionSupportedState;
+(BOOL)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnWatch:(id)arg1 ;
+(BOOL)isElectrocardiogramSupportedOnAnyWatch;
+(BOOL)isHeartRateEnabledInPrivacy;
+(BOOL)atrialFibrillationDetectionSupportedForDevice:(id)arg1 ;
+(unsigned long long)_atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1 ;
+(BOOL)_isAtrialFibrillationDetectionDisabledWithDataSource:(id)arg1 ;
+(BOOL)shouldInstallWatchApp;
+(BOOL)_isAtrialFibrillationDetectionSupportedOnPhone:(id)arg1 ;
+(BOOL)isCompanionRegionCheckEnabledForActiveWatch;
+(BOOL)isCompanionRegionCheckEnabledOnPairedPhone;
+(BOOL)isElectrocardiogramAppInstallableForLocale:(id)arg1 ;
+(BOOL)isElectrocardiogramSupportedOnActiveWatch;
+(BOOL)isElectrocardiogramSupportedOnAllWatches;
+(unsigned long long)electrocardiogramSupportedStateForActiveWatch;
+(BOOL)isElectrocardiogramAppDeletableForActiveWatch;
+(BOOL)isElectrocardiogramSupportedOnPairedPhone;
+(BOOL)isElectrocardiogramSupportedOnPairedPhoneWithGeolocatedCountryCode:(id)arg1 ;
+(void)installElectrocardiogramAppOnActiveWatch:(/*^block*/id)arg1 ;
+(long long)currentElectrocardiogramOnboardingVersion;
+(BOOL)isAtrialFibrillationDetectionSettingEnabled;
+(BOOL)isAtrialFibrillationDetectionSupportedOrNeedsGeolocation;
+(BOOL)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnAnyWatch;
+(BOOL)isAtrialFibrillationSupportedForOnboardingCountryCodeAndWatchOSVersion:(id)arg1 ;
+(BOOL)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnActiveWatch;
+(BOOL)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnAllWatches;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForActiveWatch;
+(BOOL)isAtrialFibrillationDetectionSupportedOnPairedPhone;
+(BOOL)isAtrialFibrillationDetectionDisabledForOnboardingCountryCode:(id)arg1 ;
+(long long)currentAtrialFibrillationDetectionOnboardingVersion;
+(id)currentDeviceRegionCode;
+(id)pairedDevices;
+(id)activePairedDevice;
-(HKHealthStore *)healthStore;
-(void)_registerForNotifications;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_unregisterForNotifications;
-(BOOL)isHeartAgeGatingEnabledOnWatch:(id)arg1 currentDate:(id)arg2 ;
-(BOOL)_meetsMinimumAgeRequirementWithMinimumRequiredAge:(long long)arg1 currentDate:(id)arg2 ;
-(void)notifyHeartRhythmAvailabilityDidUpdate;
-(void)_featureAvailabilityConditionsDidUpdate;
-(NSMutableSet *)onboardingKeysReadSet;
-(void)_resetIsElectrocardiogramDisabledCacheWithLock:(BOOL)arg1 ;
-(void)_resetIsAtrialFibrillationDetectionDisabledCacheWithLock:(BOOL)arg1 ;
-(BOOL)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2 useCache:(BOOL)arg3 ;
-(NSUserDefaults *)heartRhythmUserDefaults;
-(long long)_getOnboardingVersionForKey:(id)arg1 ;
-(void)_updateOnboardingCompletionForKey:(id)arg1 andVersion:(long long)arg2 ;
-(BOOL)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2 ;
-(long long)electrocardiogramOnboardingCompletedVersionNoCache;
-(void)_setOnboardingVersionCompleted:(long long)arg1 forKey:(id)arg2 additionalValues:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setFirstOnboardingCompletedDate:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_triggerFeatureAvailabilityUpdateOnPhoneAndWatchWithDelay:(long long)arg1 ;
-(void)_setElectrocardiogramOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2 ;
-(void)_removeFirstOnboardingCompletedDatesForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HKWatchAppAvailability *)ecgAppAvailability;
-(BOOL)_shouldAdvertiseECGDirectOnboardingWithDevice:(id)arg1 ;
-(BOOL)shouldAdvertiseElectrocardiogramForWatch:(id)arg1 ;
-(BOOL)_meetsMinimumAgeRequirementForElectrocardiogramWithCurrentDate:(id)arg1 ;
-(HKMobileCountryCodeManager *)mobileCountryCodeManager;
-(HKActiveWatchRemoteFeatureAvailabilityDataSource *)availabilityDataSource;
-(id)_electrocardiogramFirstOnboardingCompletedDate;
-(void)isElectrocardiogramOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setAtrialFibrillationDetectionOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2 ;
-(void)addHeartRhythmAvailabilityObserver:(id)arg1 ;
-(BOOL)isAtrialFibrillationDetectionStateSupportedForOnboardingCountryCode:(id)arg1 onWatch:(id)arg2 ;
-(BOOL)shouldAdvertiseAtrialFibrillationDetectionForWatch:(id)arg1 ;
-(void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_meetsMinimumAgeRequirementForAtrialFibrillationDetectionWithCurrentDate:(id)arg1 ;
-(BOOL)isAtrialFibrillationDetectionDisabled;
-(void)setAvailabilityDataSource:(HKActiveWatchRemoteFeatureAvailabilityDataSource *)arg1 ;
-(void)setHeartRhythmUserDefaults:(NSUserDefaults *)arg1 ;
-(void)removeHeartRhythmAvailabilityObserver:(id)arg1 ;
-(BOOL)isElectrocardiogramOnboardingCompleted;
-(BOOL)isElectrocardiogramRecordingDisabled;
-(void)setHeartRhythmAvailabilityObservers:(HKObserverSet *)arg1 ;
-(BOOL)isElectrocardiogramAvailableOnWatch:(id)arg1 countryCode:(id)arg2 ;
-(BOOL)isHeartAgeGatingEnabledOnActiveWatchWithCurrentDate:(id)arg1 ;
-(BOOL)isElectrocardiogramAvailableForOnboardingCountryCode:(id)arg1 ;
-(BOOL)isElectrocardiogramOnboardingCompletedNoCache;
-(void)updateOnboardingCompletionVersionCache;
-(void)setElectrocardiogramOnboardingCompleted;
-(void)resetElectrocardiogramOnboarding;
-(void)setElectrocardiogramFirstOnboardingCompletedDate:(NSDate *)arg1 ;
-(void)setElectrocardiogramOnboardingCompletedForCountryCode:(id)arg1 ;
-(BOOL)isElectrocardiogramFirstRecordingCompleted;
-(void)setElectrocardiogramFirstRecordingCompleted:(BOOL)arg1 ;
-(void)setEcgAppAvailability:(HKWatchAppAvailability *)arg1 ;
-(void)setAllowInstallingElectrocardiogramWatchApp:(BOOL)arg1 ;
-(BOOL)shouldAdvertiseElectrocardiogramForActiveWatch;
-(void)isElectrocardiogramOnboardingAvailableInCurrentLocation:(/*^block*/id)arg1 ;
-(void)electrocardiogramAppInstallStateOnActiveWatch:(/*^block*/id)arg1 ;
-(void)isElectrocardiogramOnboardingAvailableInCurrentLocationForActiveWatch:(/*^block*/id)arg1 ;
-(NSDate *)electrocardiogramFirstOnboardingCompletedDate;
-(BOOL)isAtrialFibrillationDetectionOnboardingCompleted;
-(void)setAtrialFibrillationDetectionOnboardingCompletedForCountryCode:(id)arg1 ;
-(int)onboardingStateDidChangeNotificationToken;
-(BOOL)isAtrialFibrillationDetectionStateSupportedOnActiveWatchForOnboardingCountryCode:(id)arg1 ;
-(void)setOnboardingKeysReadSet:(NSMutableSet *)arg1 ;
-(BOOL)isAtrialFibrillationDetectionStateSupportedOnAnyWatchForOnboardingCountry:(id)arg1 ;
-(HKObserverSet *)heartRhythmAvailabilityObservers;
-(void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocation:(/*^block*/id)arg1 ;
-(void)resetAtrialFibrillationDetectionOnboarding;
-(void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForActiveWatch:(/*^block*/id)arg1 ;
-(void)setMobileCountryCodeManager:(HKMobileCountryCodeManager *)arg1 ;
-(BOOL)shouldAdvertiseAtrialFibrillationDetectionForActiveWatch;
-(void)setOnboardingStateDidChangeNotificationToken:(int)arg1 ;
-(int)featureAvailabilityConditionsDidUpdateNotificationToken;
-(void)setUserCharacteristicsDidChangeNotificationToken:(int)arg1 ;
-(void)setFeatureAvailabilityConditionsDidUpdateNotificationToken:(int)arg1 ;
-(int)userCharacteristicsDidChangeNotificationToken;
-(void)setKeyValueDomain:(HKKeyValueDomain *)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(HKKeyValueDomain *)keyValueDomain;
-(id)atrialFibrillationDetectionOnboardingCountryCode;
-(void)_localeDidChange;
-(id)electrocardiogramOnboardingCountryCode;
-(void)dealloc;
-(void)_pairedOrActiveDevicesDidChange:(id)arg1 ;
@end

