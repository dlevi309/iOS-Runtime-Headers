/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class MPCAssistantConnection, MPCAssistantDiscovery;

@interface MPCAssistantSendCommand : NSObject {

	MPCAssistantConnection* _connection;
	MPCAssistantDiscovery* _discovery;

}
-(id)init;
-(void)_sendCommand:(unsigned)arg1 withOptions:(id)arg2 toEndpoint:(void*)arg3 toDestination:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_formGroupAndSendCommand:(unsigned)arg1 withOptions:(id)arg2 toExternalDestination:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_sendCommand:(unsigned)arg1 path:(void*)arg2 options:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_isAnyDeviceControllable:(id)arg1 ;
-(void*)_findEndpointFromEndpoints:(id)arg1 byGroupLeader:(id)arg2 ;
-(void)sendMediaRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 toLocalDestination:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendMediaRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 toEndpointDestination:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

