/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@protocol OS_dispatch_queue;
@class AXIPCServer, AXIPCClient, NSString, NSMutableArray, AXDispatchTimer, NSObject;

@interface AXServer : NSObject {

	BOOL _shouldRegisterClientCallbackSourceOnMainRunloop;
	AXIPCServer* _server;
	AXIPCClient* _client;
	NSString* _serverIdentifier;
	NSMutableArray* _assertionWorkBacklog;
	AXDispatchTimer* _assertionRetryTimer;
	NSObject*<OS_dispatch_queue> _assertionWorkQueue;

}

@property (nonatomic,copy) NSString * serverIdentifier;                                         //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * assertionWorkBacklog;                             //@synthesize assertionWorkBacklog=_assertionWorkBacklog - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * assertionRetryTimer;                             //@synthesize assertionRetryTimer=_assertionRetryTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assertionWorkQueue;                   //@synthesize assertionWorkQueue=_assertionWorkQueue - In the implementation block
@property (nonatomic,retain) AXIPCClient * client;                                              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) AXIPCServer * server;                                              //@synthesize server=_server - In the implementation block
@property (assign,nonatomic) BOOL shouldRegisterClientCallbackSourceOnMainRunloop;              //@synthesize shouldRegisterClientCallbackSourceOnMainRunloop=_shouldRegisterClientCallbackSourceOnMainRunloop - In the implementation block
-(NSObject*<OS_dispatch_queue>)assertionWorkQueue;
-(void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2 synchronously:(BOOL)arg3 ;
-(void)_willClearServer;
-(BOOL)sendSimpleMessage:(id)arg1 enqueueError:(id*)arg2 ;
-(void)_wasDisconnectedFromClient;
-(AXDispatchTimer *)assertionRetryTimer;
-(void)_didConnectToClient;
-(void)setShouldRegisterClientCallbackSourceOnMainRunloop:(BOOL)arg1 ;
-(id)_sendMessage:(id)arg1 error:(id*)arg2 ;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(BOOL)_connectIfNecessary;
-(void)setAssertionWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)serverIdentifier;
-(void)setAssertionRetryTimer:(AXDispatchTimer *)arg1 ;
-(void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 objectResultHandler:(/*^block*/id)arg3 ;
-(BOOL)_connectServerIfNecessary;
-(id)_serviceName;
-(void)_processAssertionBacklog;
-(AXIPCClient *)client;
-(BOOL)sendSimpleMessageWithResult:(id)arg1 ;
-(void)setClient:(AXIPCClient *)arg1 ;
-(NSMutableArray *)assertionWorkBacklog;
-(void)sendSimpleMessage:(id)arg1 ;
-(id)sendSimpleMessageWithObjectResult:(id)arg1 ;
-(id)sendMessage:(id)arg1 ;
-(void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)shouldRegisterClientCallbackSourceOnMainRunloop;
-(id)init;
-(void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 boolResultHandler:(/*^block*/id)arg3 ;
-(void)setAssertionWorkBacklog:(NSMutableArray *)arg1 ;
-(void)setServer:(AXIPCServer *)arg1 ;
-(void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2 synchronously:(BOOL)arg3 ;
-(void)_initializeAssertionBookkeeping;
-(void)_didConnectToServer;
-(AXIPCServer *)server;
-(void)dealloc;
@end

