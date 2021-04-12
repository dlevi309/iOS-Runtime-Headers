/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSPromise;

@interface AMSBinaryPromise : NSObject {

	AMSPromise* _backingPromise;

}

@property (nonatomic,retain) AMSPromise * backingPromise;              //@synthesize backingPromise=_backingPromise - In the implementation block
+(id)promiseWithSuccess;
+(id)promiseWithPromise:(id)arg1 ;
+(id)_globalPromiseStorage;
+(id)promiseWithAll:(id)arg1 ;
+(id)_globalPromiseStorageAccessQueue;
+(id)promiseWithAny:(id)arg1 ;
+(id)promiseWithError:(id)arg1 ;
+(id)promiseWithFlattenedPromises:(id)arg1 ;
-(BOOL)resultWithError:(id*)arg1 ;
-(id)continueWithBlock:(/*^block*/id)arg1 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithSuccess;
-(BOOL)finishWithPromise:(id)arg1 ;
-(id)catchWithBlock:(/*^block*/id)arg1 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(BOOL)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)init;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(void)waitUntilFinished;
-(id)thenWithBlock:(/*^block*/id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)promiseAdapter;
-(void)_removeFromGlobalPromiseStorage;
-(BOOL)finishWithError:(id)arg1 ;
-(void)setBackingPromise:(AMSPromise *)arg1 ;
-(BOOL)finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)cancel;
-(AMSPromise *)backingPromise;
@end

