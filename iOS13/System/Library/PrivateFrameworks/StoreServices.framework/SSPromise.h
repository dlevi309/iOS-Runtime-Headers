/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSPromiseCompletionBlocks, SSPromiseResult, NSConditionLock;

@interface SSPromise : NSObject {

	SSPromiseCompletionBlocks* _completionBlocks;
	SSPromiseResult* _promiseResult;
	NSConditionLock* _stateLock;

}

@property (nonatomic,retain) SSPromiseCompletionBlocks * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) SSPromiseResult * promiseResult;                           //@synthesize promiseResult=_promiseResult - In the implementation block
@property (nonatomic,retain) NSConditionLock * stateLock;                               //@synthesize stateLock=_stateLock - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
+(id)promiseWithError:(id)arg1 ;
+(id)promiseWithAll:(id)arg1 ;
+(id)promiseWithAny:(id)arg1 ;
+(id)promiseWithResult:(id)arg1 ;
+(id)_globalPromiseStorageAccessQueue;
+(id)_globalPromiseStorage;
+(void)_finishPromise:(id)arg1 withPromise:(id)arg2 ;
+(BOOL)_errorIsCanceledError:(id)arg1 ;
+(void)_configureAllPromise:(id)arg1 withResults:(id)arg2 promises:(id)arg3 currentPromiseIndex:(unsigned long long)arg4 ;
+(void)_configureAnyPromise:(id)arg1 withPomises:(id)arg2 currentPromiseIndex:(unsigned long long)arg3 ;
-(id)init;
-(void)waitUntilFinished;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)_isFinished;
-(id)resultWithError:(id*)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(SSPromiseCompletionBlocks *)completionBlocks;
-(void)setCompletionBlocks:(SSPromiseCompletionBlocks *)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapter;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(NSConditionLock *)stateLock;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)thenWithBlock:(/*^block*/id)arg1 ;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(id)catchWithBlock:(/*^block*/id)arg1 ;
-(void)setStateLock:(NSConditionLock *)arg1 ;
-(SSPromiseResult *)promiseResult;
-(void)_addBlock:(/*^block*/id)arg1 orCallWithResult:(/*^block*/id)arg2 ;
-(void)setPromiseResult:(SSPromiseResult *)arg1 ;
-(/*^block*/id)boolCompletionHandlerAdapter;
-(/*^block*/id)nilValueCompletionHandlerAdapter;
@end

