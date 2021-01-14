/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
@class CUXPCAgent, NSObject, NSXPCConnection;

@interface CUXPCAgentConnection : NSObject {

	CUXPCAgent* _agent;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _xpcCnx;

}
-(void)connectionInvalidated;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

