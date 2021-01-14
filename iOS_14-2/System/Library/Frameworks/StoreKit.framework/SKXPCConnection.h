/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface SKXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _disconnectBlock;
	/*^block*/id _messageBlock;

}

@property (copy) id disconnectBlock; 
@property (copy) id messageBlock; 
-(void)sendMessage:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)init;
-(id)disconnectBlock;
-(void)_reloadEventHandler;
-(id)initWithServiceName:(id)arg1 ;
-(void)sendSynchronousMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setMessageBlock:(id)arg1 ;
-(void)setDisconnectBlock:(id)arg1 ;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(id)messageBlock;
-(id)createXPCEndpoint;
-(id)_initSKXPCConnection;
@end

