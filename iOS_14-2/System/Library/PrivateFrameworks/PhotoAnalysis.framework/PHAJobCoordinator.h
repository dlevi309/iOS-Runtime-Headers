/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <libobjc.A.dylib/PHAJobCoalescerDelegate.h>
#import <libobjc.A.dylib/PHAJobConstraintsObserverDelegate.h>
#import <libobjc.A.dylib/PHAWorkerJobDelegate.h>
#import <libobjc.A.dylib/PHADirtyChangeCoalescerDelegate.h>
#import <libobjc.A.dylib/PHAActivityGovernorDelegate.h>
#import <libobjc.A.dylib/PHAGraphManagerClientMessagesReceiver.h>

@protocol PHAJobCoordinatorDelegate, OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
@class NSDictionary, PHAJobConstraints, PHAWorkerWarmer, PHAJobCoalescer, PHADirtyChangeCoalescer, PHAJobConstraintsObserver, NSObject, PHAWorkerHealthMonitor, PHAActivityGovernor, PHAJobGenerator, PHAManager, PHAWorkerJob, NSMutableArray, NSMutableSet, NSString;

@interface PHAJobCoordinator : NSObject <PHAJobCoalescerDelegate, PHAJobConstraintsObserverDelegate, PHAWorkerJobDelegate, PHADirtyChangeCoalescerDelegate, PHAActivityGovernorDelegate, PHAGraphManagerClientMessagesReceiver> {

	Ai _pendingAsyncTasksCount;
	AQ _processingQOS;
	BOOL _graphUpdateNeeded;
	NSDictionary* _cachedWorkersByType;
	os_unfair_lock_s _workersByTypeLock;
	BOOL _newConstraintsPending;
	BOOL _shouldIgnoreConstraintChanges;
	PHAJobConstraints* _currentConstraints;
	PHAWorkerWarmer* _warmer;
	PHAJobCoalescer* _jobCoalescer;
	PHADirtyChangeCoalescer* _dirtyCoalescer;
	PHAJobConstraintsObserver* _constraintsObserver;
	double _maxIntervalSinceLastJobReport;
	id<PHAJobCoordinatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _maintenanceTimer;
	PHAWorkerHealthMonitor* _healthMonitor;
	PHAActivityGovernor* _activityGovernor;
	PHAJobGenerator* _jobGenerator;
	PHAManager* _manager;
	PHAWorkerJob* _currentForegroundJob;
	NSMutableArray* _waitingForegroundJobs;
	PHAWorkerJob* _currentBackgroundJob;
	NSObject*<OS_os_transaction> _runningJobTransaction;
	NSMutableSet* _workerTypesServicedForUserFG;
	NSObject*<OS_os_transaction> _foregroundTransaction;

}

