/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@interface MPCAssistantDiscovery : NSObject {

	void* _reconSession;
	BOOL _waitForCompleteClusters;

}

@property (assign,nonatomic) BOOL waitForCompleteClusters;              //@synthesize waitForCompleteClusters=_waitForCompleteClusters - In the implementation block
-(id)init;
-(BOOL)waitForCompleteClusters;
-(void)setWaitForCompleteClusters:(BOOL)arg1 ;
-(void)stopDiscovery;
-(void)dealloc;
-(void)_discoverAirplayDevices:(/*^block*/id)arg1 ;
-(void)discoverAirplayDevicesMatchingGroupID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)discoverAirplayDevicesMatchingLogicalDeviceIDs:(id)arg1 expectedCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)discoverAirplayDevicesMatchingUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)discoverRemoteControlEndpointsMatchingUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

