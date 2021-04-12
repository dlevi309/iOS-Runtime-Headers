/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, EKEventStore;

@interface EKTimedEventStorePurger : NSObject {

	BOOL _ignoreLowLevelDatabaseChangedNotifications;
	BOOL _internalPurgingAllowed;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_source> _timer;
	double _internalTimeout;
	/*^block*/id _internalCreationBlock;
	/*^block*/id _internalChangedBlock;
	EKEventStore* _internalStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                   //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                          //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) double internalTimeout;                                       //@synthesize internalTimeout=_internalTimeout - In the implementation block
@property (nonatomic,copy) id internalCreationBlock;                                       //@synthesize internalCreationBlock=_internalCreationBlock - In the implementation block
@property (nonatomic,copy) id internalChangedBlock;                                        //@synthesize internalChangedBlock=_internalChangedBlock - In the implementation block
@property (assign,nonatomic) BOOL ignoreLowLevelDatabaseChangedNotifications;              //@synthesize ignoreLowLevelDatabaseChangedNotifications=_ignoreLowLevelDatabaseChangedNotifications - In the implementation block
@property (assign,nonatomic) BOOL internalPurgingAllowed;                                  //@synthesize internalPurgingAllowed=_internalPurgingAllowed - In the implementation block
@property (nonatomic,retain) EKEventStore * internalStore;                                 //@synthesize internalStore=_internalStore - In the implementation block
@property (nonatomic,copy) id creationBlock; 
@property (nonatomic,copy) id changedBlock; 
@property (assign,nonatomic) BOOL purgingAllowed; 
@property (assign,nonatomic) double timeout; 
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
-(void)setPurgingAllowed:(BOOL)arg1 ;
-(id)acquireCachedEventStoreOrCreate:(BOOL)arg1 ;
-(void)_addPersistentNotificationObservers;
-(void)_uninstallTimer;
-(void)_removePersistentNotificationObservers;
-(void)_removeTransientEventStoreChangeObserver;
-(double)internalTimeout;
-(void)setInternalTimeout:(double)arg1 ;
-(void)_resetIdleTimer;
-(void)setInternalStore:(EKEventStore *)arg1 ;
-(void)setInternalCreationBlock:(id)arg1 ;
-(id)internalCreationBlock;
-(void)setInternalChangedBlock:(id)arg1 ;
-(id)internalChangedBlock;
-(BOOL)internalPurgingAllowed;
-(void)setInternalPurgingAllowed:(BOOL)arg1 ;
-(EKEventStore *)internalStore;
-(void)_eventStoreChangedNotification:(id)arg1 ;
-(void)setIgnoreLowLevelDatabaseChangedNotifications:(BOOL)arg1 ;
-(BOOL)ignoreLowLevelDatabaseChangedNotifications;
-(void)_fireChangedBlock;
-(void)setChangedBlock:(id)arg1 ;
-(id)changedBlock;
-(BOOL)purgingAllowed;
-(void)_databaseChangedExternally;
@end

