/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@interface AppStoreKit.VideoPlaybackCoordinator : NSObject {

	 videoViews;
	 videoViewFrameOverrides;
	 playbackQueue;
	 playbackFrame;
	 parentViewController;
	 playbackCoalescingWaitTime;
	 playbackWorkItem;
	 _isGlobalAutoPlayEnabled;
	 isAutoPlayEnabled;
	 isAutoPlayActive;
	 shouldLoopAutoPlayback;
	 shouldLoopSingleVideo;
	 currentPlaybackIndex;
	 activeVideo;

}
-(id)init;
-(void)willEnterForeground;
-(void)didEnterBackground;
-(void)didChangeAutoPlayVideoSetting:(id)arg1 ;
@end

