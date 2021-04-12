/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSNumber, HKHealthStore, HKKeyValueDomain, NSUserDefaults, HKObserverSet, HKActiveWatchFeatureAvailabilityDataSource, NSMutableSet, HKMobileCountryCodeManager, HKWatchAppAvailability, NSDate;

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
	HKActiveWatchFeatureAvailabilityDataSource* _availabilityDataSource;
	NSMutableSet* _onboardingKeysReadSet;
	HKMobileCountryCodeManager* _mobileCountryCodeManager;
	HKWatchAppAvailability* _ecgAppAvailability;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                                                                //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKKeyValueDomain * keyValueDomain;                                                                                          //@synthesize keyValueDomain=_keyValueDomain - In the implementation block
@property (nonatomic,retain) NSUserDefaults * heartRhythmUserDefaults;                                                                                   //@synthesize heartRhythmUserDefaults=_heartRhythmUserDefaults - In the implementation block
@property (nonatomic,retain) HKObserverSet * heartRhythmAvailabilityObservers;                                                                           //@synthesize heartRhythmAvailabilityObservers=_heartRhythmAvailabilityObservers - In the implementation block
@property (nonatomic,retain) HKActiveWatchFeatureAvailabilityDataSource * availabilityDataSource;                                                        //@synthesize availabilityDataSource=_availabilityDataSource - In the implementation block
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
+(id)pairedDevices;
+(id)currentDeviceRegionCode;
+(id)activePairedDevice;
+(BOOL)isCompanionRegionCheckEnabledOnPairedPhone;
+(BOOL)isCompanionRegionCheckEnabledForDevice:(id)arg1 ;
+(id)featureAvailabilityUserDefaults;
+(BOOL)shouldInstallWatchApp;
+(unsigned long long)_electrocardiogramSupportedStateForDeviceRegion:(id)arg1 ;
+(BOOL)electrocardiogramSupportedForDevice:(id)arg1 ;
+(BOOL)isElectrocardiogramSupportedOnWatch:(id)arg1 ;
+(unsigned long long)electrocardiogramSupportedStateForWatch:(id)arg1 ;
+(Class)deviceRegionFeatureSupportedStateProviderForCompanionDevice:(id)arg1 ;
+(Class)deviceRegionFeatureSupportedStateProviderForCurrentWatchOSDevice;
+(BOOL)_isElectrocardiogramSupportedOnPhone:(id)arg1 ;
+(BOOL)_isElectrocardiogramSupportedOnPhone:(id)arg1 geolocatedCountryCode:(id)arg2 ;
+(BOOL)_isElectrocardiogramSupportedOniOSDevice:(id)arg1 geolocatedCountryCode:(id)arg2 ;
+(BOOL)_isElectrocardiogramDisabledWithDataSource:(id)arg1 ;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForWatch:(id)arg1 ;
+(unsigned long long)atrialFibrillationDetectionSupportedState;
+(BOOL)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnWatch:(id)arg1 ;
+(BOOL)atrialFibrillationDetectionSupportedForDevice:(id)arg1 ;
+(unsigned long long)_atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1 ;
+(BOOL)_isAtrialFibrillationDetectionDisabledWithDataSource:(id)arg1 ;
+(BOOL)_isAtrialFibrillationDetectionSupportedOnPhone:(id)arg1 ;
+(BOOL)isHeartRateEnabledInPrivacy;
+(BOOL)isCompanionRegionCheckEnabledForActiveWatch;
+(BOOL)isElectrocardiogramSupportedOnAnyWatch;
+(BOOL)isElectrocardiogramSupportedOnActiveWatch;
+(BOOL)isElectrocardiogramSupportedOnAllWatches;
+(unsigned long long)electrocardiogramSupportedStateForActiveWatch;
+(BOOL)isElectrocardiogramAppDeletableForActiveWatch;
+(unsigned long long)electrocardiogramSupportedState;
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
-(void)dealloc;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(void)_localeDidChange;
-(id)initWithHealthStore:(id)arg1 ;
-(id)electrocardiogramOnboardingCountryCode;
-(id)atrialFibrillationDetectionOnboardingCountryCode;
-(BOOL)isHeartAgeGatingEnabledOnWatch:(id)arg1 currentDate:(id)arg2 ;
-(BOOL)_meetsMinimumAgeRequirementWithMinimumRequiredAge:(long long)arg1 currentDate:(id)arg2 ;
-(void)notifyHeartRhythmAvailabilityDidUpdate;
-(void)_featureAvailabilityConditionsDidUpdate;
-(void)_pairedOrActiveDevicesDidChange:(id)arg1 ;
-(void)_resetIsElectrocardiogramDisabledCacheWithLock:(BOOL)arg1 ;
-(void)_resetIsAtrialFibrillationDetectionDisabledCacheWithLock:(BOOL)arg1 ;
-(BOOL)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2 useCache:(BOOL)arg3 ;
-(NSUserDefaults *)heartRhythmUserDefaults;
-(NSMutableSet *)onboardingKeysReadSet;
-(HKKeyValueDomain *)keyValueDomain;
-(BOOL)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2 ;
-(void)_setOnboardingVersionCompleted:(long long)arg1 forKey:(id)arg2 additionalValues:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setFirstOnboardingCompletedDate:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setElectrocardiogramOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2 ;
-(void)_triggerFeatureAvailabilityUpdateOnPhoneAndWatchWithDelay:(long long)arg1 ;
-(BOOL)shouldAdvertiseElectrocardiogramForWatch:(id)arg1 ;
-(BOOL)_meetsMinimumAgeRequirementForElectrocardiogramWithCurrentDate:(id)arg1 ;
-(HKMobileCountryCodeManager *)mobileCountryCodeManager;
-(HKActiveWatchFeatureAvailabilityDataSource *)availabilityDataSource;
-(void)isElectrocardiogramOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HKWatchAppAvailability *)ecgAppAvailability;
-(id)_electrocardiogramFirstOnboardingCompletedDate;
-(void)_setAtrialFibrillationDetectionOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2 ;
-(BOOL)isAtrialFibrillationDetectionStateSupportedForOnboardingCountryCode:(id)arg1 onWatch:(id)arg2 ;
-(void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldAdvertiseAtrialFibrillationDetectionForWatch:(id)arg1 ;
-(BOOL)_meetsMinimumAgeRequirementForAtrialFibrillationDetectionWithCurrentDate:(id)arg1 ;
-(void)addHeartRhythmAvailabilityObserver:(id)arg1 ;
-(void)removeHeartRhythmAvailabilityObserver:(id)arg1 ;
-(BOOL)isHeartAgeGatingEnabledOnActiveWatchWithCurrentDate:(id)arg1 ;
-(BOOL)isElectrocardiogramAvailableOnWatch:(id)arg1 countryCode:(id)arg2 ;
-(BOOL)isElectrocardiogramAvailableForOnboardingCountryCode:(id)arg1 ;
-(BOOL)isElectrocardiogramOnboardingCompleted;
-(BOOL)isElectrocardiogramOnboardingCompletedNoCache;
-(void)setElectrocardiogramOnboardingCompleted;
-(void)setElectrocardiogramFirstOnboardingCompletedDate:(NSDate *)arg1 ;
-(void)setElectrocardiogramOnboardingCompletedForCountryCode:(id)arg1 ;
-(BOOL)isElectrocardiogramFirstRecordingCompleted;
-(void)setElectrocardiogramFirstRecordingCompleted:(BOOL)arg1 ;
-(void)resetElectrocardiogramOnboarding;
-(void)setAllowInstallingElectrocardiogramWatchApp:(BOOL)arg1 ;
-(BOOL)shouldAdvertiseElectrocardiogramForActiveWatch;
-(void)isElectrocardiogramOnboardingAvailableInCurrentLocation:(/*^block*/id)arg1 ;
-(void)isElectrocardiogramOnboardingAvailableInCurrentLocationForActiveWatch:(/*^block*/id)arg1 ;
-(void)electrocardiogramAppInstallStateOnActiveWatch:(/*^block*/id)arg1 ;
-(BOOL)isElectrocardiogramRecordingDisabled;
-(NSDate *)electrocardiogramFirstOnboardingCompletedDate;
-(BOOL)isAtrialFibrillationDetectionOnboardingCompleted;
-(void)setAtrialFibrillationDetectionOnboardingCompletedForCountryCode:(id)arg1 ;
-(BOOL)isAtrialFibrillationDetectionStateSupportedOnActiveWatchForOnboardingCountryCode:(id)arg1 ;
-(BOOL)isAtrialFibrillationDetectionStateSupportedOnAnyWatchForOnboardingCountry:(id)arg1 ;
-(void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocation:(/*^block*/id)arg1 ;
-(void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForActiveWatch:(/*^block*/id)arg1 ;
-(BOOL)shouldAdvertiseAtrialFibrillationDetectionForActiveWatch;
-(BOOL)isAtrialFibrillationDetectionDisabled;
-(void)resetAtrialFibrillationDetectionOnboarding;
-(void)setKeyValueDomain:(HKKeyValueDomain *)arg1 ;
-(void)setHeartRhythmUserDefaults:(NSUserDefaults *)arg1 ;
-(HKObserverSet *)heartRhythmAvailabilityObservers;
-(void)setHeartRhythmAvailabilityObservers:(HKObserverSet *)arg1 ;
-(void)setAvailabilityDataSource:(HKActiveWatchFeatureAvailabilityDataSource *)arg1 ;
-(void)setOnboardingKeysReadSet:(NSMutableSet *)arg1 ;
-(int)onboardingStateDidChangeNotificationToken;
-(void)setOnboardingStateDidChangeNotificationToken:(int)arg1 ;
-(int)featureAvailabilityConditionsDidUpdateNotificationToken;
-(void)setFeatureAvailabilityConditionsDidUpdateNotificationToken:(int)arg1 ;
-(int)userCharacteristicsDidChangeNotificationToken;
-(void)setUserCharacteristicsDidChangeNotificationToken:(int)arg1 ;
-(void)setMobileCountryCodeManager:(HKMobileCountryCodeManager *)arg1 ;
-(void)setEcgAppAvailability:(HKWatchAppAvailability *)arg1 ;
@end

