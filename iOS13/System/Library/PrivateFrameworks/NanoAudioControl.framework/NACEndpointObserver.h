/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/


@protocol OS_dispatch_queue;
@class NSObject, _NACAVRoutingDiscoverySession;

@interface NACEndpointObserver : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	_NACAVRoutingDiscoverySession* _nacDiscoverySession;

}
+(id)sharedObserver;
-(id)init;
-(void)fetchRouteForOriginIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateDiscoverySession;
@end

