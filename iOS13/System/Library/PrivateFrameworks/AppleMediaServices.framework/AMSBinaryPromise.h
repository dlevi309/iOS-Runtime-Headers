/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSPromise;

@interface AMSBinaryPromise : NSObject {

	AMSPromise* _backingPromise;

}

@property (nonatomic,retain) AMSPromise * backingPromise;              //@synthesize backingPromise=_backingPromise - In the implementation block
+(id)promiseWithError:(id)arg1 ;
+(id)promiseWithAll:(id)arg1 ;
+(id)promiseWithAny:(id)arg1 ;
+(id)_globalPromiseStorageAccessQueue;
+(id)_globalPromiseStorage;
+(id)promiseWithFlattenedPromises:(id)arg1 ;
+(id)promiseWithPromise:(id)arg1 ;
+(id)promiseWithSuccess;
-(id)init;
-(void)waitUntilFinished;
-(BOOL)cancel;
-(BOOL)resultWithError:(id*)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(BOOL)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)thenWithBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithPromise:(id)arg1 ;
-(id)promiseAdapter;
-(BOOL)finishWithSuccess;
-(AMSPromise *)backingPromise;
-(void)_removeFromGlobalPromiseStorage;
-(BOOL)finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(id)catchWithBlock:(/*^block*/id)arg1 ;
-(id)continueWithBlock:(/*^block*/id)arg1 ;
-(void)setBackingPromise:(AMSPromise *)arg1 ;
@end

