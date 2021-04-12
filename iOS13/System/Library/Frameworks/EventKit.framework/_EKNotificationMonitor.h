/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSObject*<OS_dispatch_queue> _timerQueue;
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
	NSArray* _notificationReferences;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	EKTimedEventStorePurger* _eventStorePurger;
	EKEventStore* _eventStore;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) EKTimedEventStorePurger * eventStorePurger;                  //@synthesize eventStorePurger=_eventStorePurger - In the implementation block
@property (nonatomic,readonly) EKEventStore * eventStore;                                   //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) unsigned long long notificationCount; 
@property (nonatomic,readonly) NSArray * notificationReferences;                            //@synthesize notificationReferences=_notificationReferences - In the implementation block
+(id)logHandle;
+(id)requestedDarwinNotifications;
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(long long)arg1 ;
-(void)stop;
-(void)start;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)_timerFired;
-(void)_syncDidStart;
-(EKEventStore *)eventStore;
-(id)_eventStore;
-(void)_eventStoreChanged;
-(void)attemptReload;
-(void)adjust;
-(id)initWithOptions:(long long)arg1 eventStore:(id)arg2 ;
-(unsigned long long)notificationCount;
-(NSArray *)notificationReferences;
-(void)_eventStoreChangedNotification:(id)arg1 ;
-(id)_initWithOptions:(long long)arg1 eventStore:(id)arg2 eventStoreGetter:(/*^block*/id)arg3 ;
-(void)_killSyncTimer:(id)arg1 ;
-(void)_resetTimer;
-(void)killTimer;
-(void)attemptReloadSynchronously:(BOOL)arg1 ;
-(id)_fetchEventNotificationReferencesFromEventStore:(id)arg1 ;
-(void)_addRemovedOrAddedObjectIDsTo:(id)arg1 oldNotifications:(id)arg2 newNotifications:(id)arg3 ;
-(void)_syncDidEnd:(id)arg1 ;
-(void)_notificationCountChangedExternally;
-(void)_alertPrefChanged;
-(void)_databaseChanged;
-(void)trackChangesInEventStore;
-(void)_syncTimerFired:(id)arg1 ;
-(void)_resetSyncTimer;
-(id)initWithOptions:(long long)arg1 eventStoreGetter:(/*^block*/id)arg2 ;
-(void)handleDarwinNotification:(id)arg1 ;
-(EKTimedEventStorePurger *)eventStorePurger;
@end

