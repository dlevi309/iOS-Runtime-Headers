/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)fetchCompanionCloudAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)discoverAndConnectEndpoints;
@end

