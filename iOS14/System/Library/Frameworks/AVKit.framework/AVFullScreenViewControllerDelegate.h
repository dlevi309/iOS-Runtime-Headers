/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVFullScreenViewControllerDelegate <NSObject>
@required
-(long long)preferredInterfaceOrientationForPresentation;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)fullScreenViewControllerWillBeginFullScreenPresentation:(id)arg1;
-(void)fullScreenViewControllerWillEndFullScreenPresentation:(id)arg1;
-(id)viewForFullScreenViewController:(id)arg1;
-(id)playbackContainerViewForFullScreenViewController:(id)arg1;
-(void)fullScreenViewController:(id)arg1 viewWillTransitionToSize:(CGSize)arg2 coordinator:(id)arg3;
-(BOOL)prefersStatusBarHiddenForFullScreenViewController:(id)arg1;
-(long long)preferredStatusStyleForFullScreenViewController:(id)arg1;
-(id)keyCommandResponderForFullScreenViewController:(id)arg1;

@end

