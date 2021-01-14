/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 exportedInterface:(id)arg2 ;
-(void)_connectionInterruptionHandler;
-(void)_connectionInvalidationHandler;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(id)_connection;
-(void)dealloc;
@end

