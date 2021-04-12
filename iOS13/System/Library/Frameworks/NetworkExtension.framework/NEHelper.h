/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface NEHelper : NSObject {

	NSObject*<OS_xpc_object> _connection;
	/*^block*/id _incomingMessageHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _initMessage;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (readonly) NSObject*<OS_xpc_object> initMessage;              //@synthesize initMessage=_initMessage - In the implementation block
@property (copy) id incomingMessageHandler;                             //@synthesize incomingMessageHandler=_incomingMessageHandler - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)connection;
-(id)initWithDelegateClassID:(int)arg1 queue:(id)arg2 initialMessage:(id)arg3 ;
-(void)setIncomingMessageHandler:(id)arg1 ;
-(id)incomingMessageHandler;
-(void)sendRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)initWithDelegateClassID:(int)arg1 queue:(id)arg2 ;
-(NSObject*<OS_xpc_object>)initMessage;
@end

