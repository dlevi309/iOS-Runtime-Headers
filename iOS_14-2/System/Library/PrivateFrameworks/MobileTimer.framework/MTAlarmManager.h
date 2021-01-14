/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class MTAlarmManagerExportedObject, MTXPCConnectionProvider, MTMetrics, MTAlarmCache, NSNotificationCenter;

@interface MTAlarmManager : NSObject {

	MTAlarmManagerExportedObject* _exportedObject;
	MTXPCConnectionProvider* _connectionProvider;
	MTMetrics* _metrics;
	MTAlarmCache* _cache;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,retain) MTAlarmManagerExportedObject * exportedObject;               //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,readonly) MTXPCConnectionProvider * connectionProvider;              //@synthesize connectionProvider=_connectionProvider - In the implementation block
@property (nonatomic,retain) MTMetrics * metrics;                                         //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) MTAlarmCache * cache;                                        //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                   //@synthesize notificationCenter=_notificationCenter - In the implementation block
+(id)_filteredAlarms:(id)arg1 afterDate:(id)arg2 maxCount:(unsigned long long)arg3 filter:(/*^block*/id)arg4 ;
+(void)warmUp;
+(id)_sortedAlarms:(id)arg1 date:(id)arg2 includeBedtimeNotification:(BOOL)arg3 ;
+(id)assistantSyncNotificationName;
+(id)_filterSleepAlarmOverrides:(id)arg1 date:(id)arg2 ;
-(void)setExportedObject:(MTAlarmManagerExportedObject *)arg1 ;
-(void)setMetrics:(MTMetrics *)arg1 ;
-(id)resetSleepAlarmSnoozeState;
-(id)updateSleepAlarms;
-(id)alarms;
-(id)removeAlarm:(id)arg1 ;
-(void)reconnect;
-(MTMetrics *)metrics;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3 ;
-(void)checkIn;
-(id)alarmWithIDString:(id)arg1 ;
-(id)nextAlarm;
-(id)sleepAlarm;
-(id)addAlarm:(id)arg1 ;
-(id)nextAlarmsInRangeSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 ;
-(MTAlarmCache *)cache;
-(id)init;
-(NSNotificationCenter *)notificationCenter;
-(MTAlarmManagerExportedObject *)exportedObject;
-(id)_nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4 doSynchronous:(BOOL)arg5 ;
-(id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(id)nextAlarmSync;
-(id)alarmAtIndex:(unsigned long long)arg1 ;
-(id)alarmsIncludingSleepAlarm:(BOOL)arg1 ;
-(id)dismissAlarmWithIdentifier:(id)arg1 ;
-(id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(unsigned long long)indexForAlarm:(id)arg1 ;
-(id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4 ;
-(id)updateAlarm:(id)arg1 ;
-(id)_sortedNextAlarmsAfterDate:(id)arg1 includeSleepAlarm:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 doSynchronous:(BOOL)arg4 ;
-(void)setCache:(MTAlarmCache *)arg1 ;
-(id)sleepAlarmSync;
-(id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 ;
-(unsigned long long)alarmCount;
-(unsigned long long)alarmCountIncludingSleepAlarm:(BOOL)arg1 ;
-(id)alarmWithIDString:(id)arg1 includeSleep:(BOOL)arg2 ;
-(id)nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 ;
-(id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4 ;
-(id)initWithMetrics:(id)arg1 ;
-(unsigned long long)firingAlarmCount;
-(id)_nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4 doSynchronous:(BOOL)arg5 ;
-(id)nextSleepAlarm;
-(id)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 ;
-(id)sleepAlarms;
-(id)sleepAlarmsSync;
-(id)_initWithConnectionProvidingBlock:(/*^block*/id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3 ;
-(id)_sortedNextAlarmsAfterDate:(id)arg1 includeSleepAlarm:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(id)snoozeAlarmWithIdentifier:(id)arg1 ;
-(void)_getCachedAlarmsWithFuture:(id)arg1 finishBlock:(/*^block*/id)arg2 ;
-(id)_initWithConnectionProvidingBlock:(/*^block*/id)arg1 metrics:(id)arg2 ;
-(id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 ;
-(id)_alarmWithIDStringAsync:(id)arg1 ;
-(id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 ;
-(id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(id)alarmsSync;
-(MTXPCConnectionProvider *)connectionProvider;
-(id)alarmsSyncIncludingSleepAlarm:(BOOL)arg1 ;
-(id)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 ;
-(id)_alarmsIncludingSleepAlarm:(BOOL)arg1 doSynchronous:(BOOL)arg2 ;
-(void)dealloc;
-(id)nextAlarmsInRangeSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4 ;
-(id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(id)nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4 ;
@end

