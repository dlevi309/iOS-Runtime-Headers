/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSString;

@interface SPXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSObject*<OS_dispatch_queue> _eventQueue;
	BOOL _ownsQueue;
	/*^block*/id _messageHandler;
	/*^block*/id _disconnectHandler;
	id _context;
	NSString* _bundleID;

}

@property (__weak,readonly) NSString * serviceName; 
@property (__weak,readonly) NSString * bundleID; 
@property (nonatomic,copy) id messageHandler;                    //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,copy) id disconnectHandler;                 //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (nonatomic,retain) id context;                         //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(id)context;
-(NSString *)serviceName;
-(NSString *)bundleID;
-(void)sendMessage:(id)arg1 ;
-(void)setContext:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(id)eventQueue;
-(void)setMessageHandler:(id)arg1 ;
-(id)messageHandler;
-(void)shutdown;
-(void)setDisconnectHandler:(id)arg1 ;
-(id)disconnectHandler;
-(void)barrier:(/*^block*/id)arg1 ;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_handleXPCError:(id)arg1 ;
-(void)_setEventHandlerOnConnection:(id)arg1 ;
-(void)_sendMessage:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_handleXPCMessage:(id)arg1 ;
-(id)eventQueueWithQOS:(unsigned)arg1 ;
-(id)initWithXPCConnection:(id)arg1 qos:(unsigned)arg2 ;
@end

