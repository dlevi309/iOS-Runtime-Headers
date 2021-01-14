/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

