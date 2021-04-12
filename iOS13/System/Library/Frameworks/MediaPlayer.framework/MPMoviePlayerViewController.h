/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <UIKitCore/UIViewController.h>

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController {

	id _internal;
	BOOL _statusBarWasHidden;

}

@property (nonatomic,readonly) MPMoviePlayerController * moviePlayer; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)canBecomeFirstResponder;
-(long long)preferredWhitePointAdaptivityStyle;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)_canReloadView;
-(BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(id)initWithContentURL:(id)arg1 ;
-(MPMoviePlayerController *)moviePlayer;
-(void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_moviePlayerViewController_playbackDidFinishNotification:(id)arg1 ;
@end

