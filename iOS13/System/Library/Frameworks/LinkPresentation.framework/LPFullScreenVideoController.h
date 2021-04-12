/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegatePrivate.h>

@class LPVideoView, LPAVPlayerViewController, __AVPlayerLayerView, AVPlayerController, AVPlayer, NSString;

@interface LPFullScreenVideoController : NSObject <AVPlayerViewControllerDelegatePrivate> {

	LPVideoView* _sourceView;
	LPAVPlayerViewController* _playerViewController;
	__AVPlayerLayerView* _playerLayerView;
	AVPlayerController* _playerController;
	AVPlayer* _player;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismiss;
-(void)present;
-(void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(BOOL)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 sourceView:(id)arg2 ;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setUpFullScreenVideoViewControllerIfNeeded;
@end

