/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, BSAtomicSignal, NSString;

@interface BSBaseXPCClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BSAtomicSignal* _invalidationSignal;
	NSObject*<OS_xpc_object> _serverEndpoint;
	NSString* _serviceName;
	int _clientInvalidated;
	int _notifyToken;
	NSObject*<OS_xpc_object> _connection;
	BOOL _suspended;

}

@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_connection;
-(BOOL)isSuspended;
-(id)initWithServiceName:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)_setEndpoint:(id)arg1 ;
-(id)_notifyTokenName;
-(void)_sendReplyForMessage:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)_sendMessageReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)_sendReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(id)_getStringFromMessage:(id)arg1 key:(char*)arg2 ;
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_invalidateAndFlush:(BOOL)arg1 ;
-(BOOL)queue_isSuspended;
-(void)queue_registerWithServerIfNecessary;
-(void)queue_suspendConnection;
-(void)queue_resumeConnection;
-(void)queue_clientWasInvalidated;
-(void)_sendMessage:(/*^block*/id)arg1 withReplyHandler:(/*^block*/id)arg2 waitForReply:(BOOL)arg3 waitDuration:(unsigned long long)arg4 ;
-(void)queue_connectionWasResumed;
-(void)queue_connectionWasSuspended;
-(id)_connectionInstanceUUID;
-(void)queue_handleError:(id)arg1 ;
-(void)queue_connectionWasInterrupted;
-(void)queue_connectionWasInvalidated;
-(void)queue_handleMessage:(id)arg1 ;
-(void)queue_reconnectToResumedServerIfNecessary;
-(void)queue_connectionWasCreated;
-(void)reconnectIfNecessary;
-(void)queue_connectionWasDestroyed;
-(void)suspendConnection;
-(void)resumeConnection;
-(id)_errorFromMessageIfAny:(id)arg1 ;
-(void)_sendMessage:(/*^block*/id)arg1 ;
-(id)queue_connection;
@end

