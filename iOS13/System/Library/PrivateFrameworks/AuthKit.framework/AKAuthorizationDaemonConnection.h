/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol AKAuthorizationClientProtocol;
#import <AuthKit/AuthKit-Structs.h>
@class NSXPCConnection, NSXPCListenerEndpoint;

@interface AKAuthorizationDaemonConnection : NSObject {

	os_unfair_lock_s _unfairLock;
	NSXPCConnection* _connection;
	id<AKAuthorizationClientProtocol> _contextManager;
	NSXPCListenerEndpoint* _listenerEndpoint;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * listenerEndpoint;              //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
-(id)init;
-(void)dealloc;
-(id)_connection;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(id)initWithListenerEndpoint:(id)arg1 exportedInterface:(id)arg2 ;
-(void)_connectionInterruptionHandler;
-(void)_connectionInvalidationHandler;
@end

