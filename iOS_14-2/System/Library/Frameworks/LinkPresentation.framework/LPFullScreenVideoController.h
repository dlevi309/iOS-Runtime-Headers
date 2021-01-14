/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPlayer:(id)arg1 sourceView:(id)arg2 ;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)present;
-(BOOL)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:(id)arg1 ;
-(void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(void)setUpFullScreenVideoViewControllerIfNeeded;
-(void)didCompleteDismissal;
-(void)dismiss;
@end

