/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface DMXPCConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _replyQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _messageHandler;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (copy) id interruptionHandler;                                         //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (copy) id invalidationHandler;                                         //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (copy) id messageHandler;                                              //@synthesize messageHandler=_messageHandler - In the implementation block
-(void)handleMessage:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)sendMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(id)messageHandler;
-(id)initWithServiceName:(id)arg1 ;
-(void)_handleMessage:(id)arg1 ;
-(id)sendMessageSync:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)resume;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)interruptionHandler;
-(void)setMessageHandler:(id)arg1 ;
@end

