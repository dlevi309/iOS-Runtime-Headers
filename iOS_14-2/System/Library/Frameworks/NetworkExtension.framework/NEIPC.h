/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)connected;
-(id)messageHandler;
-(void)stop;
-(NSObject*<OS_xpc_object>)listener;
-(NSObject*<OS_xpc_object>)connection;
-(id)startInListenModeWithQueue:(id)arg1 messageHandler:(/*^block*/id)arg2 ;
-(void)setListener:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)logMessageType:(unsigned)arg1 data:(id)arg2 actionString:(id)arg3 ;
-(void)handleMessage:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setupMessageHandlingWithQueue:(id)arg1 ;
-(void)startWithEndpoint:(id)arg1 queue:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(BOOL)sendMessageWithType:(unsigned)arg1 data:(id)arg2 replyQueue:(id)arg3 replyHandler:(/*^block*/id)arg4 ;
-(void)setMessageHandler:(id)arg1 ;
@end

