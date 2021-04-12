/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCAttachmentViewController.h>

@class AVPlayerViewController, NCMediaPlayPauseButton;

@interface NCVideoAttachmentViewController : NCAttachmentViewController {

	AVPlayerViewController* _playerViewController;
	NCMediaPlayPauseButton* _playPauseButton;
	CGSize _contentSize;

}

@property (nonatomic,retain) AVPlayerViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) NCMediaPlayPauseButton * playPauseButton;                   //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                         //@synthesize contentSize=_contentSize - In the implementation block
-(void)dealloc;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)_pause;
-(AVPlayerViewController *)playerViewController;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)_play;
-(void)setPlayPauseButton:(NCMediaPlayPauseButton *)arg1 ;
-(NCMediaPlayPauseButton *)playPauseButton;
-(void)_mediaPlayPauseButtonTapped:(id)arg1 ;
-(id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2 ;
-(void)handlePlayerItemDidPlayToEndTimeNotification:(id)arg1 ;
-(void)handlePlayerItemFailedToPlayToEndTimeNotification:(id)arg1 ;
-(CGSize)_sizeForVideoAsset:(id)arg1 ;
-(void)_mediaPlayPauseButtonUpdateSize;
-(void)_rewind;
@end

