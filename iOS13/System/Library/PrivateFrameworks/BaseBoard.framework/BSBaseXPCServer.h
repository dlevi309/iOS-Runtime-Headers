/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableSet, NSString;

@interface BSBaseXPCServer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listenerConnection;
	NSMutableSet* _clients;
	BOOL _connectionResumed;
	BOOL _usesAnonymousConnection;
	NSString* _serviceName;
	int _notifyToken;

}

@property (assign,getter=usesAnonymousConnection,nonatomic) BOOL usesAnonymousConnection;              //@synthesize usesAnonymousConnection=_usesAnonymousConnection - In the implementation block
-(void)dealloc;
-(void)run;
-(void)_invalidate;
-(id)queue;
-(id)_connection;
-(id)_clients;
-(id)initWithServiceName:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(void)registerServerSuspended;
-(void)resumeServer;
-(void)_addClientConnection:(id)arg1 ;
-(id)_notifyTokenName;
-(BOOL)queue_shouldAcceptNewConnection:(id)arg1 ;
-(id)queue_newClientForConnection:(id)arg1 ;
-(void)_queue_removeClientConnection:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(void)queue_clientAdded:(id)arg1 ;
-(id)_queue_clientForConnection:(id)arg1 ;
-(void)queue_clientRemoved:(id)arg1 ;
-(Class)queue_classForNewClientConnection:(id)arg1 ;
-(void)_sendReplyForMessage:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)_sendMessageReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)_sendReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(id)_getStringFromMessage:(id)arg1 key:(char*)arg2 ;
-(id)_copyEndpoint;
-(BOOL)usesAnonymousConnection;
-(void)setUsesAnonymousConnection:(BOOL)arg1 ;
@end

