/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@interface AMSObserver : NSObject {

	/*^block*/id _completionBlock;
	/*^block*/id _failureBlock;
	/*^block*/id _resultBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id failureBlock;                 //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy) id resultBlock;                  //@synthesize resultBlock=_resultBlock - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)resultBlock;
-(void)_sendResult:(id)arg1 usingQueue:(id)arg2 ;
-(id)initWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_sendFailure:(id)arg1 usingQueue:(id)arg2 ;
-(void)_sendCompletionUsingQueue:(id)arg1 ;
-(id)initWithResultBlock:(/*^block*/id)arg1 ;
-(void)setFailureBlock:(id)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(id)failureBlock;
@end

