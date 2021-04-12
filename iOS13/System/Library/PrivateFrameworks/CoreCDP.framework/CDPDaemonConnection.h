/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/


@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface CDPDaemonConnection : NSObject {

	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * daemonXPCEndpoint;              //@synthesize daemonXPCEndpoint=_daemonXPCEndpoint - In the implementation block
-(id)init;
-(id)connection;
-(id)daemon;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setDaemonXPCEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)daemonXPCEndpoint;
@end

