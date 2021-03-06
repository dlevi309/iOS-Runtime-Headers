/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@protocol OS_xpc_object, OS_dispatch_queue, XPCClientConnectionDelegate;
@class NSString, NSObject;

@interface XPCClientConnection : NSObject {

	NSString* _serviceName;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	id<XPCClientConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) id<XPCClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<XPCClientConnectionDelegate>)delegate;
-(id)debugDescription;
-(void)_handleConnectionEvent:(id)arg1 ;
-(void)_handleIncomingMessage:(id)arg1 ;
-(void)_reallySendMessage:(id)arg1 handler:(/*^block*/id)arg2 sequence:(unsigned long long)arg3 retryCount:(unsigned long long)arg4 ;
-(void)sendMessage:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithServiceName:(id)arg1 delegate:(id)arg2 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
@end

