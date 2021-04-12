/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>

@protocol SVVisibilityMonitoring, SVVideoPlaybackController, SVVideoPlaybackPolicy;
@class NSString;

@interface NUVideoPlaybackAllowabilityManager : NSObject <NUVideoPlayerEventTracker> {

	id<SVVisibilityMonitoring> _visibilityMonitor;
	id<SVVideoPlaybackController> _playbackController;
	id<SVVideoPlaybackPolicy> _playbackPolicy;

}

@property (nonatomic,readonly) id<SVVisibilityMonitoring> visibilityMonitor;                  //@synthesize visibilityMonitor=_visibilityMonitor - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;              //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackPolicy> playbackPolicy;                      //@synthesize playbackPolicy=_playbackPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SVVideoPlaybackController>)playbackController;
-(id<SVVideoPlaybackPolicy>)playbackPolicy;
-(id<SVVisibilityMonitoring>)visibilityMonitor;
-(void)videoPlayerDidBecomeInvisible;
-(id)initWithPlayerVisibilityMonitor:(id)arg1 playbackController:(id)arg2 playbackPolicy:(id)arg3 ;
@end

