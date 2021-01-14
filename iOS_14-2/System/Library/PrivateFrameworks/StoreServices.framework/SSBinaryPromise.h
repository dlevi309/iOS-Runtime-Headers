/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSPromise;

@interface SSBinaryPromise : NSObject {

	SSPromise* _backingPromise;

}

@property (nonatomic,retain) SSPromise * backingPromise;              //@synthesize backingPromise=_backingPromise - In the implementation block
+(id)promiseWithSuccess;
+(id)promiseWithPromise:(id)arg1 ;
+(id)_globalPromiseStorage;
+(id)_globalPromiseStorageAccessQueue;
+(id)promiseWithError:(id)arg1 ;
-(BOOL)resultWithError:(id*)arg1 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithSuccess;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(BOOL)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)init;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(void)waitUntilFinished;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)promiseAdapter;
-(void)_removeFromGlobalPromiseStorage;
-(BOOL)finishWithError:(id)arg1 ;
-(void)setBackingPromise:(SSPromise *)arg1 ;
-(SSPromise *)backingPromise;
@end

