/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/


@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject {

	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * daemonXPCEndpoint;              //@synthesize daemonXPCEndpoint=_daemonXPCEndpoint - In the implementation block
+(id)sharedInstance;
+(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)invalidateConnection;
-(id)synchronousDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id)remoteObjectInterface;
-(void)setDaemonXPCEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(id)connection;
-(NSXPCListenerEndpoint *)daemonXPCEndpoint;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

