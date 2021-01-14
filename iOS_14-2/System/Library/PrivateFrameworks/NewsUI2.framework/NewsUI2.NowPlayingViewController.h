/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NUNowPlayingViewControllerDelegate.h>
#import <libobjc.A.dylib/NUNowPlayingDockedViewDelegate.h>

@interface NewsUI2.NowPlayingViewController : UIViewController <NUNowPlayingViewControllerDelegate, NUNowPlayingDockedViewDelegate> {

	 dockPresentationMode;
	 nowPlayingViewController;
	 tracker;
	 eventHandler;
	 playbackState;
	 publisherImageCache;
	 nowPlayingImageCache;
	 activityViewControllerFactory;
	 miniPlayerView;
	 commands;

}
-(void)nowPlayingViewController:(id)arg1 seekToPosition:(double)arg2 ;
-(void)nowPlayingViewControllerDidTapRewind:(id)arg1 ;
-(void)nowPlayingViewControllerDidTapPause:(id)arg1 ;
-(void)nowPlayingViewControllerDidTapPlay:(id)arg1 ;
-(void)nowPlayingViewControllerDidTapNextTrack:(id)arg1 ;
-(void)nowPlayingViewControllerDidTapPlaybackRate:(id)arg1 ;
-(void)nowPlayingViewControllerDidTapEllipsis:(id)arg1 ;
-(void)nowPlayingViewControllerDidTapDismissButton:(id)arg1 ;
-(id)nowPlayingViewController:(id)arg1 didReceiveContextMenuInteraction:(id)arg2 configurationForMenuAtLocation:(CGPoint)arg3 ;
-(void)nowPlayingDockedViewDidTapRewind:(id)arg1 ;
-(void)nowPlayingDockedViewDidTapPause:(id)arg1 ;
-(void)nowPlayingDockedViewDidTapPlay:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

