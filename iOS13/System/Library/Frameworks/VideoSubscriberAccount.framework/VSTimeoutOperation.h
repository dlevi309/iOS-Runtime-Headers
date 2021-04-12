/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperation, NSOperationQueue;

@interface VSTimeoutOperation : VSAsyncOperation {

	NSOperation* _operation;
	double _timeout;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;              //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,readonly) NSOperation * operation;                    //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
-(id)init;
-(void)cancel;
-(NSOperation *)operation;
-(double)timeout;
-(NSOperationQueue *)privateQueue;
-(void)executionDidBegin;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(id)initWithOperation:(id)arg1 timeout:(double)arg2 ;
@end

