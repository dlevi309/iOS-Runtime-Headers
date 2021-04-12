/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVRoutingDataSource.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface MPAVTelevisionRoutingDataSource : MPAVRoutingDataSource {

	void* _discoveryController;
	NSMutableArray* _discoveredTelevisions;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)init;
-(void)dealloc;
-(void)setDiscoveryMode:(long long)arg1 ;
-(BOOL)devicePresenceDetected;
-(id)_discoveredTelevisions;
-(void)getRoutesForCategory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getPickedRouteHasVolumeControlWithCompletion:(/*^block*/id)arg1 ;
-(void)_onQueue_controllerDidDiscoverTelevision:(void*)arg1 ;
-(void)_onQueue_controllerDidRemoveTelevision:(void*)arg1 ;
@end

