/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNFuture.h>
#import <libobjc.A.dylib/CNPromise.h>

@class NSConditionLock, CNFutureResult, CNTask, CNFutureCompletionBlocks, NSString;

@interface CNFutureTask : NSObject <CNFuture, CNPromise> {

	NSConditionLock* _stateLock;
	CNFutureResult* _futureResult;
	CNTask* _task;
	CNFutureCompletionBlocks* _completionBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
-(id)init;
-(BOOL)run;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)finishWithError:(id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)_flushCompletionBlocks;
-(void)didCancel;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)result:(id*)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(id)initWithTask:(id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(id)flatMap:(/*^block*/id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(BOOL)nts_isFinished;
-(id)futureResult;
@end

