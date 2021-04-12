/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVFullScreenViewControllerDelegate <NSObject>
@required
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)fullScreenViewControllerWillBeginFullScreenPresentation:(id)arg1;
-(void)fullScreenViewControllerWillEndFullScreenPresentation:(id)arg1;
-(id)viewForFullScreenViewController:(id)arg1;
-(id)playbackContainerViewForFullScreenViewController:(id)arg1;
-(void)fullScreenViewController:(id)arg1 viewWillTransitionToSize:(CGSize)arg2 coordinator:(id)arg3;
-(BOOL)prefersStatusBarHiddenForFullScreenViewController:(id)arg1;
-(long long)preferredStatusStyleForFullScreenViewController:(id)arg1;
-(id)keyCommandResponderForFullScreenViewController:(id)arg1;

@end

