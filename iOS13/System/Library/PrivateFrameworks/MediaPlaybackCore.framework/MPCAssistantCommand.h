/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol OS_dispatch_queue;
@class MPCAssistantSendCommand, MPCAssistantContext, NSObject, NSMutableDictionary, NSDate;

@interface MPCAssistantCommand : NSObject {

	MPCAssistantSendCommand* _sendCommand;
	MPCAssistantContext* _context;
	NSObject*<OS_dispatch_queue> _sendCommandQueue;
	NSMutableDictionary* _analytics;
	NSObject*<OS_dispatch_queue> _analyticsQueue;
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

