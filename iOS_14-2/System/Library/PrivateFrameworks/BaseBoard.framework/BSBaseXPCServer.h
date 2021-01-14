/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableSet, NSString;

@interface BSBaseXPCServer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listenerConnection;
	NSMutableSet* _clients;
	BOOL _connectionResumed;
	NSString* _serviceName;
	int _notifyToken;
	BOOL _usesAnonymousConnection;

}

@property (assign,getter=usesAnonymousConnection,nonatomic) BOOL usesAnonymousConnection;              //@synthesize usesAnonymousConnection=_usesAnonymousConnection - In the implementation block
+(BOOL)_registersWithNotifyd;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(void)_invalidate;
-(void)run;
-(void)queue_clientRemoved:(id)arg1 ;
-(void)registerServerSuspended;
-(BOOL)usesAnonymousConnection;
-(BOOL)queue_shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)_sendMessageReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(Class)queue_classForNewClientConnection:(id)arg1 ;
-(void)_sendReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)_sendReplyForMessage:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)setUsesAnonymousConnection:(BOOL)arg1 ;
-(id)queue_newClientForConnection:(id)arg1 ;
-(id)_queue_clientForConnection:(id)arg1 ;
-(id)queue;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(id)_clients;
-(id)_connection;
-(void)queue_clientAdded:(id)arg1 ;
-(id)_copyEndpoint;
-(void)resumeServer;
-(id)_getStringFromMessage:(id)arg1 key:(char*)arg2 ;
-(void)dealloc;
@end

