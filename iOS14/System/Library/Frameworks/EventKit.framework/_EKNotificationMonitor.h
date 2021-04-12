/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@protocol OS_dispatch_queue;
@class PCPersistentTimer, NSDate, NSTimer, NSObject, NSMutableArray, NSArray, EKTimedEventStorePurger, EKEventStore;

@interface _EKNotificationMonitor : NSObject {

	/*^block*/id _eventStoreGetter;
	BOOL _running;
	PCPersistentTimer* _timer;
	NSDate* _nextFireTime;
	NSTimer* _syncTimer;
	BOOL _pendingChanges;
	NSObject*<OS_dispatch_queue> _queue;
	double _lastChangedTimestamp;
	BOOL _changedIDsValid;
	NSMutableArray* _changedIDs;
	int _ignoreSyncTimer;
	BOOL _initialCheck;
	BOOL _shouldInstallPersistentTimer;
	BOOL _useSyncIdleTimer;
	BOOL _registerForDarwinNotifications;
	BOOL _filteredByShowsNotificationsFlag;
	BOOL _computeChangedNotificationSet;
	BOOL _automaticallyFaultNotifications;
	BOOL _lastExpirationTimerFireDateWasInThePast;
	BOOL _isMonitoringOnlyNotificationCount;
	unsigned long long _notificationCount;
	NSArray* _notificationReferences;
	NSObject*<OS_dispatch_queue> _callbackNotificationQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	EKTimedEventStorePurger* _eventStorePurger;
	EKEventStore* _eventStore;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notificationQueue;                    //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) BOOL isMonitoringOnlyNotificationCount;                            //@synthesize isMonitoringOnlyNotificationCount=_isMonitoringOnlyNotificationCount - In the implementation block
@property (nonatomic,readonly) EKTimedEventStorePurger * eventStorePurger;                        //@synthesize eventStorePurger=_eventStorePurger - In the implementation block
@property (nonatomic,readonly) EKEventStore * eventStore;                                         //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackNotificationQueue;              //@synthesize callbackNotificationQueue=_callbackNotificationQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long notificationCount;                              //@synthesize notificationCount=_notificationCount - In the implementation block
@property (nonatomic,readonly) NSArray * notificationReferences;                                  //@synthesize notificationReferences=_notificationReferences - In the implementation block
+(void)addBlacklistedNotificationObjectID:(id)arg1 ;
+(id)logHandle;
+(id)blacklistedRowIDs;
+(id)requestedDarwinNotifications;
+(id)blacklistedNotificationQueue;
-(EKEventStore *)eventStore;
-(id)initWithOptions:(long long)arg1 ;
-(NSArray *)notificationReferences;
-(id)initWithOptions:(long long)arg1 eventStore:(id)arg2 ;
-(unsigned long long)notificationCount;
-(void)_addRemovedOrAddedObjectIDsTo:(id)arg1 oldNotifications:(id)arg2 newNotifications:(id)arg3 ;
-(void)_killSyncTimer:(id)arg1 ;
-(id)init;
-(void)_eventStoreChangedNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackNotificationQueue;
-(void)start;
-(id)_initWithOptions:(long long)arg1 eventStore:(id)arg2 eventStoreGetter:(/*^block*/id)arg3 ;
-(void)_databaseChanged;
-(id)effectiveCallbackQueue;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(id)_fetchEventNotificationReferencesFromEventStore:(id)arg1 earliestExpiringNotification:(id*)arg2 ;
-(void)setCallbackNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_killTimer;
-(void)attemptReload;
-(EKTimedEventStorePurger *)eventStorePurger;
-(void)_syncDidEnd:(id)arg1 ;
-(void)adjust;
-(id)initWithOptions:(long long)arg1 eventStoreGetter:(/*^block*/id)arg2 ;
-(void)trackChangesInEventStore;
-(void)_timerFired;
-(void)handleDarwinNotification:(id)arg1 ;
-(void)_syncDidStart;
-(void)_alertPrefChanged;
-(void)attemptReloadSynchronously:(BOOL)arg1 ;
-(BOOL)isMonitoringOnlyNotificationCount;
-(id)_eventStore;
-(void)_updateTimerFireDate:(id)arg1 ;
-(void)_resetSyncTimer;
-(void)_eventStoreChanged;
-(void)dealloc;
-(void)_notificationCountChangedExternally;
-(void)_syncTimerFired:(id)arg1 ;
@end

