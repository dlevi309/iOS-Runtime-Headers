/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@protocol DATask;
@class DATransaction, DAActivity, DAAccount, NSString, NSMutableArray, NSMutableSet, NSTimer, NSArray;

@interface DATaskManager : NSObject {

	DATransaction* _transaction;
	DAActivity* _daActivity;
	DAAccount* _account;
	BOOL _didLogSyncStart;
	int _state;
	id<DATask> _activeModalTask;
	id<DATask> _activeQueuedTask;
	NSString* _powerAssertionGroupID;
	NSMutableArray* _queuedExclusiveTasks;
	id<DATask> _activeExclusiveTask;
	NSMutableSet* _independentTasks;
	NSMutableSet* _heldIndependentTasks;
	NSMutableSet* _modalHeldIndependentTasks;
	NSMutableArray* _mQueuedTasks;
	id<DATask> _modalHeldActiveQueuedTask;
	NSMutableArray* _queuedModalTasks;
	NSTimer* _managerIdleTimer;
	NSTimer* _userInitiatedSyncTimer;
	NSTimer* _xpcTransactionTimer;
	NSTimer* _powerLogIdleTimer;

}

@property (nonatomic,retain) NSMutableArray * queuedExclusiveTasks;                 //@synthesize queuedExclusiveTasks=_queuedExclusiveTasks - In the implementation block
@property (nonatomic,retain) id<DATask> activeExclusiveTask;                        //@synthesize activeExclusiveTask=_activeExclusiveTask - In the implementation block
@property (nonatomic,retain) NSMutableSet * independentTasks;                       //@synthesize independentTasks=_independentTasks - In the implementation block
@property (nonatomic,retain) NSMutableSet * heldIndependentTasks;                   //@synthesize heldIndependentTasks=_heldIndependentTasks - In the implementation block
@property (nonatomic,retain) NSMutableSet * modalHeldIndependentTasks;              //@synthesize modalHeldIndependentTasks=_modalHeldIndependentTasks - In the implementation block
@property (nonatomic,retain) NSMutableArray * mQueuedTasks;                         //@synthesize mQueuedTasks=_mQueuedTasks - In the implementation block
@property (nonatomic,retain) id<DATask> modalHeldActiveQueuedTask;                  //@synthesize modalHeldActiveQueuedTask=_modalHeldActiveQueuedTask - In the implementation block
@property (nonatomic,retain) id<DATask> activeQueuedTask;                           //@synthesize activeQueuedTask=_activeQueuedTask - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedModalTasks;                     //@synthesize queuedModalTasks=_queuedModalTasks - In the implementation block
@property (nonatomic,retain) id<DATask> activeModalTask;                            //@synthesize activeModalTask=_activeModalTask - In the implementation block
@property (assign,nonatomic) int state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSTimer * managerIdleTimer;                            //@synthesize managerIdleTimer=_managerIdleTimer - In the implementation block
@property (nonatomic,retain) NSTimer * userInitiatedSyncTimer;                      //@synthesize userInitiatedSyncTimer=_userInitiatedSyncTimer - In the implementation block
@property (nonatomic,retain) NSTimer * xpcTransactionTimer;                         //@synthesize xpcTransactionTimer=_xpcTransactionTimer - In the implementation block
@property (nonatomic,retain) NSTimer * powerLogIdleTimer;                           //@synthesize powerLogIdleTimer=_powerLogIdleTimer - In the implementation block
@property (assign,nonatomic) BOOL didLogSyncStart;                                  //@synthesize didLogSyncStart=_didLogSyncStart - In the implementation block
@property (assign,nonatomic,__weak) DAAccount * account;                            //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSArray * queuedTasks; 
@property (nonatomic,readonly) NSArray * allTasks; 
@property (nonatomic,copy) NSString * powerAssertionGroupID;                        //@synthesize powerAssertionGroupID=_powerAssertionGroupID - In the implementation block
-(id)init;
-(void)dealloc;
-(id)user;
-(long long)port;
-(id)password;
-(int)state;
-(id)_version;
-(void)setState:(int)arg1 ;
-(id)server;
-(id)deviceType;
-(DAAccount *)account;
-(void)setAccount:(DAAccount *)arg1 ;
-(id)userAgent;
-(BOOL)useSSL;
-(id)accountPersistentUUID;
-(void)cancelAllTasks;
-(id)initWithAccount:(id)arg1 ;
-(id)accountID;
-(void)shutdown;
-(BOOL)isShutdown;
-(id)stateString;
-(id)identityPersist;
-(BOOL)shouldCancelTaskDueToOnPowerFetchMode;
-(NSMutableArray *)queuedExclusiveTasks;
-(id<DATask>)activeExclusiveTask;
-(NSMutableSet *)independentTasks;
-(NSMutableArray *)mQueuedTasks;
-(id<DATask>)activeQueuedTask;
-(id<DATask>)modalHeldActiveQueuedTask;
-(void)_populateVersionDescriptions;
-(void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(BOOL)arg2 ;
-(NSTimer *)xpcTransactionTimer;
-(void)setXpcTransactionTimer:(NSTimer *)arg1 ;
-(void)setActiveExclusiveTask:(id<DATask>)arg1 ;
-(void)_schedulePerformTask:(id)arg1 ;
-(void)_makeStateTransition;
-(void)_requestCancelTasksWithReason:(int)arg1 ;
-(void)taskManagerDidAddTask:(id)arg1 ;
-(NSMutableSet *)heldIndependentTasks;
-(void)setActiveQueuedTask:(id<DATask>)arg1 ;
-(void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2 ;
-(NSArray *)allTasks;
-(void)cancelTask:(id)arg1 ;
-(NSTimer *)managerIdleTimer;
-(void)setManagerIdleTimer:(NSTimer *)arg1 ;
-(NSTimer *)userInitiatedSyncTimer;
-(void)setUserInitiatedSyncTimer:(NSTimer *)arg1 ;
-(NSTimer *)powerLogIdleTimer;
-(void)setPowerLogIdleTimer:(NSTimer *)arg1 ;
-(void)_cancelTasksWithReason:(int)arg1 ;
-(NSMutableSet *)modalHeldIndependentTasks;
-(id<DATask>)activeModalTask;
-(NSMutableArray *)queuedModalTasks;
-(id)_powerLogInfoDictionary;
-(BOOL)_taskForcesNetworking:(id)arg1 ;
-(BOOL)_taskInQueueForcesNetworkConnection:(id)arg1 ;
-(void)taskManagerWillRemoveTask:(id)arg1 ;
-(void)_releasePowerAssertionForTask:(id)arg1 ;
-(void)setModalHeldActiveQueuedTask:(id<DATask>)arg1 ;
-(void)_performTask:(id)arg1 ;
-(void)_startModal:(id)arg1 ;
-(void)setActiveModalTask:(id<DATask>)arg1 ;
-(void)_reactivateHeldTasks;
-(void)_scheduleStartModal:(id)arg1 ;
-(BOOL)_hasTasksForcingNetworkConnection;
-(void)_useOpportunisticSocketsAgain;
-(BOOL)_hasTasksIndicatingARunningSync;
-(void)_clearUserInitiatedSyncTimer;
-(void)_endXpcTransaction;
-(BOOL)didLogSyncStart;
-(void)_logSyncEnd;
-(void)cancelTasksDueToOnPowerMode;
-(void)_retainPowerAssertionForTask:(id)arg1 ;
-(void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2 ;
-(NSString *)powerAssertionGroupID;
-(NSArray *)queuedTasks;
-(BOOL)_useFakeDescriptions;
-(id)OAuth2Token;
-(void)submitExclusiveTask:(id)arg1 ;
-(void)submitIndependentTask:(id)arg1 ;
-(void)submitQueuedTask:(id)arg1 ;
-(void)taskDidFinish:(id)arg1 ;
-(void)taskRequestModal:(id)arg1 ;
-(void)taskEndModal:(id)arg1 ;
-(BOOL)taskIsModal:(id)arg1 ;
-(void)setPowerAssertionGroupID:(NSString *)arg1 ;
-(void)setQueuedExclusiveTasks:(NSMutableArray *)arg1 ;
-(void)setIndependentTasks:(NSMutableSet *)arg1 ;
-(void)setHeldIndependentTasks:(NSMutableSet *)arg1 ;
-(void)setModalHeldIndependentTasks:(NSMutableSet *)arg1 ;
-(void)setMQueuedTasks:(NSMutableArray *)arg1 ;
-(void)setQueuedModalTasks:(NSMutableArray *)arg1 ;
-(void)setDidLogSyncStart:(BOOL)arg1 ;
@end

