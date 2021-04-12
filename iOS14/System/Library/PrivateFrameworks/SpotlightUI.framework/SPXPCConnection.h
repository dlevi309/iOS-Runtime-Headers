/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSString;

@interface SPXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSObject*<OS_dispatch_queue> _eventQueue;
	BOOL _ownsQueue;
	NSString* _bundleID;
	/*^block*/id _messageHandler;
	/*^block*/id _disconnectHandler;
	id _context;

}

@property (__weak,readonly) NSString * serviceName; 
@property (__weak,readonly) NSString * bundleID; 
@property (nonatomic,copy) id messageHandler;                    //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,copy) id disconnectHandler;                 //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (nonatomic,retain) id context;                         //@synthesize context=_context - In the implementation block
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(id)eventQueue;
-(void)shutdown;
-(void)sendMessage:(id)arg1 ;
-(id)messageHandler;
-(id)context;
-(void)_handleXPCError:(id)arg1 ;
-(id)disconnectHandler;
-(void)barrier:(/*^block*/id)arg1 ;
-(NSString *)bundleID;
-(NSString *)serviceName;
-(id)eventQueueWithQOS:(unsigned)arg1 ;
-(void)setDisconnectHandler:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 qos:(unsigned)arg2 ;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_setEventHandlerOnConnection:(id)arg1 ;
-(void)_handleXPCMessage:(id)arg1 ;
-(void)_sendMessage:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setMessageHandler:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(id)arg1 ;
@end

