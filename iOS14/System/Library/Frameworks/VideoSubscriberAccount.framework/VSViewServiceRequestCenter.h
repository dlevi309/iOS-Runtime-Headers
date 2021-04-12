/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletionQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)completionQueue;
-(NSOperationQueue *)requestQueue;
-(id)init;
-(void)setRequestQueue:(NSOperationQueue *)arg1 ;
-(id)enqueueCompletionHandlerBlock:(/*^block*/id)arg1 ;
-(id)enqueueRequest:(id)arg1 withAccountManagerDelegate:(id)arg2 operationDelegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

