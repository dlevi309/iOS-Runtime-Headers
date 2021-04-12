/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <AVKit/AVPlayerViewController.h>

@protocol SiriUIVideoPlayerViewControllerDelegate;
@class NSString;

@interface SiriUIVideoPlayerViewController : AVPlayerViewController {

	BOOL _observingPlayerStatus;
	BOOL _observingItemStatus;
	BOOL _observingPlayback;
	BOOL _observingViewController;
	void* _playerStatusObserverContext;
	void* _itemStatusObserverContext;
	NSString* _savedAudioSessionCategory;
	unsigned long long _savedAudioSessionCategoryOptions;
	id<SiriUIVideoPlayerViewControllerDelegate> _videoPlayerControllerDelegate;

}

@property (assign,nonatomic,__weak) id<SiriUIVideoPlayerViewControllerDelegate> videoPlayerControllerDelegate;              //@synthesize videoPlayerControllerDelegate=_videoPlayerControllerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldPlayHighResolutionContent; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)setPlayer:(id)arg1 ;
-(void)_updateAudioSessionCategory;
-(void)doneButtonTapped:(id)arg1 ;
-(void)_registerObservers;
-(void)_removeObservers;
-(void)_restoreAudioPlaybackCategoryAndOptions;
-(id<SiriUIVideoPlayerViewControllerDelegate>)videoPlayerControllerDelegate;
-(void)_playbackDidFinish:(id)arg1 ;
-(BOOL)shouldPlayHighResolutionContent;
-(void)setVideoPlayerControllerDelegate:(id<SiriUIVideoPlayerViewControllerDelegate>)arg1 ;
@end