@property (nonatomic,readonly) PHAJobCoalescer * jobCoalescer;                                //@synthesize jobCoalescer=_jobCoalescer - In the implementation block
@property (nonatomic,readonly) PHADirtyChangeCoalescer * dirtyCoalescer;                      //@synthesize dirtyCoalescer=_dirtyCoalescer - In the implementation block
@property (nonatomic,readonly) PHAJobConstraintsObserver * constraintsObserver;               //@synthesize constraintsObserver=_constraintsObserver - In the implementation block
@property (assign,nonatomic) double maxIntervalSinceLastJobReport;                            //@synthesize maxIntervalSinceLastJobReport=_maxIntervalSinceLastJobReport - In the implementation block
@property (assign,nonatomic,__weak) id<PHAJobCoordinatorDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> maintenanceTimer;                //@synthesize maintenanceTimer=_maintenanceTimer - In the implementation block
@property (assign,nonatomic) BOOL newConstraintsPending;                                      //@synthesize newConstraintsPending=_newConstraintsPending - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreConstraintChanges;                              //@synthesize shouldIgnoreConstraintChanges=_shouldIgnoreConstraintChanges - In the implementation block
@property (nonatomic,readonly) PHAWorkerHealthMonitor * healthMonitor;                        //@synthesize healthMonitor=_healthMonitor - In the implementation block
@property (nonatomic,readonly) PHAActivityGovernor * activityGovernor;                        //@synthesize activityGovernor=_activityGovernor - In the implementation block
@property (assign,nonatomic) BOOL activityGovernorOverride; 
@property (nonatomic,readonly) PHAJobGenerator * jobGenerator;                                //@synthesize jobGenerator=_jobGenerator - In the implementation block
@property (assign,nonatomic,__weak) PHAManager * manager;                                     //@synthesize manager=_manager - In the implementation block
@property (copy) PHAJobConstraints * currentConstraints;                                      //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (nonatomic,retain) PHAWorkerJob * currentForegroundJob;                             //@synthesize currentForegroundJob=_currentForegroundJob - In the implementation block
@property (nonatomic,readonly) NSMutableArray * waitingForegroundJobs;                        //@synthesize waitingForegroundJobs=_waitingForegroundJobs - In the implementation block
@property (nonatomic,retain) PHAWorkerJob * currentBackgroundJob;                             //@synthesize currentBackgroundJob=_currentBackgroundJob - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> runningJobTransaction;              //@synthesize runningJobTransaction=_runningJobTransaction - In the implementation block
@property (nonatomic,retain) NSMutableSet * workerTypesServicedForUserFG;                     //@synthesize workerTypesServicedForUserFG=_workerTypesServicedForUserFG - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> foregroundTransaction;              //@synthesize foregroundTransaction=_foregroundTransaction - In the implementation block
@property (getter=isQuiescent,nonatomic,readonly) BOOL quiescent; 
@property (nonatomic,readonly) PHAWorkerWarmer * warmer;                                      //@synthesize warmer=_warmer - In the implementation block
@property (readonly) BOOL graphUpdateNeeded;                                                  //@synthesize graphUpdateNeeded=_graphUpdateNeeded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManager:(id)arg1 ;
-(BOOL)shouldIgnoreConstraintChanges;
-(void)_inq_reconsiderWantsFGActivityBasedOnConstraints:(id)arg1 ;
-(void)shutdown;
-(void)_inq_launchJob:(id)arg1 ;
-(void)_inq_timeoutJob:(id)arg1 ;
-(id)_inq_runningJobs;
-(void)_inq_handleJobFinished:(id)arg1 ;
-(void)governorDidGrantForegroundAccess:(id)arg1 ;
-(id)_defaultWorkersByType;
-(id)_workerForJob:(id)arg1 ;
-(id)photoLibrary;
-(PHAJobConstraintsObserver *)constraintsObserver;
-(void)_installMaintenanceTimer;
-(void)enqueueForegroundJob:(id)arg1 ;
-(id)initWithManager:(id)arg1 initialConstraints:(id)arg2 additionalWorkersByType:(id)arg3 ;
-(id<PHAJobCoordinatorDelegate>)delegate;
-(void)enforceTimeouts;
-(NSMutableSet *)workerTypesServicedForUserFG;
-(NSObject*<OS_os_transaction>)foregroundTransaction;
-(void)setMaxIntervalSinceLastJobReport:(double)arg1 ;
-(void)setManager:(PHAManager *)arg1 ;
-(void)_inq_stopJobsAfterConstraintOrActivityChange;
-(void)setNewConstraintsPending:(BOOL)arg1 ;
-(void)setCurrentForegroundJob:(PHAWorkerJob *)arg1 ;
-(PHAJobConstraints *)currentConstraints;
-(void)addWorker:(id)arg1 ;
-(PHAWorkerHealthMonitor *)healthMonitor;
-(NSMutableArray *)waitingForegroundJobs;
-(PHAJobGenerator *)jobGenerator;
-(void)jobConstraintsObserver:(id)arg1 constraintsDidChange:(id)arg2 mask:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setRunningJobTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setForegroundTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setDelegate:(id<PHAJobCoordinatorDelegate>)arg1 ;
-(void)graphManagerDidUnloadGraph:(id)arg1 ;
-(void)_inq_stopJobDueToConstraintOrActivityChange:(id)arg1 ;
-(void)graphManagerWillLoadGraph:(id)arg1 ;
-(NSString *)description;
-(PHAActivityGovernor *)activityGovernor;
-(void)_inq_handleNoMoreJobsExpected;
-(PHADirtyChangeCoalescer *)dirtyCoalescer;
-(void)jobCoalescer:(id)arg1 didProduceJob:(id)arg2 ;
-(void)setCurrentConstraints:(PHAJobConstraints *)arg1 ;
-(PHAJobCoalescer *)jobCoalescer;
-(BOOL)newConstraintsPending;
-(void)setWorkerTypesServicedForUserFG:(NSMutableSet *)arg1 ;
-(double)maxIntervalSinceLastJobReport;
-(id)statusAsDictionary;
-(void)operationDidFinish:(id)arg1 ;
-(void)_scheduleNextJob;
-(NSObject*<OS_dispatch_source>)maintenanceTimer;
-(PHAWorkerWarmer *)warmer;
-(void)processJobs;
-(id)workersByType;
-(id)_inq_nextForegroundJobCanRunAutomatic:(BOOL)arg1 canRunUserFG:(BOOL)arg2 canRunImmediate:(BOOL)arg3 ;
-(PHAManager *)manager;
-(void)didFinishJob:(id)arg1 ;
-(void)_inq_enforceTimeoutForJob:(id)arg1 ;
-(void)handleOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)activityGovernorOverride;
-(void)_inq_enqueueForegroundJob:(id)arg1 ;
-(void)setShouldIgnoreConstraintChanges:(BOOL)arg1 ;
-(NSObject*<OS_os_transaction>)runningJobTransaction;
-(void)governorDidRevokeBackgroundAccess:(id)arg1 ;
-(id)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 ;
-(void)setCurrentBackgroundJob:(PHAWorkerJob *)arg1 ;
-(BOOL)isQuiescent;
-(BOOL)_inq_isQuiescent;
-(void)setActivityGovernorOverride:(BOOL)arg1 ;
-(void)coalescer:(id)arg1 didCoalesce:(id)arg2 ;
-(void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(PHAWorkerJob *)currentBackgroundJob;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_nextAdditionalJobForWorkerTypeObj:(id)arg1 scenario:(unsigned long long)arg2 ;
-(void)_dispatchTransactionAsyncWithName:(const char*)arg1 block:(/*^block*/id)arg2 ;
-(void)governorDidGrantBackgroundAccess:(id)arg1 ;
-(BOOL)graphUpdateNeeded;
-(void)governorDidRevokeForegroundAccess:(id)arg1 ;
-(void)dealloc;
-(PHAWorkerJob *)currentForegroundJob;
@end

