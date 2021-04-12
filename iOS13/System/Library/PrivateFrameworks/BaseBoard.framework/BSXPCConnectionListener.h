/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_xpc_object, BSXPCConnectionListenerHandler, OS_dispatch_queue;
@class NSObject, NSString;

@interface BSXPCConnectionListener : NSObject {

	NSObject*<OS_xpc_object> _connection;
	id<BSXPCConnectionListenerHandler> _handler;
	NSString* _service;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) id<BSXPCConnectionListenerHandler> handler;              //@synthesize handler=_handler - In the implementation block
@property (copy,readonly) NSString * service;                                 //@synthesize service=_service - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<BSXPCConnectionListenerHandler>)handler;
-(NSString *)service;
-(id)initWithConnection:(id)arg1 forService:(id)arg2 withHandler:(id)arg3 onQueue:(id)arg4 ;
@end

