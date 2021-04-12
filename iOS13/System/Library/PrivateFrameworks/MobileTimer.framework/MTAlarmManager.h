/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)warmUp;
+(id)_filteredAlarms:(id)arg1 afterDate:(id)arg2 maxCount:(unsigned long long)arg3 filter:(/*^block*/id)arg4 ;
+(id)assistantSyncNotificationName;
-(id)init;
-(void)dealloc;
-(void)checkIn;
-(void)setExportedObject:(MTAlarmManagerExportedObject *)arg1 ;
-(MTAlarmManagerExportedObject *)exportedObject;
-(MTMetrics *)metrics;
-(void)setCache:(MTAlarmCache *)arg1 ;
-(MTAlarmCache *)cache;
-(void)setMetrics:(MTMetrics *)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(id)initWithMetrics:(id)arg1 ;
-(void)reconnect;
-(id)alarms;
-(unsigned long long)indexForAlarm:(id)arg1 ;
-(id)addAlarm:(id)arg1 ;
-(id)removeAlarm:(id)arg1 ;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(MTXPCConnectionProvider *)connectionProvider;
-(id)alarmsIncludingSleepAlarm:(BOOL)arg1 ;
-(id)updateAlarm:(id)arg1 ;
-(id)sleepAlarm;
-(id)nextAlarm;
-(id)alarmsSyncIncludingSleepAlarm:(BOOL)arg1 ;
-(id)_initWithConnectionProvidingBlock:(/*^block*/id)arg1 metrics:(id)arg2 ;
-(id)_initWithConnectionProvidingBlock:(/*^block*/id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3 ;
-(id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 ;
-(id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3 ;
-(void)_getCachedAlarmsWithFuture:(id)arg1 finishBlock:(/*^block*/id)arg2 ;
-(id)_alarmsIncludingSleepAlarm:(BOOL)arg1 doSynchronous:(BOOL)arg2 ;
-(id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 ;
-(id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4 ;
-(id)_nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4 doSynchronous:(BOOL)arg5 ;
-(id)_sortedNextAlarmsAfterDate:(id)arg1 includeSleepAlarm:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 doSynchronous:(BOOL)arg4 ;
-(id)nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4 ;
-(id)_nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4 doSynchronous:(BOOL)arg5 ;
-(id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 ;
-(id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4 ;
-(id)nextAlarmsInRangeSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4 ;
-(id)alarmsSync;
-(unsigned long long)alarmCountIncludingSleepAlarm:(BOOL)arg1 ;
-(id)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 ;
-(id)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 ;
-(unsigned long long)firingAlarmCount;
-(id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(id)nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 ;
-(id)_sortedNextAlarmsAfterDate:(id)arg1 includeSleepAlarm:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(id)nextAlarmsInRangeSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 ;
-(id)sleepAlarmSync;
-(id)nextAlarmSync;
-(id)alarmWithIDString:(id)arg1 ;
-(id)alarmAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)alarmCount;
-(id)snoozeAlarmWithIdentifier:(id)arg1 ;
-(id)dismissAlarmWithIdentifier:(id)arg1 ;
@end

