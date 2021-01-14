/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreConnect.framework/SoftwareUpdateCoreConnect
*/

#import <libobjc.A.dylib/SUCoreConnectClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, SUCoreConnectClientPolicy, SUCoreLog, NSObject;

@interface SUCoreConnectClient : NSObject <SUCoreConnectClientProtocol> {

	BOOL _connected;
	NSXPCConnection* _serverConnection;
	SUCoreConnectClientPolicy* _policy;
	SUCoreLog* _logger;
	NSObject*<OS_dispatch_queue> _clientConnectionStateAccessQueue;
	NSObject*<OS_dispatch_queue> _clientDelegateCallbackQueue;
	NSObject*<OS_dispatch_queue> _clientCompletionQueue;
	NSObject*<OS_dispatch_queue> _clientMessageQueue;
	NSObject*<OS_dispatch_queue> _clientReplyCompletionQueue;

}

@property (nonatomic,retain) NSXPCConnection * serverConnection;                                                  //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) SUCoreConnectClientPolicy * policy;                                                  //@synthesize policy=_policy - In the implementation block
@property (assign,nonatomic) BOOL connected;                                                                      //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) SUCoreLog * logger;                                                                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> clientConnectionStateAccessQueue;              //@synthesize clientConnectionStateAccessQueue=_clientConnectionStateAccessQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> clientDelegateCallbackQueue;                   //@synthesize clientDelegateCallbackQueue=_clientDelegateCallbackQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> clientCompletionQueue;                         //@synthesize clientCompletionQueue=_clientCompletionQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> clientMessageQueue;                            //@synthesize clientMessageQueue=_clientMessageQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> clientReplyCompletionQueue;                    //@synthesize clientReplyCompletionQueue=_clientReplyCompletionQueue - In the implementation block
-(BOOL)connected;
-(void)setConnected:(BOOL)arg1 ;
-(NSXPCConnection *)serverConnection;
-(void)setPolicy:(SUCoreConnectClientPolicy *)arg1 ;
-(SUCoreConnectClientPolicy *)policy;
-(void)setLogger:(SUCoreLog *)arg1 ;
-(SUCoreLog *)logger;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)_invalidateConnection;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)clientCompletionQueue;
-(NSObject*<OS_dispatch_queue>)clientDelegateCallbackQueue;
-(void)connectProtocolFromServerRequestClientID:(/*^block*/id)arg1 ;
-(void)connectProtocolFromServerSendClientMessage:(id)arg1 ;
-(void)connectProtocolFromServerSendClientMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientConnectionStateAccessQueue;
-(void)_connectionDropped;
-(void)connectClientSendServerMessage:(id)arg1 proxyObject:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_handleConnectionError:(id)arg1 method:(const char*)arg2 ;
-(void)connectToServerWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientReplyCompletionQueue;
-(NSObject*<OS_dispatch_queue>)clientMessageQueue;
-(id)initWithClientPolicy:(id)arg1 ;
-(void)connectClientSendServerMessage:(id)arg1 ;
-(void)forceCloseConnection;
@end

