/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/ACHTemplateStoreObserving.h>
#import <libobjc.A.dylib/ACHAwardingScheduler.h>

@protocol OS_dispatch_queue;
@class NSDate, HDProfile, ACHDataStore, ACHEarnedInstanceStore, ACHTemplateStore, ACHEarnedInstanceAwardingEngine, HDPeriodicActivity, NSCalendar, NSObject, NSNumber, _HKDelayedOperation, NSMutableArray, HDKeyValueDomain, HDMaintenanceOperation, NSString;

@interface ACHCompanionAwardingScheduler : NSObject <HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDiagnosticObject, ACHTemplateStoreObserving, ACHAwardingScheduler> {

	BOOL _shouldRetryEarnedInstanceDeletion;
	NSDate* _lastSuccessfulRunDate;
	HDProfile* _profile;
	ACHDataStore* _dataStore;
	ACHEarnedInstanceStore* _earnedInstanceStore;
	ACHTemplateStore* _templateStore;
	ACHEarnedInstanceAwardingEngine* _awardingEngine;
	HDPeriodicActivity* _scheduler;
	NSCalendar* _calendar;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _forceActivityAppInstalled;
	_HKDelayedOperation* _operation;
	NSMutableArray* _awardEvaluationCompletionBlocks;
	NSObject*<OS_dispatch_queue> _awardingEvaluationQueue;
	NSNumber* _coalescingDelayOverride;
	HDKeyValueDomain* _localKeyValueDomain;
	HDMaintenanceOperation* _maintenanceOperation;

}

@property (nonatomic,retain) HDProfile * profile;                                               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) ACHDataStore * dataStore;                                          //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) ACHEarnedInstanceStore * earnedInstanceStore;                      //@synthesize earnedInstanceStore=_earnedInstanceStore - In the implementation block
@property (nonatomic,retain) ACHTemplateStore * templateStore;                                  //@synthesize templateStore=_templateStore - In the implementation block
@property (nonatomic,retain) ACHEarnedInstanceAwardingEngine * awardingEngine;                  //@synthesize awardingEngine=_awardingEngine - In the implementation block
@property (nonatomic,retain) HDPeriodicActivity * scheduler;                                    //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                             //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL shouldRetryEarnedInstanceDeletion;                            //@synthesize shouldRetryEarnedInstanceDeletion=_shouldRetryEarnedInstanceDeletion - In the implementation block
@property (nonatomic,retain) NSNumber * forceActivityAppInstalled;                              //@synthesize forceActivityAppInstalled=_forceActivityAppInstalled - In the implementation block
@property (nonatomic,retain) _HKDelayedOperation * operation;                                   //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSMutableArray * awardEvaluationCompletionBlocks;                  //@synthesize awardEvaluationCompletionBlocks=_awardEvaluationCompletionBlocks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> awardingEvaluationQueue;              //@synthesize awardingEvaluationQueue=_awardingEvaluationQueue - In the implementation block
@property (nonatomic,retain) NSNumber * coalescingDelayOverride;                                //@synthesize coalescingDelayOverride=_coalescingDelayOverride - In the implementation block
@property (nonatomic,retain) HDKeyValueDomain * localKeyValueDomain;                            //@synthesize localKeyValueDomain=_localKeyValueDomain - In the implementation block
@property (nonatomic,retain) NSDate * lastSuccessfulRunDate;                                    //@synthesize lastSuccessfulRunDate=_lastSuccessfulRunDate - In the implementation block
@property (nonatomic,retain) HDMaintenanceOperation * maintenanceOperation;                     //@synthesize maintenanceOperation=_maintenanceOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(_HKDelayedOperation *)operation;
-(void)setOperation:(_HKDelayedOperation *)arg1 ;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(HDPeriodicActivity *)scheduler;
-(void)setScheduler:(HDPeriodicActivity *)arg1 ;
-(ACHDataStore *)dataStore;
-(void)setDataStore:(ACHDataStore *)arg1 ;
-(id)diagnosticDescription;
-(ACHEarnedInstanceStore *)earnedInstanceStore;
-(ACHTemplateStore *)templateStore;
-(void)daemonReady:(id)arg1 ;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(void)setEarnedInstanceStore:(ACHEarnedInstanceStore *)arg1 ;
-(void)templateStore:(id)arg1 didAddNewTemplates:(id)arg2 ;
-(void)templateStore:(id)arg1 didRemoveTemplates:(id)arg2 ;
-(void)templateStoreDidFinishInitialFetch:(id)arg1 ;
-(void)requestAwardingEvaluationWithCompletion:(/*^block*/id)arg1 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1 ;
-(HDKeyValueDomain *)localKeyValueDomain;
-(NSDate *)lastSuccessfulRunDate;
-(BOOL)_userInfoContainsCompanionActivityBundleID:(id)arg1 ;
-(void)_queue_removeAllEarnedInstances;
-(void)setShouldRetryEarnedInstanceDeletion:(BOOL)arg1 ;
-(void)_systemTimeZoneDidChange:(id)arg1 ;
-(void)_applicationsInstalled:(id)arg1 ;
-(void)_applicationsUninstalled:(id)arg1 ;
-(BOOL)_shouldRunImmediatelyOnTemplateLoad;
-(void)scheduleMaintenanceTaskForAwardingWithCompletion:(/*^block*/id)arg1 ;
-(NSNumber *)forceActivityAppInstalled;
-(BOOL)shouldRetryEarnedInstanceDeletion;
-(void)_queue_addAwardingCompletion:(/*^block*/id)arg1 ;
-(void)_queue_requestAwardingEvaluation;
-(HDMaintenanceOperation *)maintenanceOperation;
-(void)_queue_removeMaintenanceOperation;
-(void)setlastSuccessfulRunDate:(id)arg1 ;
-(void)setMaintenanceOperation:(HDMaintenanceOperation *)arg1 ;
-(void)_queue_callAwardingCompletionsWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)_didRunToday;
-(void)setForceActivityAppInstalled:(NSNumber *)arg1 ;
-(void)setCoalescingDelayOverride:(NSNumber *)arg1 ;
-(void)_queue_performCleanupTasks;
-(id)initWithProfile:(id)arg1 dataStore:(id)arg2 earnedInstanceStore:(id)arg3 templateStore:(id)arg4 awardingEngine:(id)arg5 ;
-(void)clearLastSuccessfulRunDate;
-(void)shouldForceActivityAppInstalled:(BOOL)arg1 ;
-(void)overrideCoalescingDelay:(double)arg1 ;
-(void)addAwardingCompletion:(/*^block*/id)arg1 ;
-(void)setLastSuccessfulRunDate:(NSDate *)arg1 ;
-(ACHEarnedInstanceAwardingEngine *)awardingEngine;
-(void)setAwardingEngine:(ACHEarnedInstanceAwardingEngine *)arg1 ;
-(NSMutableArray *)awardEvaluationCompletionBlocks;
-(void)setAwardEvaluationCompletionBlocks:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)awardingEvaluationQueue;
-(void)setAwardingEvaluationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSNumber *)coalescingDelayOverride;
-(void)setLocalKeyValueDomain:(HDKeyValueDomain *)arg1 ;
@end
