/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSWatchdogProviding.h>

@protocol OS_os_log;
@class NSMutableArray, NSMutableSet, NSDate, NSMutableDictionary, NSHashTable, BSAuditHistory, NSObject, NSString, NSError, NSSet, NSArray;

@interface BSTransaction : NSObject <BSWatchdogProviding> {

	NSMutableArray* _parentTransactionRelationships;
	NSMutableSet* _lifeAssertions;
	BOOL _aborted;
	BOOL _interrupted;
	BOOL _inSubclassBegin;
	NSDate* _startTime;
	NSMutableDictionary* _milestonesToHandlers;
	NSMutableArray* _childTransactionRelationships;
	NSMutableSet* _milestones;
	NSHashTable* _observers;
	unsigned long long _state;
	BSAuditHistory* _auditHistory;
	NSObject*<OS_os_log> _auditHistoryLog;
	BOOL _disableDebugLogCheckForUnitTesting;
	BOOL _debugLoggingEnabled;
	NSMutableSet* _debugLogCategories;
	NSString* _cachedDescriptionProem;
	NSMutableArray* _blockObservers;
	/*^block*/id _completionBlock;
	BOOL _cachedDefaultBasedAuditHistoryEnabled;
	BOOL _failed;
	BOOL _auditHistoryEnabled;
	NSError* _error;

}

@property (assign,getter=isAuditHistoryEnabled,nonatomic) BOOL auditHistoryEnabled;              //@synthesize auditHistoryEnabled=_auditHistoryEnabled - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) NSSet * milestones; 
@property (nonatomic,readonly) NSArray * childTransactions; 
@property (getter=hasStarted,nonatomic,readonly) BOOL started; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (getter=isFinishedWorking,nonatomic,readonly) BOOL finishedWorking; 
@property (getter=isInterrupted,nonatomic,readonly) BOOL interrupted; 
@property (getter=isInterruptible,nonatomic,readonly) BOOL interruptible; 
@property (getter=isFailed,nonatomic,readonly) BOOL failed;                                      //@synthesize failed=_failed - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * allErrors; 
@property (nonatomic,copy) id completionBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInterrupted;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_willInterruptWithReason:(id)arg1 ;
-(BOOL)isComplete;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(id)completionBlock;
-(BOOL)_canBeInterrupted;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)shouldWatchdog:(id*)arg1 ;
-(void)begin;
-(void)_begin;
-(void)_willBegin;
-(id)init;
-(void)interrupt;
-(BOOL)isInterruptible;
-(void)_didComplete;
-(NSSet *)milestones;
-(void)addMilestone:(id)arg1 ;
-(BOOL)isAuditHistoryEnabled;
-(NSArray *)childTransactions;
-(void)_addDebugLogCategory:(id)arg1 ;
-(id)_debugLogCategories;
-(BOOL)_debugLoggingEnabled;
-(void)addChildTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2 ;
-(BOOL)_isRootTransaction;
-(void)_enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)interruptWithReason:(id)arg1 ;
-(void)addMilestones:(id)arg1 ;
-(BOOL)isFinishedWorking;
-(id)_stringForMilestones:(id)arg1 ;
-(void)_addAuditHistoryItem:(id)arg1 ;
-(BOOL)removeMilestones:(id)arg1 ;
-(BOOL)isWaitingForMilestone:(id)arg1 ;
-(void)evaluateMilestone:(id)arg1 withEvaluator:(/*^block*/id)arg2 ;
-(void)_didSatisfyMilestone:(id)arg1 ;
-(void)_failWithReason:(id)arg1 description:(id)arg2 precipitatingError:(id)arg3 ;
-(void)_childTransactionDidFinishWork:(id)arg1 ;
-(void)_didFinishWork;
-(void)setAuditHistoryEnabled:(BOOL)arg1 ;
-(id)_loggingProem;
-(void)_didAddChildTransaction:(id)arg1 ;
-(void)_willRemoveChildTransaction:(id)arg1 ;
-(void)removeAllMilestones;
-(BOOL)_shouldComplete;
-(void)addChildTransaction:(id)arg1 ;
-(void)_didRemoveChildTransaction:(id)arg1 ;
-(BOOL)hasChildTransactionsOfClass:(Class)arg1 ;
-(id)childTransactionsOfClass:(Class)arg1 ;
-(void)removeChildTransaction:(id)arg1 ;
-(void)removeAllChildTransactionsOfClass:(Class)arg1 ;
-(void)removeAllChildTransactions;
-(void)registerBlockObserver:(/*^block*/id)arg1 ;
-(BOOL)isInterruptable;
-(void)failWithReason:(id)arg1 ;
-(BOOL)removeMilestone:(id)arg1 ;
-(void)satisfyMilestone:(id)arg1 ;
-(void)listenForSatisfiedMilestone:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_revertWithReason:(id)arg1 ;
-(void)_evaluateCompletion;
-(void)_failForTimeoutWithDescription:(id)arg1 ;
-(void)_failWithReason:(id)arg1 description:(id)arg2 ;
-(void)_removeDebugLogCategory:(id)arg1 ;
-(NSString *)debugDescription;
-(id)_customizedDescriptionProperties;
-(BOOL)hasStarted;
-(NSError *)error;
-(NSArray *)allErrors;
-(void)_willAddChildTransaction:(id)arg1 ;
-(id)_graphNodeDebugName;
-(NSString *)description;
-(id)_descriptionProem;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isRunning;
-(NSObject*<OS_dispatch_queue>)queue;
-(double)watchdogTimeout;
-(void)_willComplete;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)_didBegin;
-(BOOL)isFailed;
-(void)dealloc;
@end

