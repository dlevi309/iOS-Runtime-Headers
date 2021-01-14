/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFRemoteExecutionSessionDelegate, OS_dispatch_source;
@class WFRemoteExecutionRequest, IDSService, NSString, NSObject;

@interface WFRemoteExecutionSession : NSObject {

	unsigned long long _state;
	id<WFRemoteExecutionSessionDelegate> _delegate;
	WFRemoteExecutionRequest* _request;
	IDSService* _service;
	NSString* _idsIdentifier;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;                        //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,retain) WFRemoteExecutionRequest * request;                                //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                            //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<WFRemoteExecutionSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IDSService * service;                                            //@synthesize service=_service - In the implementation block
-(void)finish;
-(NSString *)idsIdentifier;
-(void)setRequest:(WFRemoteExecutionRequest *)arg1 ;
-(id<WFRemoteExecutionSessionDelegate>)delegate;
-(WFRemoteExecutionRequest *)request;
-(id)initWithService:(id)arg1 ;
-(void)setDelegate:(id<WFRemoteExecutionSessionDelegate>)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)finishWithError:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)cancelTimeout;
-(IDSService *)service;
-(void)sendToDestinations:(id)arg1 options:(id)arg2 ;
-(void)handleIncomingProtobuf:(id)arg1 ;
-(void)handleTimeout;
-(double)timeoutLimitInSeconds;
-(void)restartTimeout;
-(id)sessionTimedOutError;
-(id)invalidAceCommandError;
@end

