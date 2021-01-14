/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)executionDidBegin;
-(id)init;
-(NSOperation *)operation;
-(NSOperationQueue *)privateQueue;
-(double)timeout;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)cancel;
-(id)initWithOperation:(id)arg1 timeout:(double)arg2 ;
@end

