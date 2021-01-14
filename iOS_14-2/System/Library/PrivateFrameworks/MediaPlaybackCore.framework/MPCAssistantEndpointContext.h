/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MPCAssistantContext.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class MPCAssistantDiscovery, NSObject;

@interface MPCAssistantEndpointContext : MPCAssistantContext {

	MPCAssistantDiscovery* _discoveryLogical;
	MPCAssistantDiscovery* _discoveryAudio;
	MPCAssistantDiscovery* _discoveryEndpoint;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_group> _modificationInProgress;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> modificationInProgress;              //@synthesize modificationInProgress=_modificationInProgress - In the implementation block
-(id)init;
-(void)_setOutputDevices:(id)arg1 onEndpoint:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_discoverLocalEndpointFromDeviceInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateDiscoverableDeviceList:(id)arg1 deviceInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldSearchForLogicalDevices;
-(void)modifySystemMusicContextForDestination:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_group>)modificationInProgress;
-(void)setModificationInProgress:(NSObject*<OS_dispatch_group>)arg1 ;
@end

