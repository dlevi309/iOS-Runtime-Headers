/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVPlayerViewControllerContentViewDelegate <NSObject>
@required
-(void)playerViewControllerContentView:(id)arg1 willLoadPlaybackControlsView:(id)arg2;
-(void)playerViewControllerContentView:(id)arg1 willLoadTurboModePlaceholderView:(id)arg2;
-(BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)arg1;
-(void)playerViewControllerContentViewPlaybackContentContainerViewChanged:(id)arg1;
-(void)playerViewControllerContentViewDidLayoutSubviews:(id)arg1;
-(void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(id)arg1;
-(BOOL)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg1;
-(UIEdgeInsets*)playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(id)arg1;
-(void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg1;
-(BOOL)playerViewControllerContentViewHasActiveTransition:(id)arg1;
-(BOOL)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(id)arg1;
-(id)playerViewControllerContentViewOverrideLayoutClass:(id)arg1;
-(void)playerViewControllerContentViewDidUpdateScrollingStatus:(id)arg1;

@end

