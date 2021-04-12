/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/


@class WCMessage, NSDate;

@interface WCQueuedMessage : NSObject {

	WCMessage* _message;
	/*^block*/id _completionHandler;
	NSDate* _creationDate;
	long long _retryCount;

}

@property (retain) WCMessage * message;                  //@synthesize message=_message - In the implementation block
@property (copy) id completionHandler;                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign) long long retryCount;                 //@synthesize retryCount=_retryCount - In the implementation block
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSDate *)creationDate;
-(WCMessage *)message;
-(void)setMessage:(WCMessage *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(id)initWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

