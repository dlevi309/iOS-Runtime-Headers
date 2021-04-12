/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isSuspended;
-(void)queue_connectionWasInvalidated;
-(id)init;
-(void)_sendMessage:(/*^block*/id)arg1 ;
-(void)_setEndpoint:(id)arg1 ;
-(void)suspendConnection;
-(void)resumeConnection;
-(id)initWithEndpoint:(id)arg1 ;
-(void)queue_connectionWasInterrupted;
-(id)initWithServiceName:(id)arg1 ;
-(void)_sendMessageReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)queue_clientWasInvalidated;
-(void)queue_connectionWasSuspended;
-(id)_connectionInstanceUUID;
-(void)queue_handleError:(id)arg1 ;
-(void)queue_connectionWasCreated;
-(void)reconnectIfNecessary;
-(void)queue_connectionWasDestroyed;
-(id)_errorFromMessageIfAny:(id)arg1 ;
-(void)_sendReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)_sendReplyForMessage:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)queue_handleMessage:(id)arg1 ;
-(id)queue_connection;
-(void)invalidate;
-(id)_connection;
-(void)_sendMessage:(/*^block*/id)arg1 withReplyHandler:(/*^block*/id)arg2 waitForReply:(BOOL)arg3 waitDuration:(unsigned long long)arg4 ;
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(id)_getStringFromMessage:(id)arg1 key:(char*)arg2 ;
-(void)dealloc;
-(void)queue_connectionWasResumed;
@end

