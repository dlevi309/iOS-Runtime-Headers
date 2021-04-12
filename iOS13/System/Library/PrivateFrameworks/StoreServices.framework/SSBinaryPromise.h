/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSPromise;

@interface SSBinaryPromise : NSObject {

	SSPromise* _backingPromise;

}

@property (nonatomic,retain) SSPromise * backingPromise;              //@synthesize backingPromise=_backingPromise - In the implementation block
+(id)promiseWithError:(id)arg1 ;
+(id)_globalPromiseStorageAccessQueue;
+(id)_globalPromiseStorage;
+(id)promiseWithPromise:(id)arg1 ;
+(id)promiseWithSuccess;
-(id)init;
-(void)waitUntilFinished;
-(BOOL)resultWithError:(id*)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(BOOL)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)promiseAdapter;
-(BOOL)finishWithSuccess;
-(SSPromise *)backingPromise;
-(void)_removeFromGlobalPromiseStorage;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(void)setBackingPromise:(SSPromise *)arg1 ;
@end

