/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setTimeoutHandler:(id)arg1 ;
-(id)completionHandler;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)timeoutHandler;
-(void)setTimeoutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOrResetCleanupTimer;
-(void)invalidateCleanupTimer;
-(NSObject*<OS_dispatch_queue>)timeoutQueue;
@end

