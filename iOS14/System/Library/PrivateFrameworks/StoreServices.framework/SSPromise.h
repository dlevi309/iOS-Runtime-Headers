/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)_finishPromise:(id)arg1 withPromise:(id)arg2 ;
+(BOOL)_errorIsCanceledError:(id)arg1 ;
+(id)_globalPromiseStorage;
+(id)promiseWithResult:(id)arg1 ;
+(id)promiseWithAll:(id)arg1 ;
+(void)_configureAnyPromise:(id)arg1 withPomises:(id)arg2 currentPromiseIndex:(unsigned long long)arg3 ;
+(id)_globalPromiseStorageAccessQueue;
+(id)promiseWithAny:(id)arg1 ;
+(id)promiseWithError:(id)arg1 ;
+(void)_configureAllPromise:(id)arg1 withResults:(id)arg2 promises:(id)arg3 currentPromiseIndex:(unsigned long long)arg4 ;
-(id)resultWithError:(id*)arg1 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(SSPromiseResult *)promiseResult;
-(void)setPromiseResult:(SSPromiseResult *)arg1 ;
-(id)catchWithBlock:(/*^block*/id)arg1 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(SSPromiseCompletionBlocks *)completionBlocks;
-(/*^block*/id)boolCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapter;
-(id)init;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(void)_addBlock:(/*^block*/id)arg1 orCallWithResult:(/*^block*/id)arg2 ;
-(void)setCompletionBlocks:(SSPromiseCompletionBlocks *)arg1 ;
-(void)waitUntilFinished;
-(id)thenWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_isFinished;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)nilValueCompletionHandlerAdapter;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(BOOL)isFinished;
-(NSConditionLock *)stateLock;
-(void)setStateLock:(NSConditionLock *)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

