/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>

@protocol SVVideoViewControllerProviding, SVVideoPlaybackController, SVVideoPlaybackAdvancing, SVVideoQueueProviding;
@class NUVideoAdHistoryEventTracker, NSString;

@interface NUVideoPlayerDisappearanceController : NSObject <NUVideoPlayerEventTracker> {

	NUVideoAdHistoryEventTracker* _adHistoryEventTracker;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;
	id<SVVideoPlaybackController> _playbackController;
	id<SVVideoPlaybackAdvancing> _playbackAdvancer;
	id<SVVideoQueueProviding> _queueProvider;

}

@property (nonatomic,readonly) NUVideoAdHistoryEventTracker * adHistoryEventTracker;                        //@synthesize adHistoryEventTracker=_adHistoryEventTracker - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;                            //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,__weak,readonly) id<SVVideoPlaybackAdvancing> playbackAdvancer;                        //@synthesize playbackAdvancer=_playbackAdvancer - In the implementation block
@property (nonatomic,__weak,readonly) id<SVVideoQueueProviding> queueProvider;                              //@synthesize queueProvider=_queueProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SVVideoQueueProviding>)queueProvider;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(id<SVVideoPlaybackController>)playbackController;
-(id<SVVideoPlaybackAdvancing>)playbackAdvancer;
-(NUVideoAdHistoryEventTracker *)adHistoryEventTracker;
-(void)videoPlayerDidBecomeInvisible;
-(id)initWithAdHistoryEventTracker:(id)arg1 videoViewControllerProvider:(id)arg2 playbackController:(id)arg3 playbackAdvancer:(id)arg4 queueProvider:(id)arg5 ;
@end

