/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VideosUI.BackgroundPlaybackUIInteractionManager : NSObject {

	 backgroundMediaController;
	 hostingView;
	 overridesUserInterfaceStyleWhenPlaying;
	 supportsFullScreenTransition;
	 swipeUpView;
	 playbackState;
	 fullscreenTransitionHandler;
	 playbackStateChangeHandler;
	 hostingViewController;
	 menuGestureRecognizer;
	 userInterfaceStyleToRestore;
	 playbackDidStartObserver;
	 playbackDidStopObserver;
	 firstShowcasing;
	 showcaseObserver;

}
-(void)onSwipeUp;
-(id)init;
-(void)dealloc;
@end

