/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recover:(/*^block*/id)arg1 ;
-(id)initWithTask:(id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(BOOL)run;
-(/*^block*/id)completionHandlerAdapter;
-(id)init;
-(void)didCancel;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(id)flatMap:(/*^block*/id)arg1 ;
-(BOOL)isFinished;
-(void)_flushCompletionBlocks;
-(BOOL)nts_isFinished;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)result:(id*)arg1 ;
-(id)futureResult;
-(BOOL)finishWithError:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(BOOL)cancel;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(BOOL)isCancelled;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

