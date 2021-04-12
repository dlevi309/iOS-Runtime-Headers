/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol OS_os_log, OS_dispatch_queue;
@class NSObject, SBCPlaybackPositionSyncService;

@interface VUIPlaybackPositionController : NSObject {

	NSObject*<OS_os_log> _logObject;
	NSObject*<OS_dispatch_queue> _queue;
	SBCPlaybackPositionSyncService* _syncService;
	BOOL _running;

}

@property (assign,getter=isRunning,nonatomic) BOOL running;              //@synthesize running=_running - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(BOOL)isRunning;
-(void)setRunning:(BOOL)arg1 ;
-(void)_onQueue_beginCapturingEvents;
-(void)_onQueue_endCapturingEvents;
-(void)_onQueue_updateEntityWithPlaybackPositionInfo:(id)arg1 forTrack:(id)arg2 ;
-(void)beginCapturingEvents;
-(void)endCapturingEvents;
-(void)persistPlaybackPositionInfo:(id)arg1 forTrack:(id)arg2 ;
@end

