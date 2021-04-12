/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/XCTTargetBootstrap.framework/XCTTargetBootstrap
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <XCTTargetBootstrap/XCTTarget.h>

@protocol OS_dispatch_queue, XCTConnectionAccepting;
@class NSObject, NSXPCConnection, NSXPCListener, NSString;

@interface XCTTargetSession : NSObject <NSXPCListenerDelegate, XCTTarget> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _daemonConnection;
	NSXPCListener* _clientListener;
	id<XCTConnectionAccepting> _connectionHandler;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (retain) NSXPCConnection * daemonConnection;                        //@synthesize daemonConnection=_daemonConnection - In the implementation block
@property (retain) NSXPCListener * clientListener;                            //@synthesize clientListener=_clientListener - In the implementation block
@property (retain) id<XCTConnectionAccepting> connectionHandler;              //@synthesize connectionHandler=_connectionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)connect;
-(void)setConnectionHandler:(id<XCTConnectionAccepting>)arg1 ;
-(id<XCTConnectionAccepting>)connectionHandler;
-(id)initWithDaemonConnection:(id)arg1 ;
-(void)_on_queue_connect;
-(NSXPCConnection *)daemonConnection;
-(void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)arg1 protocolVersion:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)setClientListener:(NSXPCListener *)arg1 ;
-(void)_on_queue_startListeningForClientConnections;
-(BOOL)_on_queue_loadAutomationSupportLibraryFromPath:(id)arg1 error:(id*)arg2 ;
-(id)_on_queue_getListenerEndpoint;
-(void)setDaemonConnection:(NSXPCConnection *)arg1 ;
-(NSXPCListener *)clientListener;
@end

