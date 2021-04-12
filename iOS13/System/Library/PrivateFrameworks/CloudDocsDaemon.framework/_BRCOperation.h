/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue, OS_os_transaction, OS_dispatch_source, OS_dispatch_group, OS_os_activity;
@class BRCSyncContext, NSObject, NSDate, NSError, NSMutableArray, BRCThrottle, CKOperationGroup, NSUUID;

@interface _BRCOperation : NSOperation {

	BRCSyncContext* _syncContext;
	unsigned char _operationUUID[16];
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_os_transaction> _executionTransaction;
	NSDate* _startDate;
	NSDate* _finishDate;
	NSDate* _lastTryDate;
	NSDate* _nextTryDate;
	NSError* _lastError;
	long long _throttleHash;
	NSObject*<OS_dispatch_source> _retryTimer;
	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_os_activity> _Activity;
	NSMutableArray* _associatedEventMetrics;
	BOOL _finished;
	BOOL _nonDiscretionary;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BRCThrottle* _operationThrottle;
	BRCThrottle* _operationFailureThrottle;
	/*^block*/id _mainBlock;
	/*^block*/id _finishBlock;
	unsigned long long _logSections;
	CKOperationGroup* _operationGroup;

}

@property (assign,getter=isExecuting,nonatomic) BOOL executing; 
@property (assign,getter=isFinished,nonatomic) BOOL finished;                           //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL nonDiscretionary;                                     //@synthesize nonDiscretionary=_nonDiscretionary - In the implementation block
@property (nonatomic,readonly) NSUUID * operationID; 
@property (nonatomic,readonly) NSDate * startDate;                                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) BRCSyncContext * syncContext;                            //@synthesize syncContext=_syncContext - In the implementation block
@property (nonatomic,retain) CKOperationGroup * group;                                  //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,readonly) NSError * error;                                         //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,readonly) unsigned long long logSections;                          //@synthesize logSections=_logSections - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BRCThrottle * operationThrottle;                           //@synthesize operationThrottle=_operationThrottle - In the implementation block
@property (assign,nonatomic) BRCThrottle * operationFailureThrottle;                    //@synthesize operationFailureThrottle=_operationFailureThrottle - In the implementation block
@property (nonatomic,readonly) BOOL usesBackgroundSession; 
@property (nonatomic,copy) id mainBlock;                                                //@synthesize mainBlock=_mainBlock - In the implementation block
@property (nonatomic,copy) id finishBlock;                                              //@synthesize finishBlock=_finishBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithName:(id)arg1 ;
-(void)setGroup:(CKOperationGroup *)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)start;
-(void)main;
-(void)setFinished:(BOOL)arg1 ;
-(NSDate *)startDate;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(CKOperationGroup *)group;
-(void)schedule;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)_finishIfCancelled;
-(void)completedWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)finishIfCancelled;
-(BOOL)nonDiscretionary;
-(void)setNonDiscretionary:(BOOL)arg1 ;
-(void)setExecuting:(BOOL)arg1 ;
-(NSUUID *)operationID;
-(void)_main;
-(BOOL)usesBackgroundSession;
-(void)_completedWithResult:(id)arg1 error:(id)arg2 ;
-(void)setFinishBlock:(id)arg1 ;
-(id)finishBlock;
-(id)descriptionWithContext:(id)arg1 ;
-(id)initWithName:(id)arg1 syncContext:(id)arg2 ;
-(void)addSubOperation:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(BRCThrottle *)operationFailureThrottle;
-(id)initWithName:(id)arg1 syncContext:(id)arg2 group:(id)arg3 ;
-(id)subclassableDescriptionWithContext:(id)arg1 ;
-(id)stateWithContext:(id)arg1 ;
-(id)mainBlock;
-(BRCThrottle *)operationThrottle;
-(void)_executeWithPreviousError:(id)arg1 ;
-(void)_scheduleExecutionWithPreviousError:(id)arg1 ;
-(void)addSubOperation:(id)arg1 overrideContext:(id)arg2 allowsCellularAccess:(id)arg3 ;
-(void)associateCKOperationsToEventMetric:(id)arg1 ;
-(void)setOperationThrottle:(BRCThrottle *)arg1 ;
-(void)setOperationFailureThrottle:(BRCThrottle *)arg1 ;
-(void)setMainBlock:(id)arg1 ;
-(unsigned long long)logSections;
-(BRCSyncContext *)syncContext;
@end

