/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(WCMessage *)arg1 ;
-(long long)compare:(id)arg1 ;
-(WCMessage *)message;
-(void)setRetryCount:(long long)arg1 ;
-(long long)retryCount;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)description;
-(NSDate *)creationDate;
-(id)initWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

