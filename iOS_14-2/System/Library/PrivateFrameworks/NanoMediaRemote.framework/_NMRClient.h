/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _NMRClient : NSObject {

	NSXPCConnection* _serverConnection;
	NSObject*<OS_dispatch_queue> _serverConnectionQueue;

}
+(id)sharedClient;
-(id)init;
-(id)_proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_synchronousProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)refreshMediaRemoteStateIfNecessary;
-(void)sendMediaRemoteCommand:(unsigned)arg1 withCommandOptions:(id)arg2 toOriginWithUniqueIdentifier:(int)arg3 commandResultHandler:(/*^block*/id)arg4 ;
-(void)prewarmCompanionSystemMusicApp;
-(void)discoverAndConnectEndpoints;
@end

