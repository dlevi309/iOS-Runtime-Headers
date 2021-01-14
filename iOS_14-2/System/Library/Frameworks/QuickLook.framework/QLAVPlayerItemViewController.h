/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>

@class QLOverlayPlayButton, AVPlayerViewController, AVPlayer, NSString;

@interface QLAVPlayerItemViewController : QLItemViewController <AVPlayerViewControllerDelegate> {

	QLOverlayPlayButton* _playButton;
	AVPlayerViewController* _playerViewController;
	BOOL _fullScreen;
	BOOL _mediaWasPausedOnResignActive;
	AVPlayer* _player;
	CGSize _imageSize;
	BOOL _isAudioOnly;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredWhitePointAdaptivityStyle;
-(CGSize)imageSize;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)pause;
-(void)play;
-(BOOL)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2 ;
-(void)enterFullScreen:(BOOL)arg1 ;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)hostApplicationDidEnterBackground:(id)arg1 ;
-(void)hostApplicationDidBecomeActive;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canEnterFullScreen;
@end

