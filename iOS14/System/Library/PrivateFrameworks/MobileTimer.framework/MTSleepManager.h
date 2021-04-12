/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSource.h>
#import <libobjc.A.dylib/HKSPSleepStoreObserver.h>
#import <libobjc.A.dylib/MTAlarmObserver.h>

@protocol MTAlarmStorage, MTPersistence;
@class HKSPSleepStore, HKSPFeatureAvailabilityStore, HKHealthStore, NSString;

@interface MTSleepManager : NSObject <MTSource, HKSPSleepStoreObserver, MTAlarmObserver> {

	id<MTAlarmStorage> _alarmStorage;
	/*^block*/id _sleepStoreProvider;
	HKSPSleepStore* _sleepStore;
	HKSPFeatureAvailabilityStore* _featureStore;
	HKHealthStore* _healthStore;
	id<MTPersistence> _persistence;

}

@property (nonatomic,readonly) id<MTAlarmStorage> alarmStorage;                        //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,copy) id sleepStoreProvider;                                      //@synthesize sleepStoreProvider=_sleepStoreProvider - In the implementation block
@property (nonatomic,retain) HKSPSleepStore * sleepStore;                              //@synthesize sleepStore=_sleepStore - In the implementation block
@property (nonatomic,retain) HKSPFeatureAvailabilityStore * featureStore;              //@synthesize featureStore=_featureStore - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                              //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) id<MTPersistence> persistence;                            //@synthesize persistence=_persistence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nextSleepAlarm;
-(void)resetSleepAlarmSnoozeState;
-(void)updateSleepAlarms;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(id<MTPersistence>)persistence;
-(HKSPSleepStore *)sleepStore;
-(void)setPersistence:(id<MTPersistence>)arg1 ;
-(HKHealthStore *)healthStore;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(BOOL)watchSleepFeaturesEnabled;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(id<MTAlarmStorage>)alarmStorage;
-(void)setFeatureStore:(HKSPFeatureAvailabilityStore *)arg1 ;
-(HKSPFeatureAvailabilityStore *)featureStore;
-(id)initWithAlarmStorage:(id)arg1 ;
-(void)setSleepStore:(HKSPSleepStore *)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)setSleepStoreProvider:(id)arg1 ;
-(void)markSleepMigrationComplete;
-(id)sleepStoreProvider;
-(id)initWithAlarmStorage:(id)arg1 sleepStoreProvider:(/*^block*/id)arg2 featureStoreProvider:(/*^block*/id)arg3 healthStore:(id)arg4 persistence:(id)arg5 ;
-(void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2 ;
-(BOOL)_didCompleteSleepOnboarding;
-(id)sourceIdentifier;
@end

