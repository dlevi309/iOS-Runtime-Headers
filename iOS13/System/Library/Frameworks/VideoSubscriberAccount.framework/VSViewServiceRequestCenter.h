/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSOperationQueue;

@interface VSViewServiceRequestCenter : NSObject {

	NSOperationQueue* _requestQueue;
	NSOperationQueue* _completionQueue;

}

@property (nonatomic,retain) NSOperationQueue * requestQueue;                 //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
+(id)sharedViewServiceRequestCenter;
-(id)init;
-(NSOperationQueue *)requestQueue;
-(void)setRequestQueue:(NSOperationQueue *)arg1 ;
-(void)setCompletionQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)completionQueue;
-(id)enqueueCompletionHandlerBlock:(/*^block*/id)arg1 ;
-(id)enqueueRequest:(id)arg1 withAccountManagerDelegate:(id)arg2 operationDelegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

