/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRunning:(BOOL)arg1 ;
-(id)init;
-(BOOL)isRunning;
-(id)_init;
-(void)_onQueue_beginCapturingEvents;
-(void)_onQueue_endCapturingEvents;
-(void)_onQueue_updateEntityWithPlaybackPositionInfo:(id)arg1 forTrack:(id)arg2 ;
-(void)beginCapturingEvents;
-(void)endCapturingEvents;
-(void)persistPlaybackPositionInfo:(id)arg1 forTrack:(id)arg2 ;
@end

