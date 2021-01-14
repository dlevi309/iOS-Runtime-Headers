/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


#import <Sleep/Sleep-Structs.h>
@class HKSPSleepSchedule, HKSPSleepSettings, HKSPSleepEventRecord;

@interface HKSPSleepStoreCache : NSObject {

	BOOL _sleepScheduleNeedsUpdate;
	BOOL _sleepSettingsNeedsUpdate;
	BOOL _sleepEventRecordNeedsUpdate;
	BOOL _sleepScheduleStateNeedsUpdate;
	BOOL _sleepModeNeedsUpdate;
	os_unfair_lock_s _cacheLock;
	HKSPSleepSchedule* _sleepSchedule;
	HKSPSleepSettings* _sleepSettings;
	HKSPSleepEventRecord* _sleepEventRecord;
	unsigned long long _sleepScheduleState;
	long long _sleepMode;

}

@property (nonatomic,readonly) os_unfair_lock_s cacheLock;                                //@synthesize cacheLock=_cacheLock - In the implementation block
@property (nonatomic,copy,readonly) HKSPSleepSchedule * sleepSchedule;                    //@synthesize sleepSchedule=_sleepSchedule - In the implementation block
@property (nonatomic,readonly) BOOL sleepScheduleNeedsUpdate;                             //@synthesize sleepScheduleNeedsUpdate=_sleepScheduleNeedsUpdate - In the implementation block
@property (nonatomic,copy,readonly) HKSPSleepSettings * sleepSettings;                    //@synthesize sleepSettings=_sleepSettings - In the implementation block
@property (nonatomic,readonly) BOOL sleepSettingsNeedsUpdate;                             //@synthesize sleepSettingsNeedsUpdate=_sleepSettingsNeedsUpdate - In the implementation block
@property (nonatomic,copy,readonly) HKSPSleepEventRecord * sleepEventRecord;              //@synthesize sleepEventRecord=_sleepEventRecord - In the implementation block
@property (nonatomic,readonly) BOOL sleepEventRecordNeedsUpdate;                          //@synthesize sleepEventRecordNeedsUpdate=_sleepEventRecordNeedsUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long sleepScheduleState;                     //@synthesize sleepScheduleState=_sleepScheduleState - In the implementation block
@property (nonatomic,readonly) BOOL sleepScheduleStateNeedsUpdate;                        //@synthesize sleepScheduleStateNeedsUpdate=_sleepScheduleStateNeedsUpdate - In the implementation block
@property (nonatomic,readonly) long long sleepMode;                                       //@synthesize sleepMode=_sleepMode - In the implementation block
@property (nonatomic,readonly) BOOL sleepModeNeedsUpdate;                                 //@synthesize sleepModeNeedsUpdate=_sleepModeNeedsUpdate - In the implementation block
-(BOOL)sleepEventRecordNeedsUpdate;
-(void)updateCachedSleepSettings:(id)arg1 ;
-(void)_locked_purgeCachedSleepEventRecord;
-(HKSPSleepSchedule *)sleepSchedule;
-(BOOL)sleepModeNeedsUpdate;
-(id)cachedSleepEventRecordWithMissHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)_locked_purgeCachedSleepSettings;
-(BOOL)sleepScheduleStateNeedsUpdate;
-(void)_locked_purgeCachedSleepScheduleState;
-(void)updateCachedSleepMode:(long long)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)_locked_purgeCachedSleepSchedule;
-(void)updateCachedSleepScheduleState:(unsigned long long)arg1 ;
-(void)purgeCachedSleepSchedule;
-(id)cachedSleepModeWithMissHandler:(/*^block*/id)arg1 ;
-(BOOL)sleepSettingsNeedsUpdate;
-(unsigned long long)sleepScheduleState;
-(void)purgeCachedSleepEventRecord;
-(void)purgeCachedSleepMode;
-(long long)sleepMode;
-(void)purgeCache;
-(os_unfair_lock_s)cacheLock;
-(id)cachedSleepScheduleWithMissHandler:(/*^block*/id)arg1 ;
-(id)cachedSleepSettingsWithMissHandler:(/*^block*/id)arg1 ;
-(BOOL)sleepScheduleNeedsUpdate;
-(void)purgeCachedSleepSettings;
-(void)_locked_purgeCachedSleepMode;
-(void)updateCachedSleepEventRecord:(id)arg1 ;
-(void)purgeCachedSleepScheduleState;
-(HKSPSleepEventRecord *)sleepEventRecord;
-(void)updateCachedSleepSchedule:(id)arg1 ;
-(id)cachedSleepScheduleStateWithMissHandler:(/*^block*/id)arg1 ;
-(HKSPSleepSettings *)sleepSettings;
@end

