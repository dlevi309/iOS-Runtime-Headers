/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, NSObject;

@interface NPKProvisioningServiceOutstandingRequest : NSObject {

	NSString* _messageIdentifier;
	id _completionHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _timeoutHandler;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_queue> _timeoutQueue;

}

@property (nonatomic,copy) NSString * messageIdentifier;                              //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                                         //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> timeoutQueue;               //@synthesize timeoutQueue=_timeoutQueue - In the implementation block
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(void)setMessageIdentifier:(NSString *)arg1 ;
-(NSString *)messageIdentifier;
-(void)invalidateCleanupTimer;
-(void)setOrResetCleanupTimer;
-(NSObject*<OS_dispatch_queue>)timeoutQueue;
-(void)setTimeoutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

