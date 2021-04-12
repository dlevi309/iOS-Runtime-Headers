/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)implWithBlock:(/*^block*/id)arg1 ;
+(id)lazyImplWithSchedulerProvider:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)lazyImplWithBlock:(/*^block*/id)arg1 ;
-(void)implicitlyResumeQueue;
-(id)init;
-(void)updateDescriptionWithBuilder:(id)arg1 ;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(BOOL)nts_mayResumeQueue;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)isFinished;
-(void)_flushCompletionBlocks;
-(BOOL)nts_isFinished;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(void)resumeQueue;
-(BOOL)_nts_isFinished;
-(id)futureResult;
-(NSConditionLock *)stateLock;
-(void)setWorkBlockScheduled:(BOOL)arg1 ;
-(void)nts_resumeQueue;
-(id)futureResultFromImmediateLookup;
-(BOOL)workBlockScheduled;
-(id)futureResultFromAsynchronousLookupBeforeDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)cancel;
-(void)addWriterBlock:(/*^block*/id)arg1 ;
-(CNSuspendableSchedulerDecorator *)blockScheduler;
-(BOOL)isCancelled;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
@end

