/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

