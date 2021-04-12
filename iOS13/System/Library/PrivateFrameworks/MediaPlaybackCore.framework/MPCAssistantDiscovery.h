/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@interface MPCAssistantDiscovery : NSObject {

	void* _reconSession;

}
-(void)dealloc;
-(void)stopDiscovery;
-(void)_discoverAirplayDevices:(/*^block*/id)arg1 ;
-(void)discoverAirplayDevicesMatchingGroupID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)discoverAirplayDevicesMatchingUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)discoverRemoteControlEndpointsMatchingUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

