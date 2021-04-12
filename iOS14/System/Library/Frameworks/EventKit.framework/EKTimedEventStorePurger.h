/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
-(NSObject*<OS_dispatch_source>)timer;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setInternalPurgingAllowed:(BOOL)arg1 ;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)init;
-(void)_eventStoreChangedNotification:(id)arg1 ;
-(void)setInternalChangedBlock:(id)arg1 ;
-(void)_removeTransientEventStoreChangeObserver;
-(void)_databaseChangedExternally;
-(void)_removePersistentNotificationObservers;
-(id)internalChangedBlock;
-(EKEventStore *)internalStore;
-(void)setTimeout:(double)arg1 ;
-(BOOL)ignoreLowLevelDatabaseChangedNotifications;
-(double)timeout;
-(void)setIgnoreLowLevelDatabaseChangedNotifications:(BOOL)arg1 ;
-(void)setChangedBlock:(id)arg1 ;
-(double)internalTimeout;
-(id)changedBlock;
-(BOOL)purgingAllowed;
-(void)_fireChangedBlock;
-(BOOL)internalPurgingAllowed;
-(void)setPurgingAllowed:(BOOL)arg1 ;
-(id)internalCreationBlock;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)acquireCachedEventStoreOrCreate:(BOOL)arg1 ;
-(void)setInternalStore:(EKEventStore *)arg1 ;
-(void)_uninstallTimer;
-(void)setInternalTimeout:(double)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_addPersistentNotificationObservers;
-(void)dealloc;
-(void)setInternalCreationBlock:(id)arg1 ;
-(void)_resetIdleTimer;
@end

