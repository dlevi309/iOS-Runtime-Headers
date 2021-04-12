/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
@class CUXPCAgent, NSObject, NSXPCConnection;

@interface CUXPCAgentConnection : NSObject {

	CUXPCAgent* _agent;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _xpcCnx;

}
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(void)connectionInvalidated;
@end

