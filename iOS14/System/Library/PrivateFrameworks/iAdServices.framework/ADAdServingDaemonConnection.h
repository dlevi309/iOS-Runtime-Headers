/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
*/


@protocol ADAdServingDaemonConnectionDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSXPCConnection;

@interface ADAdServingDaemonConnection : NSObject {

	id<ADAdServingDaemonConnectionDelegate> _delegate;
	NSMutableArray* _performWhenConnectedBlocks;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSXPCConnection* _adServingDaemonConnection;

}

@property (nonatomic,retain) NSMutableArray * performWhenConnectedBlocks;                          //@synthesize performWhenConnectedBlocks=_performWhenConnectedBlocks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                         //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * adServingDaemonConnection;                          //@synthesize adServingDaemonConnection=_adServingDaemonConnection - In the implementation block
@property (assign,nonatomic,__weak) id<ADAdServingDaemonConnectionDelegate> delegate; 
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)performWhenConnected:(/*^block*/id)arg1 ;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<ADAdServingDaemonConnectionDelegate>)delegate;
-(NSMutableArray *)performWhenConnectedBlocks;
-(NSXPCConnection *)adServingDaemonConnection;
-(void)setDelegate:(id<ADAdServingDaemonConnectionDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)considerConnectingToAdServingDaemon;
-(void)invalidate;
-(id)rpcProxy;
-(id)rpcProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_considerConnectingToAdServingDaemon;
-(void)setAdServingDaemonConnection:(NSXPCConnection *)arg1 ;
-(void)setPerformWhenConnectedBlocks:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

