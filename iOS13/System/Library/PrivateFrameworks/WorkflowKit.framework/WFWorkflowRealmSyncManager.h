/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFApplicationStateObserver.h>
#import <libobjc.A.dylib/WFDatabaseResultObserver.h>

@protocol WFUserInterface, OS_dispatch_source, OS_dispatch_queue;
@class WFDatabase, WFDatabaseResult, NSObject, NSLock, NSMutableArray;

@interface WFWorkflowRealmSyncManager : NSObject <WFApplicationStateObserver, WFDatabaseResultObserver> {

	BOOL _pendingResume;
	BOOL _syncPending;
	long long _accountStatus;
	id<WFUserInterface> _userInterface;
	WFDatabase* _database;
	WFDatabaseResult* _databaseResultForObservation;
	unsigned long long _pauseCount;
	unsigned long long _start;
	NSObject*<OS_dispatch_source> _timer;
	NSLock* _timerLock;
	NSObject*<OS_dispatch_queue> _syncSessionQueue;
	NSLock* _completionHandlerLock;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,readonly) WFDatabase * database;                                      //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) WFDatabaseResult * databaseResultForObservation;              //@synthesize databaseResultForObservation=_databaseResultForObservation - In the implementation block
@property (assign,nonatomic) unsigned long long pauseCount;                                //@synthesize pauseCount=_pauseCount - In the implementation block
@property (assign,nonatomic) BOOL pendingResume;                                           //@synthesize pendingResume=_pendingResume - In the implementation block
@property (assign,nonatomic) unsigned long long start;                                     //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                          //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) NSLock * timerLock;                                         //@synthesize timerLock=_timerLock - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> syncSessionQueue;              //@synthesize syncSessionQueue=_syncSessionQueue - In the implementation block
@property (nonatomic,readonly) NSLock * completionHandlerLock;                             //@synthesize completionHandlerLock=_completionHandlerLock - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionHandlers;                        //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,readonly) BOOL syncPending;                                           //@synthesize syncPending=_syncPending - In the implementation block
@property (nonatomic,readonly) long long accountStatus;                                    //@synthesize accountStatus=_accountStatus - In the implementation block
@property (nonatomic,retain) id<WFUserInterface> userInterface;                            //@synthesize userInterface=_userInterface - In the implementation block
+(id)defaultManager;
+(void)setDefaultManager:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(WFDatabase *)database;
-(long long)accountStatus;
-(NSMutableArray *)completionHandlers;
-(void)setStart:(unsigned long long)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(void)startSync;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(id<WFUserInterface>)userInterface;
-(void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4 ;
-(void)setUserInterface:(id<WFUserInterface>)arg1 ;
-(void)handleUserDeletedZoneErrorIfNeededWithSuccess:(BOOL)arg1 changes:(BOOL)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)pushCompletionHandler:(/*^block*/id)arg1 ;
-(void)completeSyncWithSuccess:(BOOL)arg1 changes:(BOOL)arg2 error:(id)arg3 ;
-(void)triggerSync:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerSync:(BOOL)arg1 onlyIfPending:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)startAutomaticUpdates;
-(void)stopAutomaticUpdates;
-(void)pauseAutomaticUpdates;
-(void)resumeAutomaticUpdates;
-(void)updateAccountStatus;
-(void)subscribeToCloudKitAccountStatusNotifications;
-(void)unsubscribeFromCloudKitAccountStatusNotifications;
-(void)handleAccountChangedNotification:(id)arg1 ;
-(id)userDefaultsKeysToObserve;
-(void)startObservingUserDefaults;
-(void)stopObservingUserDefaults;
-(WFDatabaseResult *)databaseResultForObservation;
-(void)setDatabaseResultForObservation:(WFDatabaseResult *)arg1 ;
-(unsigned long long)pauseCount;
-(void)setPauseCount:(unsigned long long)arg1 ;
-(BOOL)pendingResume;
-(void)setPendingResume:(BOOL)arg1 ;
-(NSLock *)timerLock;
-(NSObject*<OS_dispatch_queue>)syncSessionQueue;
-(NSLock *)completionHandlerLock;
-(BOOL)syncPending;
@end

