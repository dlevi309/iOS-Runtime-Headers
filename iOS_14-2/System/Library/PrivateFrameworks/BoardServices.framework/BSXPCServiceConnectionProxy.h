/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/


@protocol OS_xpc_object, OS_dispatch_queue, BSServiceDispatchingQueue;
@class BSObjCProtocol, BSXPCServiceConnection, NSObject;

@interface BSXPCServiceConnectionProxy : NSObject {

	BSObjCProtocol* _remoteProtocol;
	BSObjCProtocol* _localProtocol;
	BSXPCServiceConnection* _connection;
	NSObject*<OS_xpc_object> _XPCConnection;
	NSObject*<OS_dispatch_queue> _XPCConnectionTargetQueue;
	id<BSServiceDispatchingQueue> _replyQueue;

}
-(void)dealloc;
@end

