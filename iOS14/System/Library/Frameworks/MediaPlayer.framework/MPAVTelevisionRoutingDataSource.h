/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)devicePresenceDetected;
-(id)getRoutesForCategory:(id)arg1 ;
-(id)init;
-(id)_discoveredTelevisions;
-(void)getPickedRouteHasVolumeControlWithCompletion:(/*^block*/id)arg1 ;
-(void)_onQueue_controllerDidDiscoverTelevision:(void*)arg1 ;
-(void)_onQueue_controllerDidRemoveTelevision:(void*)arg1 ;
-(void)setDiscoveryMode:(long long)arg1 ;
-(void)dealloc;
@end

