/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@interface SSObserver : NSObject {

	/*^block*/id _completionBlock;
	/*^block*/id _failureBlock;
	/*^block*/id _resultBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id failureBlock;                 //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy) id resultBlock;                  //@synthesize resultBlock=_resultBlock - In the implementation block
+(id)observerWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)_sendCompletionUsingQueue:(id)arg1 ;
-(void)_sendFailure:(id)arg1 usingQueue:(id)arg2 ;
-(void)_sendResult:(id)arg1 usingQueue:(id)arg2 ;
-(id)failureBlock;
-(id)resultBlock;
-(void)setFailureBlock:(id)arg1 ;
-(void)setResultBlock:(id)arg1 ;
@end

