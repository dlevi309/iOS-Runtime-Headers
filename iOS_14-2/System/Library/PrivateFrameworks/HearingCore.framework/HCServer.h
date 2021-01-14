/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore
*/


@protocol AXHeardServerDelegate, AXHeardServerMessageDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface HCServer : NSObject {

	BOOL _deadConnection;
	id<AXHeardServerDelegate> _delegate;
	id<AXHeardServerMessageDelegate> _messageDelegate;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_xpc_object> _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                         //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (assign,nonatomic) BOOL deadConnection;                                                  //@synthesize deadConnection=_deadConnection - In the implementation block
@property (assign,nonatomic,__weak) id<AXHeardServerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AXHeardServerMessageDelegate> messageDelegate;              //@synthesize messageDelegate=_messageDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isConnected; 
-(BOOL)isConnected;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id<AXHeardServerDelegate>)delegate;
-(void)resetConnection;
-(BOOL)shouldRestartOnInterruption;
-(void)terminateConnectionAndNotify:(BOOL)arg1 ;
-(void)setDelegate:(id<AXHeardServerDelegate>)arg1 ;
-(void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)handleMessageError:(id)arg1 destructive:(BOOL)arg2 ;
-(void)handleReply:(id)arg1 ;
-(void)dealloc;
-(void)sendMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2 ;
-(void)setDeadConnection:(BOOL)arg1 ;
-(BOOL)deadConnection;
-(id)setupServerIfNecessary;
-(id<AXHeardServerMessageDelegate>)messageDelegate;
-(void)startServerWithDelegate:(id)arg1 ;
-(void)sendSynchronousMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2 ;
-(void)setMessageDelegate:(id<AXHeardServerMessageDelegate>)arg1 ;
@end

