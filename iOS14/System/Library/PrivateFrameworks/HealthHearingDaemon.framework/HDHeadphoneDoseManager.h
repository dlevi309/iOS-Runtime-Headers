/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/

#import <HealthHearingDaemon/HealthHearingDaemon-Structs.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDQuantitySeriesObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, HDHeadphoneDoseMetadataStore, HDHeadphoneExposureNotificationCenter, HDHeadphoneAudioExposureStatisticsCalculator, HDDataCollectionAssertion, NSDate, NSString;

@interface HDHeadphoneDoseManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDQuantitySeriesObserver> {

	HDProfile* _profile;
	double _dose;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _enabled;
	HDHeadphoneDoseMetadataStore* _keyValueStore;
	HDHeadphoneExposureNotificationCenter* _notificationCenter;
	HDHeadphoneAudioExposureStatisticsCalculator* _statisticsCalculator;
	HDDataCollectionAssertion* _collectionAssertion;
	BOOL _lastUpdateSuppressedUserNotification;
	NSDate* _lastLockDateForAnalytics;
	/*^block*/id _unitTesting_daemonDidBecomeReady;
	/*^block*/id _unitTesting_didUpdateHandler;
	/*^block*/id _unitTesting_didNotifyUser;
	/*^block*/id _unitTesting_protectedDataDidBecomeAvailable;

}

@property (nonatomic,copy) id unitTesting_daemonDidBecomeReady;                                                    //@synthesize unitTesting_daemonDidBecomeReady=_unitTesting_daemonDidBecomeReady - In the implementation block
@property (nonatomic,copy) id unitTesting_didUpdateHandler;                                                        //@synthesize unitTesting_didUpdateHandler=_unitTesting_didUpdateHandler - In the implementation block
@property (nonatomic,copy) id unitTesting_didNotifyUser;                                                           //@synthesize unitTesting_didNotifyUser=_unitTesting_didNotifyUser - In the implementation block
@property (nonatomic,copy) id unitTesting_protectedDataDidBecomeAvailable;                                         //@synthesize unitTesting_protectedDataDidBecomeAvailable=_unitTesting_protectedDataDidBecomeAvailable - In the implementation block
@property (nonatomic,readonly) HDHeadphoneAudioExposureStatisticsCalculator * unitTesting_calculator; 
@property (nonatomic,readonly) HDHeadphoneDoseMetadataStore * unitTesting_keyValueStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)profile:(id)arg1 didDiscardSeriesOfType:(id)arg2 ;
-(/*^block*/id)transactionalQuantityInsertHandlerForProfile:(id)arg1 journaled:(BOOL)arg2 count:(long long)arg3 ;
-(BOOL)_overrideDoseLimit:(id)arg1 error:(id*)arg2 ;
-(void)setUnitTesting_didUpdateHandler:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(id)_takeAccessibilityAssertion;
-(void)_lock_updateIsEnabledForInitialSetup:(BOOL)arg1 assertion:(id)arg2 ;
-(id)_pruneWithNowDate:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)unitTesting_daemonDidBecomeReady;
-(BOOL)_rebuildWithError:(id*)arg1 ;
-(void)_unregisterForSignificantTimeChangeNotification;
-(id)unitTesting_didNotifyUser;
-(BOOL)_lock_updateCurrentDoseUsingStatisticsResult:(id)arg1 assertion:(id)arg2 error:(id*)arg3 ;
-(void)_registerForSignificantTimeChangeNotification;
-(id)_lock_pruneWithNowDate:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)unitTesting_didUpdateHandler;
-(HDHeadphoneAudioExposureStatisticsCalculator *)unitTesting_calculator;
-(id)_fetchDoseLimitInfoWithError:(id*)arg1 ;
-(void)_headphoneExposureNotificationsEnabledDidChange:(id)arg1 ;
-(HDHeadphoneDoseMetadataStore *)unitTesting_keyValueStore;
-(id)unitTesting_protectedDataDidBecomeAvailable;
-(void)setUnitTesting_daemonDidBecomeReady:(id)arg1 ;
-(void)setUnitTesting_didNotifyUser:(id)arg1 ;
-(id)initWithProfile:(id)arg1 keyValueStore:(id)arg2 calculator:(id)arg3 ;
-(void)_lock_updateCollectionAssertionForDoseAccumulated:(double)arg1 ;
-(void)_lock_setCollectionAssertion:(id)arg1 ;
-(void)_reportSyncedHeadphoneNotificationSamples:(id)arg1 journaled:(BOOL)arg2 nowDate:(id)arg3 ;
-(void)setUnitTesting_protectedDataDidBecomeAvailable:(id)arg1 ;
-(void)_handleSignificantTimeChangeNotification:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(void)samplesJournaled:(id)arg1 type:(id)arg2 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_lock_updateWithNotifications:(id)arg1 journaled:(BOOL)arg2 assertion:(id)arg3 ;
-(id)_initWithProfile:(id)arg1 keyValueStore:(id)arg2 calculator:(id)arg3 unitTesting_didUpdateHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)_infoWithError:(id*)arg1 ;
-(BOOL)_lock_rebuildWithAssertion:(id)arg1 error:(id*)arg2 ;
@end

