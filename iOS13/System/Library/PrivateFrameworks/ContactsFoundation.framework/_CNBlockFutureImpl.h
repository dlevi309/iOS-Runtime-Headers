/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNFutureImpl.h>

@class NSConditionLock, CNFutureResult, CNSuspendableSchedulerDecorator, NSString;

@interface _CNBlockFutureImpl : NSObject <CNFutureImpl> {

	NSConditionLock* _stateLock;
	CNFutureResult* _futureResult;
	CNSuspendableSchedulerDecorator* _blockScheduler;
	BOOL _queueSuspended;
	BOOL _workBlockScheduled;

}

@property (nonatomic,readonly) NSConditionLock * stateLock;                                   //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * blockScheduler;              //@synthesize blockScheduler=_blockScheduler - In the implementation block
@property (assign,nonatomic) BOOL workBlockScheduled;                                         //@synthesize workBlockScheduled=_workBlockScheduled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)implWithSchedulerProvider:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)lazyImplWithSchedulerProvider:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)implWithBlock:(/*^block*/id)arg1 ;
+(id)lazyImplWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)_nts_isFinished;
-(void)_flushCompletionBlocks;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(void)updateDescriptionWithBuilder:(id)arg1 ;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(void)resumeQueue;
-(void)addWriterBlock:(/*^block*/id)arg1 ;
-(NSConditionLock *)stateLock;
-(BOOL)workBlockScheduled;
-(BOOL)nts_mayResumeQueue;
-(void)nts_resumeQueue;
-(CNSuspendableSchedulerDecorator *)blockScheduler;
-(void)setWorkBlockScheduled:(BOOL)arg1 ;
-(void)implicitlyResumeQueue;
-(id)futureResultFromImmediateLookup;
-(id)futureResultFromAsynchronousLookupBeforeDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)nts_isFinished;
-(id)futureResult;
@end

