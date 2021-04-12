/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_xpc_object;
@class NSObject;

@interface NEIPC : NSObject {

	/*^block*/id _messageHandler;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _listener;

}

@property (copy) id messageHandler;                                  //@synthesize messageHandler=_messageHandler - In the implementation block
@property (retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_xpc_object> listener;                //@synthesize listener=_listener - In the implementation block
@property (readonly) BOOL connected; 
-(NSObject*<OS_xpc_object>)listener;
-(void)stop;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setListener:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setMessageHandler:(id)arg1 ;
-(id)messageHandler;
-(BOOL)connected;
-(id)startInListenModeWithQueue:(id)arg1 messageHandler:(/*^block*/id)arg2 ;
-(void)logMessageType:(unsigned)arg1 data:(id)arg2 actionString:(id)arg3 ;
-(void)handleMessage:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setupMessageHandlingWithQueue:(id)arg1 ;
-(void)startWithEndpoint:(id)arg1 queue:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(BOOL)sendMessageWithType:(unsigned)arg1 data:(id)arg2 replyQueue:(id)arg3 replyHandler:(/*^block*/id)arg4 ;
@end

