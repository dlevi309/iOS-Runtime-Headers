/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class MPCAssistantSendCommand, MPCAssistantEndpointContext, NSObject, NSMutableDictionary, NSDate;

@interface MPCAssistantCommand : NSObject {

	MPCAssistantSendCommand* _sendCommand;
	MPCAssistantEndpointContext* _context;
	NSObject*<OS_dispatch_queue> _sendCommandQueue;
	NSMutableDictionary* _analytics;
	NSObject*<OS_dispatch_queue> _analyticsQueue;
	NSObject*<OS_dispatch_group> _analyticsGroup;
	NSDate* _startDate;

}
-(id)init;
-(void)sendCommand:(unsigned)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setAnalyticsKey:(id)arg1 value:(id)arg2 ;
-(void)_setAnalyticsError:(id)arg1 ;
-(void)sendPlaybackQueue:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_findOutputDevicesForDestination:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendPlaybackQueue:(id)arg1 toDestination:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendPlaybackArchive:(id)arg1 toDestination:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

