/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSXPCHandshake.h>

@protocol PDSRemote, PDSDaemonListenerVendor, OS_dispatch_queue, PDSXPCDaemonConnection;
@class NSObject;

@interface PDSXPCClient : NSObject <PDSXPCHandshake> {

	id<PDSRemote> _daemonListener;
	id<PDSDaemonListenerVendor> _daemonListenerVendor;
	NSObject*<OS_dispatch_queue> _queue;
	id<PDSXPCDaemonConnection> _connection;

}

@property (nonatomic,retain) id<PDSRemote> daemonListener;                                  //@synthesize daemonListener=_daemonListener - In the implementation block
@property (nonatomic,retain) id<PDSDaemonListenerVendor> daemonListenerVendor;              //@synthesize daemonListenerVendor=_daemonListenerVendor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<PDSXPCDaemonConnection> connection;                         //@synthesize connection=_connection - In the implementation block
-(id<PDSRemote>)daemonListener;
-(void)setDaemonListenerVendor:(id<PDSDaemonListenerVendor>)arg1 ;
-(id<PDSXPCDaemonConnection>)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConnection:(id<PDSXPCDaemonConnection>)arg1 ;
-(void)resume;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<PDSDaemonListenerVendor>)daemonListenerVendor;
-(void)connectWithClientID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)connectInternalWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 interfaceVendor:(id)arg2 daemonListenerVendor:(id)arg3 queue:(id)arg4 ;
-(BOOL)_hasToolEntitlement;
-(id)_connectionEntitledClientIDs;
-(void)setDaemonListener:(id<PDSRemote>)arg1 ;
@end

