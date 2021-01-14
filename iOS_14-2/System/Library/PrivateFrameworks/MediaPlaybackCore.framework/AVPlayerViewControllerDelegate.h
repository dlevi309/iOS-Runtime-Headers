/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol AVPlayerViewControllerDelegate <NSObject>
@optional
-(void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
-(void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
-(void)playerViewControllerWillStartPictureInPicture:(id)arg1;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg1;
-(void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg1;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg1;
-(BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;
-(void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2;

@end

