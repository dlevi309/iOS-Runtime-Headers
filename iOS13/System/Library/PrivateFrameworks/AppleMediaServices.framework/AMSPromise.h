/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSPromiseCompletionBlocks, AMSPromiseResult, NSConditionLock;

@interface AMSPromise : NSObject {

	AMSPromiseCompletionBlocks* _completionBlocks;
	AMSPromiseResult* _promiseResult;
	NSConditionLock* _stateLock;

}

@property (nonatomic,retain) AMSPromiseCompletionBlocks * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) AMSPromiseResult * promiseResult;                           //@synthesize promiseResult=_promiseResult - In the implementation block
@property (nonatomic,retain) NSConditionLock * stateLock;                                //@synthesize stateLock=_stateLock - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isTimedOut,nonatomic,readonly) BOOL timedOut; 
+(id)promiseWithError:(id)arg1 ;
+(id)promiseWithAll:(id)arg1 ;
+(id)promiseWithAny:(id)arg1 ;
+(id)promiseWithResult:(id)arg1 ;
+(id)_globalPromiseStorageAccessQueue;
+(id)_globalPromiseStorage;
+(id)promiseWithFlattenedPromises:(id)arg1 ;
+(id)promiseWithAll:(id)arg1 timeout:(double)arg2 ;
+(void)_enumeratePromises:(id)arg1 startingAt:(long long)arg2 block:(/*^block*/id)arg3 ;
+(id)promiseWithAny:(id)arg1 timeout:(double)arg2 ;
+(void)_configureFlattenedPromise:(id)arg1 withPromises:(id)arg2 results:(id)arg3 previousError:(id)arg4 currentPromiseIndex:(unsigned long long)arg5 ;
+(void)_finishPromise:(id)arg1 withPromise:(id)arg2 ;
+(BOOL)_errorIsCanceledError:(id)arg1 ;
+(BOOL)_errorIsTimeOutError:(id)arg1 ;
+(id)promiseFinishedWithDefaultErrorOrResult:(id)arg1 ;
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
-(AMSPromiseCompletionBlocks *)completionBlocks;
-(void)setCompletionBlocks:(AMSPromiseCompletionBlocks *)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapter;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(NSConditionLock *)stateLock;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)thenWithBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithPromise:(id)arg1 ;
-(id)binaryPromiseAdapter;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(id)catchWithBlock:(/*^block*/id)arg1 ;
-(id)continueWithBlock:(/*^block*/id)arg1 ;
-(void)startTimeout:(double)arg1 ;
-(void)setStateLock:(NSConditionLock *)arg1 ;
-(BOOL)_finishWithResult:(id)arg1 error:(id)arg2 logDuplicateFinishes:(BOOL)arg3 ;
-(AMSPromiseResult *)promiseResult;
-(void)_addBlock:(/*^block*/id)arg1 orCallWithResult:(/*^block*/id)arg2 ;
-(void)setPromiseResult:(AMSPromiseResult *)arg1 ;
-(id)promiseWithTimeout:(double)arg1 ;
-(BOOL)isTimedOut;
-(/*^block*/id)boolCompletionHandlerAdapter;
-(/*^block*/id)nilValueCompletionHandlerAdapter;
@end

