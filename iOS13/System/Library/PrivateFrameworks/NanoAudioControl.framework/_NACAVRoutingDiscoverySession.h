/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject;

@interface _NACAVRoutingDiscoverySession : NSObject {

	void* _discoverySession;
	void* _callbackToken;
	NSObject*<OS_dispatch_group> _initialFetchGroup;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _initialFetchCompleted;

}
-(id)init;
-(void)dealloc;
-(void)fetchRouteForOriginIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

